#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010AB68
// Address: 0x10ab68 - 0x10abb8
void sub_0010AB68_0x10ab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AB68_0x10ab68");
#endif

    switch (ctx->pc) {
        case 0x10ab7cu: goto label_10ab7c;
        default: break;
    }

    ctx->pc = 0x10ab68u;

    // 0x10ab68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ab68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ab6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ab70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ab70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ab74: 0xc042a72  jal         func_10A9C8
    ctx->pc = 0x10AB74u;
    SET_GPR_U32(ctx, 31, 0x10AB7Cu);
    ctx->pc = 0x10AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB74u;
    // 0x10ab78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9C8u, 0x10AB74u, 0x10AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB7Cu;
label_10ab7c:
    // 0x10ab7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ab80: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x10ab80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x10ab84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x10ab88: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x10ab88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10ab8c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x10ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x10ab90: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x10ab90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10ab94: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AB94u;
    {
        const bool branch_taken_0x10ab94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB94u;
        // 0x10ab98: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab94) {
            ctx->pc = 0x10ABACu;
            goto label_10abac;
        }
    }
    ctx->pc = 0x10AB9Cu;
    // 0x10ab9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ab9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10aba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aba4: 0x8042a80  j           func_10AA00
    ctx->pc = 0x10ABA4u;
    ctx->pc = 0x10ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABA4u;
    // 0x10aba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA00u;
    sub_0010AA00_0x10aa00(rdram, ctx, runtime); return;
    ctx->pc = 0x10ABACu;
label_10abac:
    // 0x10abac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10abacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10abb0: 0x3e00008  jr          $ra
    ctx->pc = 0x10ABB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABB0u;
        // 0x10abb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ABB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ABB8u;
}

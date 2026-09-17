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

// Function: sub_0036CD68
// Address: 0x36cd68 - 0x36cde0
void sub_0036CD68_0x36cd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CD68_0x36cd68");
#endif

    switch (ctx->pc) {
        case 0x36cd9cu: goto label_36cd9c;
        default: break;
    }

    ctx->pc = 0x36cd68u;

    // 0x36cd68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36cd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36cd6c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36cd70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36cd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36cd74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36cd74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cd78: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36cd7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36cd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36cd80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36cd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36cd84: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36cd88: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36cd8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36cd8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cd90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36cd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36cd94: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36CD94u;
    SET_GPR_U32(ctx, 31, 0x36CD9Cu);
    ctx->pc = 0x36CD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CD94u;
    // 0x36cd98: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36CD94u, 0x36CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD9Cu;
label_36cd9c:
    // 0x36cd9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36cd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cda0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36cda4: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36cda8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36CDA8u;
    {
        const bool branch_taken_0x36cda8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDA8u;
        // 0x36cdac: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cda8) {
            ctx->pc = 0x36CDC8u;
            goto label_36cdc8;
        }
    }
    ctx->pc = 0x36CDB0u;
    // 0x36cdb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36cdb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cdb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36cdb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36cdb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36cdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36cdbc: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36CDBCu;
    ctx->pc = 0x36CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CDBCu;
    // 0x36cdc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36CDC4u;
    // 0x36cdc4: 0x0  nop
    ctx->pc = 0x36cdc4u;
    // NOP
label_36cdc8:
    // 0x36cdc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36cdc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cdcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36cdccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36cdd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36cdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36cdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x36CDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDD4u;
        // 0x36cdd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CDDCu;
    // 0x36cddc: 0x0  nop
    ctx->pc = 0x36cddcu;
    // NOP
    ctx->pc = 0x36cde0u;
}

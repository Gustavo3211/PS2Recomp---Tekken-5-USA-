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

// Function: sub_0036B3E8
// Address: 0x36b3e8 - 0x36b460
void sub_0036B3E8_0x36b3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B3E8_0x36b3e8");
#endif

    switch (ctx->pc) {
        case 0x36b41cu: goto label_36b41c;
        default: break;
    }

    ctx->pc = 0x36b3e8u;

    // 0x36b3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36b3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36b3ec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36b3f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b3f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36b3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b3f8: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36b3fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36b3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36b400: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36b404: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36b404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36b408: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36b408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36b40c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36b40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b410: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36b410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b414: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36B414u;
    SET_GPR_U32(ctx, 31, 0x36B41Cu);
    ctx->pc = 0x36B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B414u;
    // 0x36b418: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36B414u, 0x36B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B41Cu;
label_36b41c:
    // 0x36b41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b420: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36b420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36b424: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36b424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36b428: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36B428u;
    {
        const bool branch_taken_0x36b428 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B428u;
        // 0x36b42c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b428) {
            ctx->pc = 0x36B448u;
            goto label_36b448;
        }
    }
    ctx->pc = 0x36B430u;
    // 0x36b430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36b434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36b438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b43c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36B43Cu;
    ctx->pc = 0x36B440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B43Cu;
    // 0x36b440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36B444u;
    // 0x36b444: 0x0  nop
    ctx->pc = 0x36b444u;
    // NOP
label_36b448:
    // 0x36b448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b44c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36b44cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36b450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b454: 0x3e00008  jr          $ra
    ctx->pc = 0x36B454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B454u;
        // 0x36b458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B45Cu;
    // 0x36b45c: 0x0  nop
    ctx->pc = 0x36b45cu;
    // NOP
    ctx->pc = 0x36b460u;
}

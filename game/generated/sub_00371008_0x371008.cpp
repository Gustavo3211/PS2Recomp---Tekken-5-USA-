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

// Function: sub_00371008
// Address: 0x371008 - 0x371080
void sub_00371008_0x371008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371008_0x371008");
#endif

    switch (ctx->pc) {
        case 0x37103cu: goto label_37103c;
        default: break;
    }

    ctx->pc = 0x371008u;

    // 0x371008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x371008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37100c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x371010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x371014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371018: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x371018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x37101c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x371020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x371020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x371024: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x371024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x371028: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x371028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x37102c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x37102cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371030: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x371030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371034: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x371034u;
    SET_GPR_U32(ctx, 31, 0x37103Cu);
    ctx->pc = 0x371038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371034u;
    // 0x371038: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x371034u, 0x37103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37103Cu;
label_37103c:
    // 0x37103c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37103cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371040: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x371040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x371044: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x371044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x371048: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x371048u;
    {
        const bool branch_taken_0x371048 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371048u;
        // 0x37104c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371048) {
            ctx->pc = 0x371068u;
            goto label_371068;
        }
    }
    ctx->pc = 0x371050u;
    // 0x371050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x371054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x371058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37105c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x37105Cu;
    ctx->pc = 0x371060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37105Cu;
    // 0x371060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x371064u;
    // 0x371064: 0x0  nop
    ctx->pc = 0x371064u;
    // NOP
label_371068:
    // 0x371068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37106c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37106cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x371070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371074: 0x3e00008  jr          $ra
    ctx->pc = 0x371074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371074u;
        // 0x371078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37107Cu;
    // 0x37107c: 0x0  nop
    ctx->pc = 0x37107cu;
    // NOP
    ctx->pc = 0x371080u;
}

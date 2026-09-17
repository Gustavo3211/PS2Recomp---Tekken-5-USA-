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

// Function: sub_00364F98
// Address: 0x364f98 - 0x365050
void sub_00364F98_0x364f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364F98_0x364f98");
#endif

    switch (ctx->pc) {
        case 0x364fd4u: goto label_364fd4;
        case 0x364fe8u: goto label_364fe8;
        case 0x365000u: goto label_365000;
        case 0x36500cu: goto label_36500c;
        case 0x365034u: goto label_365034;
        default: break;
    }

    ctx->pc = 0x364f98u;

    // 0x364f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x364f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x364f9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x364f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x364fa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x364fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x364fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x364fa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x364fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x364fac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x364facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x364fb0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x364fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x364fb4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x364FB4u;
    {
        const bool branch_taken_0x364fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x364FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364FB4u;
        // 0x364fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364fb4) {
            ctx->pc = 0x365038u;
            goto label_365038;
        }
    }
    ctx->pc = 0x364FBCu;
    // 0x364fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x364fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364fc0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x364FC0u;
    {
        const bool branch_taken_0x364fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x364FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364FC0u;
        // 0x364fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364fc0) {
            ctx->pc = 0x364FE0u;
            goto label_364fe0;
        }
    }
    ctx->pc = 0x364FC8u;
    // 0x364fc8: 0xa22309cc  sb          $v1, 0x9CC($s1)
    ctx->pc = 0x364fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2508), (uint8_t)GPR_U32(ctx, 3));
    // 0x364fcc: 0xc0d9320  jal         func_364C80
    ctx->pc = 0x364FCCu;
    SET_GPR_U32(ctx, 31, 0x364FD4u);
    ctx->pc = 0x364FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364FCCu;
    // 0x364fd0: 0x240600ae  addiu       $a2, $zero, 0xAE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364C80u, 0x364FCCu, 0x364FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FD4u;
label_364fd4:
    // 0x364fd4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x364FD4u;
    {
        const bool branch_taken_0x364fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364FD4u;
        // 0x364fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364fd4) {
            ctx->pc = 0x365038u;
            goto label_365038;
        }
    }
    ctx->pc = 0x364FDCu;
    // 0x364fdc: 0x0  nop
    ctx->pc = 0x364fdcu;
    // NOP
label_364fe0:
    // 0x364fe0: 0xc0d9320  jal         func_364C80
    ctx->pc = 0x364FE0u;
    SET_GPR_U32(ctx, 31, 0x364FE8u);
    ctx->pc = 0x364FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364FE0u;
    // 0x364fe4: 0x240600b2  addiu       $a2, $zero, 0xB2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364C80u, 0x364FE0u, 0x364FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FE8u;
label_364fe8:
    // 0x364fe8: 0x822209dc  lb          $v0, 0x9DC($s1)
    ctx->pc = 0x364fe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2524)));
    // 0x364fec: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x364FECu;
    {
        const bool branch_taken_0x364fec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x364FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364FECu;
        // 0x364ff0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364fec) {
            ctx->pc = 0x36501Cu;
            goto label_36501c;
        }
    }
    ctx->pc = 0x364FF4u;
    // 0x364ff4: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x364ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x364ff8: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x364ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x364ffc: 0x0  nop
    ctx->pc = 0x364ffcu;
    // NOP
label_365000:
    // 0x365000: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x365000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x365004: 0xc0d8890  jal         func_362240
    ctx->pc = 0x365004u;
    SET_GPR_U32(ctx, 31, 0x36500Cu);
    ctx->pc = 0x365008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365004u;
    // 0x365008: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362240u, 0x365004u, 0x36500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36500Cu;
label_36500c:
    // 0x36500c: 0x822309dc  lb          $v1, 0x9DC($s1)
    ctx->pc = 0x36500cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2524)));
    // 0x365010: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x365010u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x365014: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x365014u;
    {
        const bool branch_taken_0x365014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x365014) {
            ctx->pc = 0x365018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365014u;
            // 0x365018: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365000;
        }
    }
    ctx->pc = 0x36501Cu;
label_36501c:
    // 0x36501c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x36501cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x365020: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x365020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x365024: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x365024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x365028: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x365028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36502c: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x36502Cu;
    SET_GPR_U32(ctx, 31, 0x365034u);
    ctx->pc = 0x365030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36502Cu;
    // 0x365030: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x36502Cu, 0x365034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365034u;
label_365034:
    // 0x365034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365038:
    // 0x365038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x365038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36503c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36503cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x365040: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x365040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365044: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x365044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365048: 0x3e00008  jr          $ra
    ctx->pc = 0x365048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365048u;
        // 0x36504c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365050u;
}

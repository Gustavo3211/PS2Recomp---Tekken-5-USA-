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

// Function: sub_00343FF0
// Address: 0x343ff0 - 0x344070
void sub_00343FF0_0x343ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343FF0_0x343ff0");
#endif

    switch (ctx->pc) {
        case 0x343ff0u: goto label_343ff0;
        case 0x343ff4u: goto label_343ff4;
        case 0x343ff8u: goto label_343ff8;
        case 0x343ffcu: goto label_343ffc;
        case 0x344000u: goto label_344000;
        case 0x344004u: goto label_344004;
        case 0x344008u: goto label_344008;
        case 0x34400cu: goto label_34400c;
        case 0x344010u: goto label_344010;
        case 0x344014u: goto label_344014;
        case 0x344018u: goto label_344018;
        case 0x34401cu: goto label_34401c;
        case 0x344020u: goto label_344020;
        case 0x344024u: goto label_344024;
        case 0x344028u: goto label_344028;
        case 0x34402cu: goto label_34402c;
        case 0x344030u: goto label_344030;
        case 0x344034u: goto label_344034;
        case 0x344038u: goto label_344038;
        case 0x34403cu: goto label_34403c;
        case 0x344040u: goto label_344040;
        case 0x344044u: goto label_344044;
        case 0x344048u: goto label_344048;
        case 0x34404cu: goto label_34404c;
        case 0x344050u: goto label_344050;
        case 0x344054u: goto label_344054;
        case 0x344058u: goto label_344058;
        case 0x34405cu: goto label_34405c;
        case 0x344060u: goto label_344060;
        case 0x344064u: goto label_344064;
        case 0x344068u: goto label_344068;
        case 0x34406cu: goto label_34406c;
        default: break;
    }

    ctx->pc = 0x343ff0u;

label_343ff0:
    // 0x343ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x343ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_343ff4:
    // 0x343ff4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x343ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_343ff8:
    // 0x343ff8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x343ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_343ffc:
    // 0x343ffc: 0xc0c8864  jal         func_322190
label_344000:
    if (ctx->pc == 0x344000u) {
        ctx->pc = 0x344004u;
        goto label_344004;
    }
    ctx->pc = 0x343FFCu;
    SET_GPR_U32(ctx, 31, 0x344004u);
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x343FFCu, 0x344004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344004u;
label_344004:
    // 0x344004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x344004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344008:
    // 0x344008: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x344008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34400c:
    // 0x34400c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34400cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_344010:
    // 0x344010: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x344010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_344014:
    // 0x344014: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x344014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_344018:
    // 0x344018: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x344018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_34401c:
    // 0x34401c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x34401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_344020:
    // 0x344020: 0x40f809  jalr        $v0
label_344024:
    if (ctx->pc == 0x344024u) {
        ctx->pc = 0x344024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344020u;
        // 0x344024: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344028u;
        goto label_344028;
    }
    ctx->pc = 0x344020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x344028u);
        ctx->pc = 0x344024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344020u;
        // 0x344024: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344020u, 0x344028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x344028u;
label_344028:
    // 0x344028: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x344028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34402c:
    // 0x34402c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x34402cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_344030:
    // 0x344030: 0x2405fff2  addiu       $a1, $zero, -0xE
    ctx->pc = 0x344030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
label_344034:
    // 0x344034: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x344034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_344038:
    // 0x344038: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x344038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_34403c:
    // 0x34403c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x34403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_344040:
    // 0x344040: 0x40f809  jalr        $v0
label_344044:
    if (ctx->pc == 0x344044u) {
        ctx->pc = 0x344044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344040u;
        // 0x344044: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344048u;
        goto label_344048;
    }
    ctx->pc = 0x344040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x344048u);
        ctx->pc = 0x344044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344040u;
        // 0x344044: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344040u, 0x344048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x344048u;
label_344048:
    // 0x344048: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x344048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_34404c:
    // 0x34404c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x34404cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_344050:
    // 0x344050: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x344050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
label_344054:
    // 0x344054: 0xc0ce5f2  jal         func_3397C8
label_344058:
    if (ctx->pc == 0x344058u) {
        ctx->pc = 0x344058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344054u;
        // 0x344058: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34405Cu;
        goto label_34405c;
    }
    ctx->pc = 0x344054u;
    SET_GPR_U32(ctx, 31, 0x34405Cu);
    ctx->pc = 0x344058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344054u;
    // 0x344058: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3397C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3397C8u, 0x344054u, 0x34405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34405Cu;
label_34405c:
    // 0x34405c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34405cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_344060:
    // 0x344060: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x344060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_344064:
    // 0x344064: 0x3e00008  jr          $ra
label_344068:
    if (ctx->pc == 0x344068u) {
        ctx->pc = 0x344068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344064u;
        // 0x344068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34406Cu;
        goto label_34406c;
    }
    ctx->pc = 0x344064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344064u;
        // 0x344068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34406Cu;
label_34406c:
    // 0x34406c: 0x0  nop
    ctx->pc = 0x34406cu;
    // NOP
    ctx->pc = 0x344070u;
}

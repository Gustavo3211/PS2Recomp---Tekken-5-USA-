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

// Function: sub_002CF0A0
// Address: 0x2cf0a0 - 0x2cf150
void sub_002CF0A0_0x2cf0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF0A0_0x2cf0a0");
#endif

    switch (ctx->pc) {
        case 0x2cf0c0u: goto label_2cf0c0;
        case 0x2cf0f8u: goto label_2cf0f8;
        case 0x2cf100u: goto label_2cf100;
        case 0x2cf108u: goto label_2cf108;
        case 0x2cf114u: goto label_2cf114;
        default: break;
    }

    ctx->pc = 0x2cf0a0u;

    // 0x2cf0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf0a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf0a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf0ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cf0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cf0b0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2cf0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2cf0b4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2cf0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2cf0b8: 0xc0b2e1c  jal         func_2CB870
    ctx->pc = 0x2CF0B8u;
    SET_GPR_U32(ctx, 31, 0x2CF0C0u);
    ctx->pc = 0x2CF0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF0B8u;
    // 0x2cf0bc: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB870u, 0x2CF0B8u, 0x2CF0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0C0u;
label_2cf0c0:
    // 0x2cf0c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cf0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf0c4: 0x260700a0  addiu       $a3, $s0, 0xA0
    ctx->pc = 0x2cf0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2cf0c8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2cf0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cf0cc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CF0CCu;
    {
        const bool branch_taken_0x2cf0cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0CCu;
        // 0x2cf0d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf0cc) {
            ctx->pc = 0x2CF0E4u;
            goto label_2cf0e4;
        }
    }
    ctx->pc = 0x2CF0D4u;
    // 0x2cf0d4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cf0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cf0d8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2cf0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2cf0dc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF0DCu;
    {
        const bool branch_taken_0x2cf0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cf0dc) {
            ctx->pc = 0x2CF0F0u;
            goto label_2cf0f0;
        }
    }
    ctx->pc = 0x2CF0E4u;
label_2cf0e4:
    // 0x2cf0e4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2cf0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2cf0e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cf0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf0ec: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2cf0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_2cf0f0:
    // 0x2cf0f0: 0xc0bb7aa  jal         func_2EDEA8
    ctx->pc = 0x2CF0F0u;
    SET_GPR_U32(ctx, 31, 0x2CF0F8u);
    ctx->pc = 0x2EDEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA8u, 0x2CF0F0u, 0x2CF0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0F8u;
label_2cf0f8:
    // 0x2cf0f8: 0xc0862ba  jal         func_218AE8
    ctx->pc = 0x2CF0F8u;
    SET_GPR_U32(ctx, 31, 0x2CF100u);
    ctx->pc = 0x218AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218AE8u, 0x2CF0F8u, 0x2CF100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF100u;
label_2cf100:
    // 0x2cf100: 0xc0b2782  jal         func_2C9E08
    ctx->pc = 0x2CF100u;
    SET_GPR_U32(ctx, 31, 0x2CF108u);
    ctx->pc = 0x2C9E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E08u, 0x2CF100u, 0x2CF108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF108u;
label_2cf108:
    // 0x2cf108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf10c: 0xc0b387a  jal         func_2CE1E8
    ctx->pc = 0x2CF10Cu;
    SET_GPR_U32(ctx, 31, 0x2CF114u);
    ctx->pc = 0x2CF110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF10Cu;
    // 0x2cf110: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE1E8u, 0x2CF10Cu, 0x2CF114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF114u;
label_2cf114:
    // 0x2cf114: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF114u;
    {
        const bool branch_taken_0x2cf114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF114u;
        // 0x2cf118: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf114) {
            ctx->pc = 0x2CF130u;
            goto label_2cf130;
        }
    }
    ctx->pc = 0x2CF11Cu;
    // 0x2cf11c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf120: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2cf120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2cf124: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF124u;
    {
        const bool branch_taken_0x2cf124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF124u;
        // 0x2cf128: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf124) {
            ctx->pc = 0x2CF138u;
            goto label_2cf138;
        }
    }
    ctx->pc = 0x2CF12Cu;
    // 0x2cf12c: 0x0  nop
    ctx->pc = 0x2cf12cu;
    // NOP
label_2cf130:
    // 0x2cf130: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2cf130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2cf134: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x2cf134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_2cf138:
    // 0x2cf138: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2cf138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2cf13c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cf13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf140: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2cf140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2cf144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf148: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF148u;
        // 0x2cf14c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF150u;
}

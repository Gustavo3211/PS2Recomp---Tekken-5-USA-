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

// Function: sub_00506570
// Address: 0x506570 - 0x506648
void sub_00506570_0x506570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506570_0x506570");
#endif

    switch (ctx->pc) {
        case 0x5065b0u: goto label_5065b0;
        case 0x506610u: goto label_506610;
        case 0x506620u: goto label_506620;
        default: break;
    }

    ctx->pc = 0x506570u;

    // 0x506570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x506570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x506574: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x506574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x506578: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x506578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50657c: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x50657cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x506580: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x506580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x506584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x506584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x506588: 0x2450c534  addiu       $s0, $v0, -0x3ACC
    ctx->pc = 0x506588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952244));
    // 0x50658c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x506590: 0x2471c52c  addiu       $s1, $v1, -0x3AD4
    ctx->pc = 0x506590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952236));
    // 0x506594: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x506594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x506598: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x506598u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x50659c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x5065a0: 0x2493f080  addiu       $s3, $a0, -0xF80
    ctx->pc = 0x5065a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x5065a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x5065a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x5065a8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x5065a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5065ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x5065acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC52Cu));
label_5065b0:
    // 0x5065b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5065b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5065b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x5065b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5065b8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x5065b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x5065bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5065bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5065c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5065c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x5065c4: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x5065c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x5065c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x5065c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x5065cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5065ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5065d0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x5065d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5065d4: 0x4620014  bltzl       $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x5065D4u;
    {
        const bool branch_taken_0x5065d4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x5065d4) {
            ctx->pc = 0x5065D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5065D4u;
            // 0x5065d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x506628u;
            goto label_506628;
        }
    }
    ctx->pc = 0x5065DCu;
    // 0x5065dc: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5065DCu;
    {
        const bool branch_taken_0x5065dc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x5065dc) {
            ctx->pc = 0x5065F0u;
            goto label_5065f0;
        }
    }
    ctx->pc = 0x5065E4u;
    // 0x5065e4: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x5065e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x5065e8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x5065E8u;
    {
        const bool branch_taken_0x5065e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5065e8) {
            ctx->pc = 0x5065ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5065E8u;
            // 0x5065ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x506628u;
            goto label_506628;
        }
    }
    ctx->pc = 0x5065F0u;
label_5065f0:
    // 0x5065f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x5065F0u;
    {
        const bool branch_taken_0x5065f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5065f0) {
            ctx->pc = 0x506608u;
            goto label_506608;
        }
    }
    ctx->pc = 0x5065F8u;
    // 0x5065f8: 0x10740007  beq         $v1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x5065F8u;
    {
        const bool branch_taken_0x5065f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x5065f8) {
            ctx->pc = 0x506618u;
            goto label_506618;
        }
    }
    ctx->pc = 0x506600u;
    // 0x506600: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x506600u;
    {
        const bool branch_taken_0x506600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506600u;
        // 0x506604: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506600) {
            ctx->pc = 0x5065B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5065b0;
        }
    }
    ctx->pc = 0x506608u;
label_506608:
    // 0x506608: 0xc1418a4  jal         func_506290
    ctx->pc = 0x506608u;
    SET_GPR_U32(ctx, 31, 0x506610u);
    ctx->pc = 0x506290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x506290u, 0x506608u, 0x506610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506610u;
label_506610:
    // 0x506610: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x506610u;
    {
        const bool branch_taken_0x506610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506610u;
        // 0x506614: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506610) {
            ctx->pc = 0x5065B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5065b0;
        }
    }
    ctx->pc = 0x506618u;
label_506618:
    // 0x506618: 0xc141948  jal         func_506520
    ctx->pc = 0x506618u;
    SET_GPR_U32(ctx, 31, 0x506620u);
    ctx->pc = 0x506520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x506520u, 0x506618u, 0x506620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506620u;
label_506620:
    // 0x506620: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x506620u;
    {
        const bool branch_taken_0x506620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506620u;
        // 0x506624: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506620) {
            ctx->pc = 0x5065B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5065b0;
        }
    }
    ctx->pc = 0x506628u;
label_506628:
    // 0x506628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x506628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50662c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50662cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x506630: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x506630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x506634: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x506634u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x506638: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x506638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50663c: 0x3e00008  jr          $ra
    ctx->pc = 0x50663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50663Cu;
        // 0x506640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50663Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x506644u;
    // 0x506644: 0x0  nop
    ctx->pc = 0x506644u;
    // NOP
    ctx->pc = 0x506648u;
}

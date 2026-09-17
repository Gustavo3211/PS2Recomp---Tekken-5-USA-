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

// Function: sub_002461E8
// Address: 0x2461e8 - 0x2462d0
void sub_002461E8_0x2461e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002461E8_0x2461e8");
#endif

    switch (ctx->pc) {
        case 0x246210u: goto label_246210;
        case 0x246238u: goto label_246238;
        case 0x246278u: goto label_246278;
        case 0x246288u: goto label_246288;
        case 0x246298u: goto label_246298;
        default: break;
    }

    ctx->pc = 0x2461e8u;

    // 0x2461e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2461e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2461ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2461ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2461f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2461f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2461f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2461f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2461f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2461f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2461fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2461fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x246200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x246204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x246208: 0xc0916b0  jal         func_245AC0
    ctx->pc = 0x246208u;
    SET_GPR_U32(ctx, 31, 0x246210u);
    ctx->pc = 0x24620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246208u;
    // 0x24620c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AC0u, 0x246208u, 0x246210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246210u;
label_246210:
    // 0x246210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x246210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246214: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x246214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x246218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24621c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24621cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x246220: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x246220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246224: 0x8c63f0d8  lw          $v1, -0xF28($v1)
    ctx->pc = 0x246224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963416)));
    // 0x246228: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x246228u;
    {
        const bool branch_taken_0x246228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246228) {
            ctx->pc = 0x246270u;
            goto label_246270;
        }
    }
    ctx->pc = 0x246230u;
    // 0x246230: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x246230u;
    SET_GPR_U32(ctx, 31, 0x246238u);
    ctx->pc = 0x246234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246230u;
    // 0x246234: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x246230u, 0x246238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246238u;
label_246238:
    // 0x246238: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x246238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24623c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x24623Cu;
    {
        const bool branch_taken_0x24623c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24623Cu;
        // 0x246240: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24623c) {
            ctx->pc = 0x2462B4u;
            goto label_2462b4;
        }
    }
    ctx->pc = 0x246244u;
    // 0x246244: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x246244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x246248: 0x1642001a  bne         $s2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x246248u;
    {
        const bool branch_taken_0x246248 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x24624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246248u;
        // 0x24624c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246248) {
            ctx->pc = 0x2462B4u;
            goto label_2462b4;
        }
    }
    ctx->pc = 0x246250u;
    // 0x246250: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x246250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x246254: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x246254u;
    {
        const bool branch_taken_0x246254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246254u;
        // 0x246258: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246254) {
            ctx->pc = 0x2462B0u;
            goto label_2462b0;
        }
    }
    ctx->pc = 0x24625Cu;
    // 0x24625c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x24625cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x246260: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x246260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x246264: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x246264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246268: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x246268u;
    {
        const bool branch_taken_0x246268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246268u;
        // 0x24626c: 0x8c530064  lw          $s3, 0x64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246268) {
            ctx->pc = 0x2462B0u;
            goto label_2462b0;
        }
    }
    ctx->pc = 0x246270u;
label_246270:
    // 0x246270: 0xc0916b8  jal         func_245AE0
    ctx->pc = 0x246270u;
    SET_GPR_U32(ctx, 31, 0x246278u);
    ctx->pc = 0x246274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246270u;
    // 0x246274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AE0u, 0x246270u, 0x246278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246278u;
label_246278:
    // 0x246278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24627c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24627cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246280: 0xc0916e6  jal         func_245B98
    ctx->pc = 0x246280u;
    SET_GPR_U32(ctx, 31, 0x246288u);
    ctx->pc = 0x246284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246280u;
    // 0x246284: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245B98u, 0x246280u, 0x246288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246288u;
label_246288:
    // 0x246288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24628c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24628cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246290: 0xc091704  jal         func_245C10
    ctx->pc = 0x246290u;
    SET_GPR_U32(ctx, 31, 0x246298u);
    ctx->pc = 0x246294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246290u;
    // 0x246294: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C10u, 0x246290u, 0x246298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246298u;
label_246298:
    // 0x246298: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x246298u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24629c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24629Cu;
    {
        const bool branch_taken_0x24629c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2462A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24629Cu;
        // 0x2462a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24629c) {
            ctx->pc = 0x2462B8u;
            goto label_2462b8;
        }
    }
    ctx->pc = 0x2462A4u;
    // 0x2462a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2462a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2462a8: 0x52420001  beql        $s2, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2462A8u;
    {
        const bool branch_taken_0x2462a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2462a8) {
            ctx->pc = 0x2462ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2462A8u;
            // 0x2462ac: 0x8c730064  lw          $s3, 0x64($v1) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2462B0u;
            goto label_2462b0;
        }
    }
    ctx->pc = 0x2462B0u;
label_2462b0:
    // 0x2462b0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2462b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2462b4:
    // 0x2462b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2462b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2462b8:
    // 0x2462b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2462b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2462bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2462bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2462c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2462c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2462c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2462c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2462c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2462C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2462CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462C8u;
        // 0x2462cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2462C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2462D0u;
}

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

// Function: sub_0025F348
// Address: 0x25f348 - 0x25f418
void sub_0025F348_0x25f348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F348_0x25f348");
#endif

    switch (ctx->pc) {
        case 0x25f3dcu: goto label_25f3dc;
        default: break;
    }

    ctx->pc = 0x25f348u;

    // 0x25f348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25f348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25f34c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25f350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25f354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25f358: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25f358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f35c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25f35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25f360: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25f360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f364: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x25f364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x25f368: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x25f368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25f36c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x25f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x25f370: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25f370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25f374: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25f374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25f378: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x25f378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x25f37c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x25f37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x25f380: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x25f380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x25f384: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x25f384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x25f388: 0x8e080048  lw          $t0, 0x48($s0)
    ctx->pc = 0x25f388u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x25f38c: 0x8d030898  lw          $v1, 0x898($t0)
    ctx->pc = 0x25f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2200)));
    // 0x25f390: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x25f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x25f394: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25F394u;
    {
        const bool branch_taken_0x25f394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F394u;
        // 0x25f398: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f394) {
            ctx->pc = 0x25F3B4u;
            goto label_25f3b4;
        }
    }
    ctx->pc = 0x25F39Cu;
    // 0x25f39c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x25f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x25f3a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F3A0u;
    {
        const bool branch_taken_0x25f3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f3a0) {
            ctx->pc = 0x25F3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F3A0u;
            // 0x25f3a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F3B8u;
            goto label_25f3b8;
        }
    }
    ctx->pc = 0x25F3A8u;
    // 0x25f3a8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x25f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x25f3ac: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F3ACu;
    {
        const bool branch_taken_0x25f3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f3ac) {
            ctx->pc = 0x25F3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F3ACu;
            // 0x25f3b0: 0x8d020898  lw          $v0, 0x898($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F3BCu;
            goto label_25f3bc;
        }
    }
    ctx->pc = 0x25F3B4u;
label_25f3b4:
    // 0x25f3b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25f3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f3b8:
    // 0x25f3b8: 0x8d020898  lw          $v0, 0x898($t0)
    ctx->pc = 0x25f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2200)));
label_25f3bc:
    // 0x25f3bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25f3c0: 0x9448006c  lhu         $t0, 0x6C($v0)
    ctx->pc = 0x25f3c0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x25f3c4: 0x11030003  beq         $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F3C4u;
    {
        const bool branch_taken_0x25f3c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x25F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3C4u;
        // 0x25f3c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3c4) {
            ctx->pc = 0x25F3D4u;
            goto label_25f3d4;
        }
    }
    ctx->pc = 0x25F3CCu;
    // 0x25f3cc: 0x5502000d  bnel        $t0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25F3CCu;
    {
        const bool branch_taken_0x25f3cc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f3cc) {
            ctx->pc = 0x25F3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F3CCu;
            // 0x25f3d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F404u;
            goto label_25f404;
        }
    }
    ctx->pc = 0x25F3D4u;
label_25f3d4:
    // 0x25f3d4: 0xc097c72  jal         func_25F1C8
    ctx->pc = 0x25F3D4u;
    SET_GPR_U32(ctx, 31, 0x25F3DCu);
    ctx->pc = 0x25F1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1C8u, 0x25F3D4u, 0x25F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F3DCu;
label_25f3dc:
    // 0x25f3dc: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x25f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x25f3e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x25f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25f3e4: 0x8c6206b4  lw          $v0, 0x6B4($v1)
    ctx->pc = 0x25f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1716)));
    // 0x25f3e8: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x25f3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x25f3ec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x25f3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x25f3f0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x25f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x25f3f4: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x25f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x25f3f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25f3fc: 0xac6206b4  sw          $v0, 0x6B4($v1)
    ctx->pc = 0x25f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1716), GPR_U32(ctx, 2));
    // 0x25f400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25f400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f404:
    // 0x25f404: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25f404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25f408: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25f408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f40c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x25f40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25f410: 0x3e00008  jr          $ra
    ctx->pc = 0x25F410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F410u;
        // 0x25f414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F418u;
}

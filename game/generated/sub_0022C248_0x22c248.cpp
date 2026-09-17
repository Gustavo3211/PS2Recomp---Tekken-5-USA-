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

// Function: sub_0022C248
// Address: 0x22c248 - 0x22c378
void sub_0022C248_0x22c248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C248_0x22c248");
#endif

    switch (ctx->pc) {
        case 0x22c290u: goto label_22c290;
        case 0x22c298u: goto label_22c298;
        case 0x22c2b8u: goto label_22c2b8;
        case 0x22c2d8u: goto label_22c2d8;
        case 0x22c308u: goto label_22c308;
        case 0x22c348u: goto label_22c348;
        default: break;
    }

    ctx->pc = 0x22c248u;

    // 0x22c248: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22c248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22c24c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x22c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x22c250: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x22c250u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c254: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x22c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x22c258: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x22c258u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c25c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x22c25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x22c260: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x22c260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x22c264: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22c264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22c268: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x22c268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x22c26c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22c26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22c270: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x22c270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x22c274: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x22c274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x22c278: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x22c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x22c27c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x22c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x22c280: 0x8ed70058  lw          $s7, 0x58($s6)
    ctx->pc = 0x22c280u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x22c284: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x22c284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x22c288: 0xc08b1ea  jal         func_22C7A8
    ctx->pc = 0x22C288u;
    SET_GPR_U32(ctx, 31, 0x22C290u);
    ctx->pc = 0x22C28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C288u;
    // 0x22c28c: 0x8ed5005c  lw          $s5, 0x5C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C7A8u, 0x22C288u, 0x22C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C290u;
label_22c290:
    // 0x22c290: 0x1ae00028  blez        $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x22C290u;
    {
        const bool branch_taken_0x22c290 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x22C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C290u;
        // 0x22c294: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c290) {
            ctx->pc = 0x22C334u;
            goto label_22c334;
        }
    }
    ctx->pc = 0x22C298u;
label_22c298:
    // 0x22c298: 0x26a20008  addiu       $v0, $s5, 0x8
    ctx->pc = 0x22c298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x22c29c: 0x8eb40004  lw          $s4, 0x4($s5)
    ctx->pc = 0x22c29cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x22c2a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c2a4: 0x26b3000c  addiu       $s3, $s5, 0xC
    ctx->pc = 0x22c2a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x22c2a8: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x22c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x22c2ac: 0x83180b  movn        $v1, $a0, $v1
    ctx->pc = 0x22c2acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x22c2b0: 0x1a80001d  blez        $s4, . + 4 + (0x1D << 2)
    ctx->pc = 0x22C2B0u;
    {
        const bool branch_taken_0x22c2b0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x22C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2B0u;
        // 0x22c2b4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2b0) {
            ctx->pc = 0x22C328u;
            goto label_22c328;
        }
    }
    ctx->pc = 0x22C2B8u;
label_22c2b8:
    // 0x22c2b8: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x22c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x22c2bc: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x22c2bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22c2c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c2c4: 0x26700008  addiu       $s0, $s3, 0x8
    ctx->pc = 0x22c2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x22c2c8: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x22c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x22c2cc: 0x83180b  movn        $v1, $a0, $v1
    ctx->pc = 0x22c2ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x22c2d0: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x22C2D0u;
    {
        const bool branch_taken_0x22c2d0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x22C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2D0u;
        // 0x22c2d4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2d0) {
            ctx->pc = 0x22C31Cu;
            goto label_22c31c;
        }
    }
    ctx->pc = 0x22C2D8u;
label_22c2d8:
    // 0x22c2d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c2dc: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x22c2dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x22c2e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x22c2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22c2e4: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x22c2e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22c2e8: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x22c2e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x22c2ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22C2ECu;
    {
        const bool branch_taken_0x22c2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2ECu;
        // 0x22c2f0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2ec) {
            ctx->pc = 0x22C310u;
            goto label_22c310;
        }
    }
    ctx->pc = 0x22C2F4u;
    // 0x22c2f4: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22C2F4u;
    {
        const bool branch_taken_0x22c2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c2f4) {
            ctx->pc = 0x22C2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C2F4u;
            // 0x22c2f8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C314u;
            goto label_22c314;
        }
    }
    ctx->pc = 0x22C2FCu;
    // 0x22c2fc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x22c2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c300: 0xc08b03a  jal         func_22C0E8
    ctx->pc = 0x22C300u;
    SET_GPR_U32(ctx, 31, 0x22C308u);
    ctx->pc = 0x22C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C300u;
    // 0x22c304: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C0E8u, 0x22C300u, 0x22C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C308u;
label_22c308:
    // 0x22c308: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22c308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x22c30c: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x22c30cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c310:
    // 0x22c310: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x22c310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_22c314:
    // 0x22c314: 0x1e40fff0  bgtz        $s2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x22C314u;
    {
        const bool branch_taken_0x22c314 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x22C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C314u;
        // 0x22c318: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c314) {
            ctx->pc = 0x22C2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c2d8;
        }
    }
    ctx->pc = 0x22C31Cu;
label_22c31c:
    // 0x22c31c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x22c31cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x22c320: 0x1e80ffe5  bgtz        $s4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x22C320u;
    {
        const bool branch_taken_0x22c320 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x22C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C320u;
        // 0x22c324: 0x8e730004  lw          $s3, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c320) {
            ctx->pc = 0x22C2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c2b8;
        }
    }
    ctx->pc = 0x22C328u;
label_22c328:
    // 0x22c328: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x22c328u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x22c32c: 0x1ee0ffda  bgtz        $s7, . + 4 + (-0x26 << 2)
    ctx->pc = 0x22C32Cu;
    {
        const bool branch_taken_0x22c32c = (GPR_S32(ctx, 23) > 0);
        ctx->pc = 0x22C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C32Cu;
        // 0x22c330: 0x8eb50008  lw          $s5, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c32c) {
            ctx->pc = 0x22C298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c298;
        }
    }
    ctx->pc = 0x22C334u;
label_22c334:
    // 0x22c334: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x22c334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c338: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x22c338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c33c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x22c33cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22c340: 0xc08b060  jal         func_22C180
    ctx->pc = 0x22C340u;
    SET_GPR_U32(ctx, 31, 0x22C348u);
    ctx->pc = 0x22C344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C340u;
    // 0x22c344: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C180u, 0x22C340u, 0x22C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C348u;
label_22c348:
    // 0x22c348: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x22c348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c34c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x22c34cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22c350: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22c350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c354: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x22c354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c358: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22c358u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c35c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x22c35cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c360: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x22c360u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c364: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x22c364u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22c368: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x22c368u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c36c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x22c36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x22c370: 0x3e00008  jr          $ra
    ctx->pc = 0x22C370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C370u;
        // 0x22c374: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C378u;
}

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

// Function: sub_00288270
// Address: 0x288270 - 0x2883b0
void sub_00288270_0x288270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288270_0x288270");
#endif

    switch (ctx->pc) {
        case 0x288390u: goto label_288390;
        case 0x2883a4u: goto label_2883a4;
        default: break;
    }

    ctx->pc = 0x288270u;

    // 0x288270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x288270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x288274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288278: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x288278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x28827c: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x28827Cu;
    {
        const bool branch_taken_0x28827c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28827c) {
            ctx->pc = 0x288280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28827Cu;
            // 0x288280: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2883A8u;
            goto label_2883a8;
        }
    }
    ctx->pc = 0x288284u;
    // 0x288284: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x288284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x288288: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x288288u;
    {
        const bool branch_taken_0x288288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288288u;
        // 0x28828c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288288) {
            ctx->pc = 0x2883A4u;
            goto label_2883a4;
        }
    }
    ctx->pc = 0x288290u;
    // 0x288290: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x288290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x288294: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288294u;
    {
        const bool branch_taken_0x288294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288294u;
        // 0x288298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288294) {
            ctx->pc = 0x2882A8u;
            goto label_2882a8;
        }
    }
    ctx->pc = 0x28829Cu;
    // 0x28829c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28829Cu;
    {
        const bool branch_taken_0x28829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2882A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28829Cu;
        // 0x2882a0: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28829c) {
            ctx->pc = 0x2882ACu;
            goto label_2882ac;
        }
    }
    ctx->pc = 0x2882A4u;
    // 0x2882a4: 0x0  nop
    ctx->pc = 0x2882a4u;
    // NOP
label_2882a8:
    // 0x2882a8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2882a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_2882ac:
    // 0x2882ac: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2882acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2882b0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2882b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2882b4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2882b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2882b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2882b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2882bc: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2882bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2882c0: 0x24c6ac10  addiu       $a2, $a2, -0x53F0
    ctx->pc = 0x2882c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945808));
    // 0x2882c4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2882c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2882c8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2882c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2882cc: 0x4600036  bltz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2882CCu;
    {
        const bool branch_taken_0x2882cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2882D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882CCu;
        // 0x2882d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882cc) {
            ctx->pc = 0x2883A8u;
            goto label_2883a8;
        }
    }
    ctx->pc = 0x2882D4u;
    // 0x2882d4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2882d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2882d8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2882D8u;
    {
        const bool branch_taken_0x2882d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2882d8) {
            ctx->pc = 0x2882DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2882D8u;
            // 0x2882dc: 0x8c830018  lw          $v1, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2882F0u;
            goto label_2882f0;
        }
    }
    ctx->pc = 0x2882E0u;
    // 0x2882e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2882e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2882e4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2882e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2882e8: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x2882e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x2882ec: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2882ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2882f0:
    // 0x2882f0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2882f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2882f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2882f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2882f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2882f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2882fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2882fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x288300: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x288300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x288304: 0x0  nop
    ctx->pc = 0x288304u;
    // NOP
    // 0x288308: 0x0  nop
    ctx->pc = 0x288308u;
    // NOP
    // 0x28830c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x28830cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x288310: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288310u;
    {
        const bool branch_taken_0x288310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288310u;
        // 0x288314: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288310) {
            ctx->pc = 0x288320u;
            goto label_288320;
        }
    }
    ctx->pc = 0x288318u;
    // 0x288318: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x288318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x28831c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28831cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288320:
    // 0x288320: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x288320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x288324: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288324u;
    {
        const bool branch_taken_0x288324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288324u;
        // 0x288328: 0x2862003c  slti        $v0, $v1, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288324) {
            ctx->pc = 0x288334u;
            goto label_288334;
        }
    }
    ctx->pc = 0x28832Cu;
    // 0x28832c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28832cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288330: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x288330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_288334:
    // 0x288334: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x288334u;
    {
        const bool branch_taken_0x288334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288334) {
            ctx->pc = 0x288338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288334u;
            // 0x288338: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28833Cu;
            goto label_28833c;
        }
    }
    ctx->pc = 0x28833Cu;
label_28833c:
    // 0x28833c: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x28833cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x288340: 0x24a2fffa  addiu       $v0, $a1, -0x6
    ctx->pc = 0x288340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
    // 0x288344: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x288344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x288348: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288348u;
    {
        const bool branch_taken_0x288348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288348u;
        // 0x28834c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288348) {
            ctx->pc = 0x288368u;
            goto label_288368;
        }
    }
    ctx->pc = 0x288350u;
    // 0x288350: 0x38a20008  xori        $v0, $a1, 0x8
    ctx->pc = 0x288350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)8);
    // 0x288354: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x288354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x288358: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x288358u;
    {
        const bool branch_taken_0x288358 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x28835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288358u;
        // 0x28835c: 0x2c480001  sltiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288358) {
            ctx->pc = 0x288374u;
            goto label_288374;
        }
    }
    ctx->pc = 0x288360u;
    // 0x288360: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x288360u;
    {
        const bool branch_taken_0x288360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288360u;
        // 0x288364: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288360) {
            ctx->pc = 0x288374u;
            goto label_288374;
        }
    }
    ctx->pc = 0x288368u;
label_288368:
    // 0x288368: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x288368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28836c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x28836cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x288370: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x288370u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_288374:
    // 0x288374: 0x24e2ffe7  addiu       $v0, $a3, -0x19
    ctx->pc = 0x288374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967271));
    // 0x288378: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x288378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x28837c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28837Cu;
    {
        const bool branch_taken_0x28837c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28837Cu;
        // 0x288380: 0x8cc70008  lw          $a3, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28837c) {
            ctx->pc = 0x288398u;
            goto label_288398;
        }
    }
    ctx->pc = 0x288384u;
    // 0x288384: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x288384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x288388: 0xc0a1f0e  jal         func_287C38
    ctx->pc = 0x288388u;
    SET_GPR_U32(ctx, 31, 0x288390u);
    ctx->pc = 0x28838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288388u;
    // 0x28838c: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287C38u, 0x288388u, 0x288390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288390u;
label_288390:
    // 0x288390: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288390u;
    {
        const bool branch_taken_0x288390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288390u;
        // 0x288394: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288390) {
            ctx->pc = 0x2883A8u;
            goto label_2883a8;
        }
    }
    ctx->pc = 0x288398u;
label_288398:
    // 0x288398: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x288398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28839c: 0xc0a1fe8  jal         func_287FA0
    ctx->pc = 0x28839Cu;
    SET_GPR_U32(ctx, 31, 0x2883A4u);
    ctx->pc = 0x2883A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28839Cu;
    // 0x2883a0: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287FA0u, 0x28839Cu, 0x2883A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883A4u;
label_2883a4:
    // 0x2883a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2883a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2883a8:
    // 0x2883a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2883A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2883ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2883A8u;
        // 0x2883ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2883A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2883B0u;
}

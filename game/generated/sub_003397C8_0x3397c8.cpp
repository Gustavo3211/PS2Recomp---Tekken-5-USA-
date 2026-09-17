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

// Function: sub_003397C8
// Address: 0x3397c8 - 0x339988
void sub_003397C8_0x3397c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003397C8_0x3397c8");
#endif

    switch (ctx->pc) {
        case 0x3397c8u: goto label_3397c8;
        case 0x3397ccu: goto label_3397cc;
        case 0x3397d0u: goto label_3397d0;
        case 0x3397d4u: goto label_3397d4;
        case 0x3397d8u: goto label_3397d8;
        case 0x3397dcu: goto label_3397dc;
        case 0x3397e0u: goto label_3397e0;
        case 0x3397e4u: goto label_3397e4;
        case 0x3397e8u: goto label_3397e8;
        case 0x3397ecu: goto label_3397ec;
        case 0x3397f0u: goto label_3397f0;
        case 0x3397f4u: goto label_3397f4;
        case 0x3397f8u: goto label_3397f8;
        case 0x3397fcu: goto label_3397fc;
        case 0x339800u: goto label_339800;
        case 0x339804u: goto label_339804;
        case 0x339808u: goto label_339808;
        case 0x33980cu: goto label_33980c;
        case 0x339810u: goto label_339810;
        case 0x339814u: goto label_339814;
        case 0x339818u: goto label_339818;
        case 0x33981cu: goto label_33981c;
        case 0x339820u: goto label_339820;
        case 0x339824u: goto label_339824;
        case 0x339828u: goto label_339828;
        case 0x33982cu: goto label_33982c;
        case 0x339830u: goto label_339830;
        case 0x339834u: goto label_339834;
        case 0x339838u: goto label_339838;
        case 0x33983cu: goto label_33983c;
        case 0x339840u: goto label_339840;
        case 0x339844u: goto label_339844;
        case 0x339848u: goto label_339848;
        case 0x33984cu: goto label_33984c;
        case 0x339850u: goto label_339850;
        case 0x339854u: goto label_339854;
        case 0x339858u: goto label_339858;
        case 0x33985cu: goto label_33985c;
        case 0x339860u: goto label_339860;
        case 0x339864u: goto label_339864;
        case 0x339868u: goto label_339868;
        case 0x33986cu: goto label_33986c;
        case 0x339870u: goto label_339870;
        case 0x339874u: goto label_339874;
        case 0x339878u: goto label_339878;
        case 0x33987cu: goto label_33987c;
        case 0x339880u: goto label_339880;
        case 0x339884u: goto label_339884;
        case 0x339888u: goto label_339888;
        case 0x33988cu: goto label_33988c;
        case 0x339890u: goto label_339890;
        case 0x339894u: goto label_339894;
        case 0x339898u: goto label_339898;
        case 0x33989cu: goto label_33989c;
        case 0x3398a0u: goto label_3398a0;
        case 0x3398a4u: goto label_3398a4;
        case 0x3398a8u: goto label_3398a8;
        case 0x3398acu: goto label_3398ac;
        case 0x3398b0u: goto label_3398b0;
        case 0x3398b4u: goto label_3398b4;
        case 0x3398b8u: goto label_3398b8;
        case 0x3398bcu: goto label_3398bc;
        case 0x3398c0u: goto label_3398c0;
        case 0x3398c4u: goto label_3398c4;
        case 0x3398c8u: goto label_3398c8;
        case 0x3398ccu: goto label_3398cc;
        case 0x3398d0u: goto label_3398d0;
        case 0x3398d4u: goto label_3398d4;
        case 0x3398d8u: goto label_3398d8;
        case 0x3398dcu: goto label_3398dc;
        case 0x3398e0u: goto label_3398e0;
        case 0x3398e4u: goto label_3398e4;
        case 0x3398e8u: goto label_3398e8;
        case 0x3398ecu: goto label_3398ec;
        case 0x3398f0u: goto label_3398f0;
        case 0x3398f4u: goto label_3398f4;
        case 0x3398f8u: goto label_3398f8;
        case 0x3398fcu: goto label_3398fc;
        case 0x339900u: goto label_339900;
        case 0x339904u: goto label_339904;
        case 0x339908u: goto label_339908;
        case 0x33990cu: goto label_33990c;
        case 0x339910u: goto label_339910;
        case 0x339914u: goto label_339914;
        case 0x339918u: goto label_339918;
        case 0x33991cu: goto label_33991c;
        case 0x339920u: goto label_339920;
        case 0x339924u: goto label_339924;
        case 0x339928u: goto label_339928;
        case 0x33992cu: goto label_33992c;
        case 0x339930u: goto label_339930;
        case 0x339934u: goto label_339934;
        case 0x339938u: goto label_339938;
        case 0x33993cu: goto label_33993c;
        case 0x339940u: goto label_339940;
        case 0x339944u: goto label_339944;
        case 0x339948u: goto label_339948;
        case 0x33994cu: goto label_33994c;
        case 0x339950u: goto label_339950;
        case 0x339954u: goto label_339954;
        case 0x339958u: goto label_339958;
        case 0x33995cu: goto label_33995c;
        case 0x339960u: goto label_339960;
        case 0x339964u: goto label_339964;
        case 0x339968u: goto label_339968;
        case 0x33996cu: goto label_33996c;
        case 0x339970u: goto label_339970;
        case 0x339974u: goto label_339974;
        case 0x339978u: goto label_339978;
        case 0x33997cu: goto label_33997c;
        case 0x339980u: goto label_339980;
        case 0x339984u: goto label_339984;
        default: break;
    }

    ctx->pc = 0x3397c8u;

label_3397c8:
    // 0x3397c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3397c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3397cc:
    // 0x3397cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3397ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3397d0:
    // 0x3397d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3397d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3397d4:
    // 0x3397d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3397d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3397d8:
    // 0x3397d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3397d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3397dc:
    // 0x3397dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3397dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3397e0:
    // 0x3397e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3397e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3397e4:
    // 0x3397e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3397e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3397e8:
    // 0x3397e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3397e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3397ec:
    // 0x3397ec: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_3397f0:
    if (ctx->pc == 0x3397F0u) {
        ctx->pc = 0x3397F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3397ECu;
        // 0x3397f0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3397F4u;
        goto label_3397f4;
    }
    ctx->pc = 0x3397ECu;
    {
        const bool branch_taken_0x3397ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3397F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3397ECu;
        // 0x3397f0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3397ec) {
            ctx->pc = 0x339820u;
            goto label_339820;
        }
    }
    ctx->pc = 0x3397F4u;
label_3397f4:
    // 0x3397f4: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x3397f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3397f8:
    // 0x3397f8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3397f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_3397fc:
    // 0x3397fc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3397fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_339800:
    // 0x339800: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x339800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_339804:
    // 0x339804: 0x40f809  jalr        $v0
label_339808:
    if (ctx->pc == 0x339808u) {
        ctx->pc = 0x339808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339804u;
        // 0x339808: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33980Cu;
        goto label_33980c;
    }
    ctx->pc = 0x339804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33980Cu);
        ctx->pc = 0x339808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339804u;
        // 0x339808: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339804u, 0x33980Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33980Cu;
label_33980c:
    // 0x33980c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_339810:
    if (ctx->pc == 0x339810u) {
        ctx->pc = 0x339810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33980Cu;
        // 0x339810: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339814u;
        goto label_339814;
    }
    ctx->pc = 0x33980Cu;
    {
        const bool branch_taken_0x33980c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33980c) {
            ctx->pc = 0x339810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33980Cu;
            // 0x339810: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339824u;
            goto label_339824;
        }
    }
    ctx->pc = 0x339814u;
label_339814:
    // 0x339814: 0x10000003  b           . + 4 + (0x3 << 2)
label_339818:
    if (ctx->pc == 0x339818u) {
        ctx->pc = 0x339818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339814u;
        // 0x339818: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33981Cu;
        goto label_33981c;
    }
    ctx->pc = 0x339814u;
    {
        const bool branch_taken_0x339814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339814u;
        // 0x339818: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339814) {
            ctx->pc = 0x339824u;
            goto label_339824;
        }
    }
    ctx->pc = 0x33981Cu;
label_33981c:
    // 0x33981c: 0x0  nop
    ctx->pc = 0x33981cu;
    // NOP
label_339820:
    // 0x339820: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x339820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_339824:
    // 0x339824: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x339824u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_339828:
    // 0x339828: 0x3c130044  lui         $s3, 0x44
    ctx->pc = 0x339828u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)68 << 16));
label_33982c:
    // 0x33982c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_339830:
    if (ctx->pc == 0x339830u) {
        ctx->pc = 0x339830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33982Cu;
        // 0x339830: 0x26640400  addiu       $a0, $s3, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339834u;
        goto label_339834;
    }
    ctx->pc = 0x33982Cu;
    {
        const bool branch_taken_0x33982c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x339830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33982Cu;
        // 0x339830: 0x26640400  addiu       $a0, $s3, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33982c) {
            ctx->pc = 0x339848u;
            goto label_339848;
        }
    }
    ctx->pc = 0x339834u;
label_339834:
    // 0x339834: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x339834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_339838:
    // 0x339838: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x339838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_33983c:
    // 0x33983c: 0x10000009  b           . + 4 + (0x9 << 2)
label_339840:
    if (ctx->pc == 0x339840u) {
        ctx->pc = 0x339840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33983Cu;
        // 0x339840: 0x96220008  lhu         $v0, 0x8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339844u;
        goto label_339844;
    }
    ctx->pc = 0x33983Cu;
    {
        const bool branch_taken_0x33983c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33983Cu;
        // 0x339840: 0x96220008  lhu         $v0, 0x8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33983c) {
            ctx->pc = 0x339864u;
            goto label_339864;
        }
    }
    ctx->pc = 0x339844u;
label_339844:
    // 0x339844: 0x0  nop
    ctx->pc = 0x339844u;
    // NOP
label_339848:
    // 0x339848: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x339848u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_33984c:
    // 0x33984c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_339850:
    // 0x339850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x339850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_339854:
    // 0x339854: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x339854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_339858:
    // 0x339858: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x339858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_33985c:
    // 0x33985c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x33985cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_339860:
    // 0x339860: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x339860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_339864:
    // 0x339864: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_339868:
    if (ctx->pc == 0x339868u) {
        ctx->pc = 0x339868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339864u;
        // 0x339868: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33986Cu;
        goto label_33986c;
    }
    ctx->pc = 0x339864u;
    {
        const bool branch_taken_0x339864 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x339868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339864u;
        // 0x339868: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339864) {
            ctx->pc = 0x339880u;
            goto label_339880;
        }
    }
    ctx->pc = 0x33986Cu;
label_33986c:
    // 0x33986c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33986cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_339870:
    // 0x339870: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x339870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_339874:
    // 0x339874: 0x10000007  b           . + 4 + (0x7 << 2)
label_339878:
    if (ctx->pc == 0x339878u) {
        ctx->pc = 0x33987Cu;
        goto label_33987c;
    }
    ctx->pc = 0x339874u;
    {
        const bool branch_taken_0x339874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339874) {
            ctx->pc = 0x339894u;
            goto label_339894;
        }
    }
    ctx->pc = 0x33987Cu;
label_33987c:
    // 0x33987c: 0x0  nop
    ctx->pc = 0x33987cu;
    // NOP
label_339880:
    // 0x339880: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x339880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_339884:
    // 0x339884: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x339884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_339888:
    // 0x339888: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x339888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33988c:
    // 0x33988c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x33988cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_339890:
    // 0x339890: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x339890u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_339894:
    // 0x339894: 0xc0c6ab4  jal         func_31AAD0
label_339898:
    if (ctx->pc == 0x339898u) {
        ctx->pc = 0x33989Cu;
        goto label_33989c;
    }
    ctx->pc = 0x339894u;
    SET_GPR_U32(ctx, 31, 0x33989Cu);
    ctx->pc = 0x31AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AAD0u, 0x339894u, 0x33989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33989Cu;
label_33989c:
    // 0x33989c: 0xc0ce662  jal         func_339988
label_3398a0:
    if (ctx->pc == 0x3398A0u) {
        ctx->pc = 0x3398A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33989Cu;
        // 0x3398a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3398A4u;
        goto label_3398a4;
    }
    ctx->pc = 0x33989Cu;
    SET_GPR_U32(ctx, 31, 0x3398A4u);
    ctx->pc = 0x3398A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33989Cu;
    // 0x3398a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339988u, 0x33989Cu, 0x3398A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3398A4u;
label_3398a4:
    // 0x3398a4: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x3398a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_3398a8:
    // 0x3398a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3398ac:
    if (ctx->pc == 0x3398ACu) {
        ctx->pc = 0x3398ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398A8u;
        // 0x3398ac: 0x26640400  addiu       $a0, $s3, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3398B0u;
        goto label_3398b0;
    }
    ctx->pc = 0x3398A8u;
    {
        const bool branch_taken_0x3398a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3398ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398A8u;
        // 0x3398ac: 0x26640400  addiu       $a0, $s3, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3398a8) {
            ctx->pc = 0x3398C0u;
            goto label_3398c0;
        }
    }
    ctx->pc = 0x3398B0u;
label_3398b0:
    // 0x3398b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3398b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3398b4:
    // 0x3398b4: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x3398b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_3398b8:
    // 0x3398b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3398bc:
    if (ctx->pc == 0x3398BCu) {
        ctx->pc = 0x3398BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398B8u;
        // 0x3398bc: 0x96220008  lhu         $v0, 0x8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3398C0u;
        goto label_3398c0;
    }
    ctx->pc = 0x3398B8u;
    {
        const bool branch_taken_0x3398b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3398BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398B8u;
        // 0x3398bc: 0x96220008  lhu         $v0, 0x8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3398b8) {
            ctx->pc = 0x3398DCu;
            goto label_3398dc;
        }
    }
    ctx->pc = 0x3398C0u;
label_3398c0:
    // 0x3398c0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3398c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3398c4:
    // 0x3398c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3398c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3398c8:
    // 0x3398c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3398c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3398cc:
    // 0x3398cc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3398ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3398d0:
    // 0x3398d0: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x3398d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_3398d4:
    // 0x3398d4: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x3398d4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_3398d8:
    // 0x3398d8: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x3398d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_3398dc:
    // 0x3398dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_3398e0:
    if (ctx->pc == 0x3398E0u) {
        ctx->pc = 0x3398E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398DCu;
        // 0x3398e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3398E4u;
        goto label_3398e4;
    }
    ctx->pc = 0x3398DCu;
    {
        const bool branch_taken_0x3398dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3398E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398DCu;
        // 0x3398e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3398dc) {
            ctx->pc = 0x3398F8u;
            goto label_3398f8;
        }
    }
    ctx->pc = 0x3398E4u;
label_3398e4:
    // 0x3398e4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3398e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3398e8:
    // 0x3398e8: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x3398e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_3398ec:
    // 0x3398ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_3398f0:
    if (ctx->pc == 0x3398F0u) {
        ctx->pc = 0x3398F4u;
        goto label_3398f4;
    }
    ctx->pc = 0x3398ECu;
    {
        const bool branch_taken_0x3398ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3398ec) {
            ctx->pc = 0x33990Cu;
            goto label_33990c;
        }
    }
    ctx->pc = 0x3398F4u;
label_3398f4:
    // 0x3398f4: 0x0  nop
    ctx->pc = 0x3398f4u;
    // NOP
label_3398f8:
    // 0x3398f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3398f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3398fc:
    // 0x3398fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3398fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_339900:
    // 0x339900: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x339900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_339904:
    // 0x339904: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x339904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_339908:
    // 0x339908: 0x460f7bc0  add.s       $f15, $f15, $f15
    ctx->pc = 0x339908u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
label_33990c:
    // 0x33990c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33990cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_339910:
    // 0x339910: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x339910u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
label_339914:
    // 0x339914: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x339914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_339918:
    // 0x339918: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x339918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_33991c:
    // 0x33991c: 0x26104f00  addiu       $s0, $s0, 0x4F00
    ctx->pc = 0x33991cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20224));
label_339920:
    // 0x339920: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x339920u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_339924:
    // 0x339924: 0xc0c69c4  jal         func_31A710
label_339928:
    if (ctx->pc == 0x339928u) {
        ctx->pc = 0x339928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339924u;
        // 0x339928: 0x46006406  mov.s       $f16, $f12 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33992Cu;
        goto label_33992c;
    }
    ctx->pc = 0x339924u;
    SET_GPR_U32(ctx, 31, 0x33992Cu);
    ctx->pc = 0x339928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339924u;
    // 0x339928: 0x46006406  mov.s       $f16, $f12 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A710u, 0x339924u, 0x33992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33992Cu;
label_33992c:
    // 0x33992c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33992cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_339930:
    // 0x339930: 0xc0cd4ac  jal         func_3352B0
label_339934:
    if (ctx->pc == 0x339934u) {
        ctx->pc = 0x339934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339930u;
        // 0x339934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339938u;
        goto label_339938;
    }
    ctx->pc = 0x339930u;
    SET_GPR_U32(ctx, 31, 0x339938u);
    ctx->pc = 0x339934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339930u;
    // 0x339934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3352B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3352B0u, 0x339930u, 0x339938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339938u;
label_339938:
    // 0x339938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x339938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33993c:
    // 0x33993c: 0xc0cd4c2  jal         func_335308
label_339940:
    if (ctx->pc == 0x339940u) {
        ctx->pc = 0x339940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33993Cu;
        // 0x339940: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339944u;
        goto label_339944;
    }
    ctx->pc = 0x33993Cu;
    SET_GPR_U32(ctx, 31, 0x339944u);
    ctx->pc = 0x339940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33993Cu;
    // 0x339940: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335308u, 0x33993Cu, 0x339944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339944u;
label_339944:
    // 0x339944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339948:
    // 0x339948: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33994c:
    // 0x33994c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33994cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_339950:
    // 0x339950: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x339950u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_339954:
    // 0x339954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x339954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_339958:
    // 0x339958: 0x3e00008  jr          $ra
label_33995c:
    if (ctx->pc == 0x33995Cu) {
        ctx->pc = 0x33995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339958u;
        // 0x33995c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339960u;
        goto label_339960;
    }
    ctx->pc = 0x339958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339958u;
        // 0x33995c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339960u;
label_339960:
    // 0x339960: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_339964:
    if (ctx->pc == 0x339964u) {
        ctx->pc = 0x339968u;
        goto label_339968;
    }
    ctx->pc = 0x339960u;
    {
        const bool branch_taken_0x339960 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x339960) {
            ctx->pc = 0x339970u;
            goto label_339970;
        }
    }
    ctx->pc = 0x339968u;
label_339968:
    // 0x339968: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x339968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33996c:
    // 0x33996c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x33996cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_339970:
    // 0x339970: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_339974:
    if (ctx->pc == 0x339974u) {
        ctx->pc = 0x339978u;
        goto label_339978;
    }
    ctx->pc = 0x339970u;
    {
        const bool branch_taken_0x339970 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x339970) {
            ctx->pc = 0x339980u;
            goto label_339980;
        }
    }
    ctx->pc = 0x339978u;
label_339978:
    // 0x339978: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x339978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33997c:
    // 0x33997c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x33997cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_339980:
    // 0x339980: 0x3e00008  jr          $ra
label_339984:
    if (ctx->pc == 0x339984u) {
        ctx->pc = 0x339988u;
        goto label_fallthrough_0x339980;
    }
    ctx->pc = 0x339980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339980:
    ctx->pc = 0x339988u;
}

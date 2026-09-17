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

// Function: sub_00207518
// Address: 0x207518 - 0x2077a8
void sub_00207518_0x207518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207518_0x207518");
#endif

    switch (ctx->pc) {
        case 0x207598u: goto label_207598;
        case 0x2075b8u: goto label_2075b8;
        case 0x207640u: goto label_207640;
        case 0x207698u: goto label_207698;
        case 0x2076a8u: goto label_2076a8;
        case 0x2076e0u: goto label_2076e0;
        case 0x20774cu: goto label_20774c;
        case 0x207764u: goto label_207764;
        default: break;
    }

    ctx->pc = 0x207518u;

    // 0x207518: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x207518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20751c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x20751cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x207520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207524: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x207524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x207528: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x207528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20752c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x20752cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x207530: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x207530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x207534: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x207534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x207538: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x207538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x20753c: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x20753cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x207540: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207540u;
    {
        const bool branch_taken_0x207540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207540u;
        // 0x207544: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207540) {
            ctx->pc = 0x207554u;
            goto label_207554;
        }
    }
    ctx->pc = 0x207548u;
    // 0x207548: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x207548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x20754c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20754Cu;
    {
        const bool branch_taken_0x20754c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20754c) {
            ctx->pc = 0x207550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20754Cu;
            // 0x207550: 0x920201ad  lbu         $v0, 0x1AD($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 429)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207570u;
            goto label_207570;
        }
    }
    ctx->pc = 0x207554u;
label_207554:
    // 0x207554: 0x920201a1  lbu         $v0, 0x1A1($s0)
    ctx->pc = 0x207554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 417)));
    // 0x207558: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x207558u;
    {
        const bool branch_taken_0x207558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207558) {
            ctx->pc = 0x20755Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207558u;
            // 0x20755c: 0x920201ad  lbu         $v0, 0x1AD($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 429)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207570u;
            goto label_207570;
        }
    }
    ctx->pc = 0x207560u;
    // 0x207560: 0x922201a1  lbu         $v0, 0x1A1($s1)
    ctx->pc = 0x207560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x207564: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x207564u;
    {
        const bool branch_taken_0x207564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207564) {
            ctx->pc = 0x207568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207564u;
            // 0x207568: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207588u;
            goto label_207588;
        }
    }
    ctx->pc = 0x20756Cu;
    // 0x20756c: 0x920201ad  lbu         $v0, 0x1AD($s0)
    ctx->pc = 0x20756cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 429)));
label_207570:
    // 0x207570: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x207570u;
    {
        const bool branch_taken_0x207570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207570) {
            ctx->pc = 0x207574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207570u;
            // 0x207574: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207588u;
            goto label_207588;
        }
    }
    ctx->pc = 0x207578u;
    // 0x207578: 0x922201ad  lbu         $v0, 0x1AD($s1)
    ctx->pc = 0x207578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 429)));
    // 0x20757c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20757Cu;
    {
        const bool branch_taken_0x20757c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20757Cu;
        // 0x207580: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20757c) {
            ctx->pc = 0x20758Cu;
            goto label_20758c;
        }
    }
    ctx->pc = 0x207584u;
    // 0x207584: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x207584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207588:
    // 0x207588: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x207588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20758c:
    // 0x20758c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20758cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207590: 0xc04a151  jal         func_128544
    ctx->pc = 0x207590u;
    SET_GPR_U32(ctx, 31, 0x207598u);
    ctx->pc = 0x207594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207590u;
    // 0x207594: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x207590u, 0x207598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207598u;
label_207598:
    // 0x207598: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x207598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x20759c: 0x1240004c  beqz        $s2, . + 4 + (0x4C << 2)
    ctx->pc = 0x20759Cu;
    {
        const bool branch_taken_0x20759c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2075A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20759Cu;
        // 0x2075a0: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20759c) {
            ctx->pc = 0x2076D0u;
            goto label_2076d0;
        }
    }
    ctx->pc = 0x2075A4u;
    // 0x2075a4: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x2075a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2075a8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2075a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2075ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2075acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075b0: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x2075b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075b4: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x2075b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2075b8:
    // 0x2075b8: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x2075b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2075bc: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x2075bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2075c0: 0x3a61021  addu        $v0, $sp, $a2
    ctx->pc = 0x2075c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    // 0x2075c4: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x2075c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2075c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2075c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2075cc: 0x694021  addu        $t0, $v1, $t1
    ctx->pc = 0x2075ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2075d0: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x2075d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2075d4: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2075d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075d8: 0x78a20650  lq          $v0, 0x650($a1)
    ctx->pc = 0x2075d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 1616)));
    // 0x2075dc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2075dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075e0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2075e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2075e4: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x2075e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x2075e8: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2075e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2075ec: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2075ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2075f0: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2075f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2075f4: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2075f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2075f8: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x2075f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2075fc: 0x46010044  c1          0x10044
    ctx->pc = 0x2075fcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x207600: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x207600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x207604: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x207604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x207608: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x207608u;
    {
        const bool branch_taken_0x207608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207608u;
        // 0x20760c: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207608) {
            ctx->pc = 0x2075B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2075b8;
        }
    }
    ctx->pc = 0x207610u;
    // 0x207610: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x207610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207614: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x207614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207618: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20761c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x20761Cu;
    {
        const bool branch_taken_0x20761c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20761c) {
            ctx->pc = 0x207620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20761Cu;
            // 0x207620: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207628u;
            goto label_207628;
        }
    }
    ctx->pc = 0x207624u;
    // 0x207624: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x207624u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_207628:
    // 0x207628: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x207628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20762c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x20762cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x207630: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x207630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207634: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x207634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207638: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x207638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20763c: 0x0  nop
    ctx->pc = 0x20763cu;
    // NOP
label_207640:
    // 0x207640: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x207640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x207644: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x207644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x207648: 0x3a38021  addu        $s0, $sp, $v1
    ctx->pc = 0x207648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x20764c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20764cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207650: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x207654: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x207654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207658: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x207658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x20765c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x207660: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x207660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207664: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x207664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x207668: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20766c: 0xdfa30060  ld          $v1, 0x60($sp)
    ctx->pc = 0x20766cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x207670: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x207670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207674: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x207674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x207678: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x207678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x20767c: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x20767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
    // 0x207680: 0xdfa20068  ld          $v0, 0x68($sp)
    ctx->pc = 0x207680u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x207684: 0xffa20058  sd          $v0, 0x58($sp)
    ctx->pc = 0x207684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 2));
    // 0x207688: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x207688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20768c: 0x24840750  addiu       $a0, $a0, 0x750
    ctx->pc = 0x20768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1872));
    // 0x207690: 0xc084774  jal         func_211DD0
    ctx->pc = 0x207690u;
    SET_GPR_U32(ctx, 31, 0x207698u);
    ctx->pc = 0x207694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207690u;
    // 0x207694: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x207690u, 0x207698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207698u;
label_207698:
    // 0x207698: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x207698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20769c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20769cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076a0: 0xc084774  jal         func_211DD0
    ctx->pc = 0x2076A0u;
    SET_GPR_U32(ctx, 31, 0x2076A8u);
    ctx->pc = 0x2076A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2076A0u;
    // 0x2076a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x2076A0u, 0x2076A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2076A8u;
label_2076a8:
    // 0x2076a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2076a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2076ac: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2076acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2076b0: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x2076b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2076b4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2076b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2076b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2076b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2076bc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2076bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2076c0: 0x1480ffdf  bnez        $a0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2076C0u;
    {
        const bool branch_taken_0x2076c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2076C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076C0u;
        // 0x2076c4: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076c0) {
            ctx->pc = 0x207640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207640;
        }
    }
    ctx->pc = 0x2076C8u;
    // 0x2076c8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2076C8u;
    {
        const bool branch_taken_0x2076c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2076CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076C8u;
        // 0x2076cc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076c8) {
            ctx->pc = 0x207788u;
            goto label_207788;
        }
    }
    ctx->pc = 0x2076D0u;
label_2076d0:
    // 0x2076d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2076d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076d4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2076d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2076d8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2076d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2076dc: 0x0  nop
    ctx->pc = 0x2076dcu;
    // NOP
label_2076e0:
    // 0x2076e0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2076e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2076e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2076e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2076e8: 0x3a38021  addu        $s0, $sp, $v1
    ctx->pc = 0x2076e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2076ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2076ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2076f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2076f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2076f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2076f8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2076f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2076fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2076fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x207700: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x207700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207704: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x207704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x207708: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20770c: 0xdfa30030  ld          $v1, 0x30($sp)
    ctx->pc = 0x20770cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x207710: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x207710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207714: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x207714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x207718: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x207718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x20771c: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x20771cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x207720: 0xdfa20038  ld          $v0, 0x38($sp)
    ctx->pc = 0x207720u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x207724: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x207724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x207728: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20772c: 0x78620650  lq          $v0, 0x650($v1)
    ctx->pc = 0x20772cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 1616)));
    // 0x207730: 0xc4740754  lwc1        $f20, 0x754($v1)
    ctx->pc = 0x207730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x207734: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x207734u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x207738: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x207738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x20773c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20773cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x207740: 0x24840750  addiu       $a0, $a0, 0x750
    ctx->pc = 0x207740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1872));
    // 0x207744: 0xc084774  jal         func_211DD0
    ctx->pc = 0x207744u;
    SET_GPR_U32(ctx, 31, 0x20774Cu);
    ctx->pc = 0x207748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207744u;
    // 0x207748: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x207744u, 0x20774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20774Cu;
label_20774c:
    // 0x20774c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x207750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x207750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207754: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x207754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207758: 0xe4540754  swc1        $f20, 0x754($v0)
    ctx->pc = 0x207758u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1876), bits); }
    // 0x20775c: 0xc084774  jal         func_211DD0
    ctx->pc = 0x20775Cu;
    SET_GPR_U32(ctx, 31, 0x207764u);
    ctx->pc = 0x207760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20775Cu;
    // 0x207760: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x20775Cu, 0x207764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207764u;
label_207764:
    // 0x207764: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x207768: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x207768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20776c: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x20776cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x207770: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x207770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x207774: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x207778: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x207778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20777c: 0x1480ffd8  bnez        $a0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x20777Cu;
    {
        const bool branch_taken_0x20777c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x207780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20777Cu;
        // 0x207780: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20777c) {
            ctx->pc = 0x2076E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2076e0;
        }
    }
    ctx->pc = 0x207784u;
    // 0x207784: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x207784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_207788:
    // 0x207788: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x207788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20778c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x20778cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x207790: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x207790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207794: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x207794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x207798: 0xc7b40098  lwc1        $f20, 0x98($sp)
    ctx->pc = 0x207798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20779c: 0x3e00008  jr          $ra
    ctx->pc = 0x20779Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2077A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20779Cu;
        // 0x2077a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20779Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2077A4u;
    // 0x2077a4: 0x0  nop
    ctx->pc = 0x2077a4u;
    // NOP
    ctx->pc = 0x2077a8u;
}

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

// Function: sub_00309588
// Address: 0x309588 - 0x309750
void sub_00309588_0x309588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309588_0x309588");
#endif

    switch (ctx->pc) {
        case 0x3096c0u: goto label_3096c0;
        case 0x309740u: goto label_309740;
        default: break;
    }

    ctx->pc = 0x309588u;

    // 0x309588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x309588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30958c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x30958cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x309590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x309594: 0xa044f0bc  sb          $a0, -0xF44($v0)
    ctx->pc = 0x309594u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1AF0BCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1AF0BCu, _value); } while (0);
    // 0x309598: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x309598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30959c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30959cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3095a0: 0x80c26a8  j           func_309AA0
    ctx->pc = 0x3095A0u;
    ctx->pc = 0x3095A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3095A0u;
    // 0x3095a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309AA0u;
    sub_00309AA0_0x309aa0(rdram, ctx, runtime); return;
    ctx->pc = 0x3095A8u;
    // 0x3095a8: 0x27bde010  addiu       $sp, $sp, -0x1FF0
    ctx->pc = 0x3095a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294959120));
    // 0x3095ac: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x3095acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3095b0: 0xffbf1fe0  sd          $ra, 0x1FE0($sp)
    ctx->pc = 0x3095b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8160), GPR_U64(ctx, 31));
    // 0x3095b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3095B4u;
    {
        const bool branch_taken_0x3095b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3095B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3095B4u;
        // 0x3095b8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3095b4) {
            ctx->pc = 0x3095D0u;
            goto label_3095d0;
        }
    }
    ctx->pc = 0x3095BCu;
    // 0x3095bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3095bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3095c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3095c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3095c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3095C4u;
    {
        const bool branch_taken_0x3095c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3095c4) {
            ctx->pc = 0x3095E8u;
            goto label_3095e8;
        }
    }
    ctx->pc = 0x3095CCu;
    // 0x3095cc: 0x0  nop
    ctx->pc = 0x3095ccu;
    // NOP
label_3095d0:
    // 0x3095d0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3095d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3095d4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3095d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3095d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3095d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3095dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3095dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3095e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3095e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3095e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3095e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3095e8:
    // 0x3095e8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3095e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3095ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3095ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3095f0: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3095f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3095f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3095f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3095f8: 0x0  nop
    ctx->pc = 0x3095f8u;
    // NOP
    // 0x3095fc: 0x0  nop
    ctx->pc = 0x3095fcu;
    // NOP
    // 0x309600: 0x46000943  div.s       $f5, $f1, $f0
    ctx->pc = 0x309600u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[5] = ctx->f[1] / ctx->f[0];
    // 0x309604: 0x4620006  bltzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x309604u;
    {
        const bool branch_taken_0x309604 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x309604) {
            ctx->pc = 0x309608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309604u;
            // 0x309608: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x309620u;
            goto label_309620;
        }
    }
    ctx->pc = 0x30960Cu;
    // 0x30960c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30960cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309610: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x309610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x309614: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x309614u;
    {
        const bool branch_taken_0x309614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309614u;
        // 0x309618: 0x51402  srl         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309614) {
            ctx->pc = 0x309640u;
            goto label_309640;
        }
    }
    ctx->pc = 0x30961Cu;
    // 0x30961c: 0x0  nop
    ctx->pc = 0x30961cu;
    // NOP
label_309620:
    // 0x309620: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x309620u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x309624: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x309624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30962c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30962cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x309630: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x309630u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x309634: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x309634u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x309638: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x309638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x30963c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30963cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309640:
    // 0x309640: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x309640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x309644: 0x0  nop
    ctx->pc = 0x309644u;
    // NOP
    // 0x309648: 0x0  nop
    ctx->pc = 0x309648u;
    // NOP
    // 0x30964c: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x30964cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
    // 0x309650: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x309650u;
    {
        const bool branch_taken_0x309650 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x309654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309650u;
        // 0x309654: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309650) {
            ctx->pc = 0x309668u;
            goto label_309668;
        }
    }
    ctx->pc = 0x309658u;
    // 0x309658: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x309658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30965c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30965cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x309660: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x309660u;
    {
        const bool branch_taken_0x309660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309660) {
            ctx->pc = 0x30967Cu;
            goto label_30967c;
        }
    }
    ctx->pc = 0x309668u;
label_309668:
    // 0x309668: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x309668u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x30966c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30966cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309670: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309674: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x309674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x309678: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x309678u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_30967c:
    // 0x30967c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x30967cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x309680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x309680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309684: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x309684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x309688: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x309688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30968c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30968cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x309690: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x309690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x309694: 0x2484eda8  addiu       $a0, $a0, -0x1258
    ctx->pc = 0x309694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962600));
    // 0x309698: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x309698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30969c: 0x0  nop
    ctx->pc = 0x30969cu;
    // NOP
    // 0x3096a0: 0x0  nop
    ctx->pc = 0x3096a0u;
    // NOP
    // 0x3096a4: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x3096a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x3096a8: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x3096a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x3096ac: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x3096acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3096b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3096b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3096b4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3096b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3096b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3096b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3096bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3096bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3096c0:
    // 0x3096c0: 0x4c20005  bltzl       $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3096C0u;
    {
        const bool branch_taken_0x3096c0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x3096c0) {
            ctx->pc = 0x3096C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3096C0u;
            // 0x3096c4: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3096D8u;
            goto label_3096d8;
        }
    }
    ctx->pc = 0x3096C8u;
    // 0x3096c8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3096c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3096cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3096ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3096d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3096D0u;
    {
        const bool branch_taken_0x3096d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3096D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096D0u;
        // 0x3096d4: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096d0) {
            ctx->pc = 0x3096F0u;
            goto label_3096f0;
        }
    }
    ctx->pc = 0x3096D8u;
label_3096d8:
    // 0x3096d8: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x3096d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x3096dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3096dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3096e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3096e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3096e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3096e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3096e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3096e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x3096ec: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3096ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3096f0:
    // 0x3096f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3096f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3096f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3096f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3096f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3096f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3096fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3096fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309700: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x309700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x309704: 0x2cc300ff  sltiu       $v1, $a2, 0xFF
    ctx->pc = 0x309704u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x309708: 0xe4a60008  swc1        $f6, 0x8($a1)
    ctx->pc = 0x309708u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x30970c: 0xe4a50010  swc1        $f5, 0x10($a1)
    ctx->pc = 0x30970cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x309710: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x309710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x309714: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x309714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x309718: 0xe4a40014  swc1        $f4, 0x14($a1)
    ctx->pc = 0x309718u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x30971c: 0xe4a30018  swc1        $f3, 0x18($a1)
    ctx->pc = 0x30971cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x309720: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x309720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x309724: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x309724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x309728: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x309728u;
    {
        const bool branch_taken_0x309728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309728u;
        // 0x30972c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309728) {
            ctx->pc = 0x3096C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3096c0;
        }
    }
    ctx->pc = 0x309730u;
    // 0x309730: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x309730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309734: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x309734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x309738: 0xc0ca98c  jal         func_32A630
    ctx->pc = 0x309738u;
    SET_GPR_U32(ctx, 31, 0x309740u);
    ctx->pc = 0x30973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309738u;
    // 0x30973c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A630u, 0x309738u, 0x309740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309740u;
label_309740:
    // 0x309740: 0xdfbf1fe0  ld          $ra, 0x1FE0($sp)
    ctx->pc = 0x309740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8160)));
    // 0x309744: 0x3e00008  jr          $ra
    ctx->pc = 0x309744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309744u;
        // 0x309748: 0x27bd1ff0  addiu       $sp, $sp, 0x1FF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30974Cu;
    // 0x30974c: 0x0  nop
    ctx->pc = 0x30974cu;
    // NOP
    ctx->pc = 0x309750u;
}

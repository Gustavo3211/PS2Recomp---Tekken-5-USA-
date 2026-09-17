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

// Function: sub_002357C0
// Address: 0x2357c0 - 0x235d20
void sub_002357C0_0x2357c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002357C0_0x2357c0");
#endif

    switch (ctx->pc) {
        case 0x2358ccu: goto label_2358cc;
        case 0x23590cu: goto label_23590c;
        case 0x235974u: goto label_235974;
        case 0x235980u: goto label_235980;
        case 0x235a40u: goto label_235a40;
        case 0x235a60u: goto label_235a60;
        case 0x235ac0u: goto label_235ac0;
        case 0x235ae4u: goto label_235ae4;
        case 0x235b3cu: goto label_235b3c;
        case 0x235c04u: goto label_235c04;
        case 0x235c70u: goto label_235c70;
        case 0x235ca4u: goto label_235ca4;
        case 0x235cd4u: goto label_235cd4;
        default: break;
    }

    ctx->pc = 0x2357c0u;

    // 0x2357c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2357c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2357c4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2357c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2357c8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2357c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2357cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2357ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357d0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2357d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2357d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2357d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357d8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2357d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2357dc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2357dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357e0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2357e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2357e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2357e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2357e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2357ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2357ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2357f0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2357f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2357f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2357f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357f8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2357f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2357fc: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2357fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x235800: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x235800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x235804: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x235804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x235808: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x235808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x23580c: 0x8c428880  lw          $v0, -0x7780($v0)
    ctx->pc = 0x23580cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8880u));
    // 0x235810: 0x86a30092  lh          $v1, 0x92($s5)
    ctx->pc = 0x235810u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
    // 0x235814: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x235814u;
    {
        const bool branch_taken_0x235814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x235818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235814u;
        // 0x235818: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235814) {
            ctx->pc = 0x235828u;
            goto label_235828;
        }
    }
    ctx->pc = 0x23581Cu;
    // 0x23581c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235820: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x235820u;
    {
        const bool branch_taken_0x235820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235820u;
        // 0x235824: 0x280b02d  daddu       $s6, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235820) {
            ctx->pc = 0x23583Cu;
            goto label_23583c;
        }
    }
    ctx->pc = 0x235828u;
label_235828:
    // 0x235828: 0x86820092  lh          $v0, 0x92($s4)
    ctx->pc = 0x235828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x23582c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23582Cu;
    {
        const bool branch_taken_0x23582c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x23582c) {
            ctx->pc = 0x23583Cu;
            goto label_23583c;
        }
    }
    ctx->pc = 0x235834u;
    // 0x235834: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x235834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235838: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x235838u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23583c:
    // 0x23583c: 0x10800076  beqz        $a0, . + 4 + (0x76 << 2)
    ctx->pc = 0x23583Cu;
    {
        const bool branch_taken_0x23583c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x235840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23583Cu;
        // 0x235840: 0x3c17003b  lui         $s7, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23583c) {
            ctx->pc = 0x235A18u;
            goto label_235a18;
        }
    }
    ctx->pc = 0x235844u;
    // 0x235844: 0x84820012  lh          $v0, 0x12($a0)
    ctx->pc = 0x235844u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x235848: 0x26e3dda0  addiu       $v1, $s7, -0x2260
    ctx->pc = 0x235848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958496));
    // 0x23584c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23584cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235850: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x235850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x235854: 0x26330060  addiu       $s3, $s1, 0x60
    ctx->pc = 0x235854u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x235858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23585c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x23585cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x235860: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x235860u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x235864: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x235864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x235868: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x235868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23586c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x23586cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x235870: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x235870u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
    // 0x235874: 0x24637ae0  addiu       $v1, $v1, 0x7AE0
    ctx->pc = 0x235874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31456));
    // 0x235878: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x235878u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23587c: 0x8cb20044  lw          $s2, 0x44($a1)
    ctx->pc = 0x23587cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x235880: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x235880u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x467AE8u));
    // 0x235884: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x235884u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x467AE0u));
    // 0x235888: 0x3250ffff  andi        $s0, $s2, 0xFFFF
    ctx->pc = 0x235888u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x23588c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x23588cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x235890: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x235890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x235894: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x235894u;
    {
        const bool branch_taken_0x235894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235894u;
        // 0x235898: 0xffa50000  sd          $a1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235894) {
            ctx->pc = 0x2358B0u;
            goto label_2358b0;
        }
    }
    ctx->pc = 0x23589Cu;
    // 0x23589c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x23589cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2358a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2358a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2358a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2358A4u;
    {
        const bool branch_taken_0x2358a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358A4u;
        // 0x2358a8: 0xc7808644  lwc1        $f0, -0x79BC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358a4) {
            ctx->pc = 0x2358C4u;
            goto label_2358c4;
        }
    }
    ctx->pc = 0x2358ACu;
    // 0x2358ac: 0x0  nop
    ctx->pc = 0x2358acu;
    // NOP
label_2358b0:
    // 0x2358b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2358b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2358b4: 0xc7818648  lwc1        $f1, -0x79B8($gp)
    ctx->pc = 0x2358b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2358b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2358b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2358bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2358bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2358c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2358c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2358c4:
    // 0x2358c4: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2358C4u;
    SET_GPR_U32(ctx, 31, 0x2358CCu);
    ctx->pc = 0x2358C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358C4u;
    // 0x2358c8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2358C4u, 0x2358CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2358CCu;
label_2358cc:
    // 0x2358cc: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x2358ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2358d0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2358d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2358d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2358D4u;
    {
        const bool branch_taken_0x2358d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2358D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358D4u;
        // 0x2358d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358d4) {
            ctx->pc = 0x2358F0u;
            goto label_2358f0;
        }
    }
    ctx->pc = 0x2358DCu;
    // 0x2358dc: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2358dcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2358e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2358e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2358e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2358E4u;
    {
        const bool branch_taken_0x2358e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358E4u;
        // 0x2358e8: 0xc780864c  lwc1        $f0, -0x79B4($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358e4) {
            ctx->pc = 0x235904u;
            goto label_235904;
        }
    }
    ctx->pc = 0x2358ECu;
    // 0x2358ec: 0x0  nop
    ctx->pc = 0x2358ecu;
    // NOP
label_2358f0:
    // 0x2358f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2358f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2358f4: 0xc7818650  lwc1        $f1, -0x79B0($gp)
    ctx->pc = 0x2358f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2358f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2358f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2358fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2358fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235900: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x235900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_235904:
    // 0x235904: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x235904u;
    SET_GPR_U32(ctx, 31, 0x23590Cu);
    ctx->pc = 0x235908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235904u;
    // 0x235908: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x235904u, 0x23590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23590Cu;
label_23590c:
    // 0x23590c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x23590cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x235910: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235910u;
    {
        const bool branch_taken_0x235910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235910u;
        // 0x235914: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235910) {
            ctx->pc = 0x235924u;
            goto label_235924;
        }
    }
    ctx->pc = 0x235918u;
    // 0x235918: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x235918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23591c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x23591cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x235920: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x235920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_235924:
    // 0x235924: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x235924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235928: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x235928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23592c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x23592cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235930: 0x27d0dda0  addiu       $s0, $fp, -0x2260
    ctx->pc = 0x235930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
    // 0x235934: 0x461400c2  mul.s       $f3, $f0, $f20
    ctx->pc = 0x235934u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x235938: 0xc6240060  lwc1        $f4, 0x60($s1)
    ctx->pc = 0x235938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23593c: 0x46060942  mul.s       $f5, $f1, $f6
    ctx->pc = 0x23593cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x235940: 0xc6220068  lwc1        $f2, 0x68($s1)
    ctx->pc = 0x235940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235944: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x235944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x235948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x235948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23594c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x23594cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x235950: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x235950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235954: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x235954u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x235958: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x235958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23595c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x23595cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x235960: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x235960u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x235964: 0xe6220068  swc1        $f2, 0x68($s1)
    ctx->pc = 0x235964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x235968: 0xe6240060  swc1        $f4, 0x60($s1)
    ctx->pc = 0x235968u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x23596c: 0xc08da16  jal         func_236858
    ctx->pc = 0x23596Cu;
    SET_GPR_U32(ctx, 31, 0x235974u);
    ctx->pc = 0x235970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23596Cu;
    // 0x235970: 0xc614003c  lwc1        $f20, 0x3C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x236858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236858u, 0x23596Cu, 0x235974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235974u;
label_235974:
    // 0x235974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235978: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x235978u;
    SET_GPR_U32(ctx, 31, 0x235980u);
    ctx->pc = 0x23597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235978u;
    // 0x23597c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x235978u, 0x235980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235980u;
label_235980:
    // 0x235980: 0xc7828654  lwc1        $f2, -0x79AC($gp)
    ctx->pc = 0x235980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235984: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x235984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235988: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x235988u;
    {
        const bool branch_taken_0x235988 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235988u;
        // 0x23598c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235988) {
            ctx->pc = 0x2359C0u;
            goto label_2359c0;
        }
    }
    ctx->pc = 0x235990u;
    // 0x235990: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x235990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235994: 0x26320070  addiu       $s2, $s1, 0x70
    ctx->pc = 0x235994u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x235998: 0xc7838658  lwc1        $f3, -0x79A8($gp)
    ctx->pc = 0x235998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23599c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23599cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2359a0: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x2359a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2359a4: 0xc782865c  lwc1        $f2, -0x79A4($gp)
    ctx->pc = 0x2359a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2359a8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2359a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2359ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2359acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2359b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2359b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2359b4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2359B4u;
    {
        const bool branch_taken_0x2359b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2359B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359B4u;
        // 0x2359b8: 0xe6210064  swc1        $f1, 0x64($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359b4) {
            ctx->pc = 0x235A98u;
            goto label_235a98;
        }
    }
    ctx->pc = 0x2359BCu;
    // 0x2359bc: 0x0  nop
    ctx->pc = 0x2359bcu;
    // NOP
label_2359c0:
    // 0x2359c0: 0xc7808660  lwc1        $f0, -0x79A0($gp)
    ctx->pc = 0x2359c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2359c4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2359c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2359c8: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x2359C8u;
    {
        const bool branch_taken_0x2359c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2359CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359C8u;
        // 0x2359cc: 0x26320070  addiu       $s2, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359c8) {
            ctx->pc = 0x235A98u;
            goto label_235a98;
        }
    }
    ctx->pc = 0x2359D0u;
    // 0x2359d0: 0x4602a0c1  sub.s       $f3, $f20, $f2
    ctx->pc = 0x2359d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x2359d4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2359d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2359d8: 0xc7858664  lwc1        $f5, -0x799C($gp)
    ctx->pc = 0x2359d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2359dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2359dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2359e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2359e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2359e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2359e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2359e8: 0xc7848668  lwc1        $f4, -0x7998($gp)
    ctx->pc = 0x2359e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2359ec: 0x0  nop
    ctx->pc = 0x2359ecu;
    // NOP
    // 0x2359f0: 0x0  nop
    ctx->pc = 0x2359f0u;
    // NOP
    // 0x2359f4: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x2359f4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[2];
    // 0x2359f8: 0xc6220064  lwc1        $f2, 0x64($s1)
    ctx->pc = 0x2359f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2359fc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2359fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x235a00: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x235a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x235a04: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x235a04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x235a08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x235a08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x235a0c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x235a0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x235a10: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x235A10u;
    {
        const bool branch_taken_0x235a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A10u;
        // 0x235a14: 0xe6220064  swc1        $f2, 0x64($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a10) {
            ctx->pc = 0x235A98u;
            goto label_235a98;
        }
    }
    ctx->pc = 0x235A18u;
label_235a18:
    // 0x235a18: 0x26320070  addiu       $s2, $s1, 0x70
    ctx->pc = 0x235a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x235a1c: 0x26f0dda0  addiu       $s0, $s7, -0x2260
    ctx->pc = 0x235a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958496));
    // 0x235a20: 0x26330060  addiu       $s3, $s1, 0x60
    ctx->pc = 0x235a20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x235a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x235a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a2c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x235a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a30: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x235a30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a34: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x235a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235a38: 0xc08dc2e  jal         func_2370B8
    ctx->pc = 0x235A38u;
    SET_GPR_U32(ctx, 31, 0x235A40u);
    ctx->pc = 0x235A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A38u;
    // 0x235a3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2370B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2370B8u, 0x235A38u, 0x235A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A40u;
label_235a40:
    // 0x235a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x235a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x235a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a4c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x235a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a50: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x235a50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x235a54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235a58: 0xc08dbea  jal         func_236FA8
    ctx->pc = 0x235A58u;
    SET_GPR_U32(ctx, 31, 0x235A60u);
    ctx->pc = 0x235A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A58u;
    // 0x235a5c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FA8u, 0x235A58u, 0x235A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A60u;
label_235a60:
    // 0x235a60: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x235a60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x235a64: 0xc781866c  lwc1        $f1, -0x7994($gp)
    ctx->pc = 0x235a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235a68: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x235a68u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x235a6c: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x235a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x235a70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x235a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x235a74: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x235a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235a78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x235a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x235a7c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x235a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x235a80: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x235a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235a84: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x235a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235a88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x235a88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x235a8c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x235a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x235a90: 0xe6210064  swc1        $f1, 0x64($s1)
    ctx->pc = 0x235a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x235a94: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x235a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_235a98:
    // 0x235a98: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x235a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x235a9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x235A9Cu;
    {
        const bool branch_taken_0x235a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A9Cu;
        // 0x235aa0: 0x26f0dda0  addiu       $s0, $s7, -0x2260 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a9c) {
            ctx->pc = 0x235AC4u;
            goto label_235ac4;
        }
    }
    ctx->pc = 0x235AA4u;
    // 0x235aa4: 0x26e4dda0  addiu       $a0, $s7, -0x2260
    ctx->pc = 0x235aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958496));
    // 0x235aa8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x235aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235aac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x235aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ab0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x235ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ab4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x235ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235ab8: 0xc08dc2e  jal         func_2370B8
    ctx->pc = 0x235AB8u;
    SET_GPR_U32(ctx, 31, 0x235AC0u);
    ctx->pc = 0x235ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AB8u;
    // 0x235abc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2370B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2370B8u, 0x235AB8u, 0x235AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235AC0u;
label_235ac0:
    // 0x235ac0: 0x26f0dda0  addiu       $s0, $s7, -0x2260
    ctx->pc = 0x235ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958496));
label_235ac4:
    // 0x235ac4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x235ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235acc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x235accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ad0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x235ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ad4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x235ad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ad8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x235ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235adc: 0xc08dbea  jal         func_236FA8
    ctx->pc = 0x235ADCu;
    SET_GPR_U32(ctx, 31, 0x235AE4u);
    ctx->pc = 0x235AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235ADCu;
    // 0x235ae0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FA8u, 0x235ADCu, 0x235AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235AE4u;
label_235ae4:
    // 0x235ae4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x235ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x235ae8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x235ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x235aec: 0xc7818670  lwc1        $f1, -0x7990($gp)
    ctx->pc = 0x235aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235af0: 0xe6220080  swc1        $f2, 0x80($s1)
    ctx->pc = 0x235af0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x235af4: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x235af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235af8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x235af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235afc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x235AFCu;
    {
        const bool branch_taken_0x235afc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AFCu;
        // 0x235b00: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235afc) {
            ctx->pc = 0x235B1Cu;
            goto label_235b1c;
        }
    }
    ctx->pc = 0x235B04u;
    // 0x235b04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x235b04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x235b08: 0xc7818674  lwc1        $f1, -0x798C($gp)
    ctx->pc = 0x235b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235b0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x235b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x235b10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x235b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x235b14: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x235b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x235b18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235b1c:
    // 0x235b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b20: 0xc62c0080  lwc1        $f12, 0x80($s1)
    ctx->pc = 0x235b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x235b24: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x235b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b28: 0x2450fff1  addiu       $s0, $v0, -0xF
    ctx->pc = 0x235b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x235b2c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x235b2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x235b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b34: 0xc08dc4a  jal         func_237128
    ctx->pc = 0x235B34u;
    SET_GPR_U32(ctx, 31, 0x235B3Cu);
    ctx->pc = 0x235B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B34u;
    // 0x235b38: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237128u, 0x235B34u, 0x235B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B3Cu;
label_235b3c:
    // 0x235b3c: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x235b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x235b40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235B40u;
    {
        const bool branch_taken_0x235b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B40u;
        // 0x235b44: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b40) {
            ctx->pc = 0x235B50u;
            goto label_235b50;
        }
    }
    ctx->pc = 0x235B48u;
    // 0x235b48: 0xc7808678  lwc1        $f0, -0x7988($gp)
    ctx->pc = 0x235b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235b4c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x235b4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_235b50:
    // 0x235b50: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x235b50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b54: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x235b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b58: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x235b58u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x235b5c: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x235b5cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235b60: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x235b60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x235b64: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x235b64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x235b68: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x235b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b6c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x235b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235b70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x235b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x235b74: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x235b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x235b78: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x235b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235b7c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x235b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235b80: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x235b80u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x235b84: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x235b84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1])));
    // 0x235b88: 0x4600009c  madd.s      $f2, $f0, $f0
    ctx->pc = 0x235b88u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x235b8c: 0x460218d6  rsqrt.s     $f3, $f3, $f2
    ctx->pc = 0x235b8cu;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x235b90: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x235b90u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235b94: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x235b94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x235b98: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x235b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x235b9c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x235b9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x235ba0: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x235ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x235ba4: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x235ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x235ba8: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x235ba8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
    // 0x235bac: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x235bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235bb0: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x235bb0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235bb4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x235bb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x235bb8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x235bb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x235bbc: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x235bbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x235bc0: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x235bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x235bc4: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x235bc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235bc8: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x235bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235bcc: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x235bccu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x235bd0: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x235bd0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235bd4: 0x4bff8428  vadd.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x235bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x235bd8: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x235bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x235bdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x235bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x235be0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x235be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235be4: 0x26350060  addiu       $s5, $s1, 0x60
    ctx->pc = 0x235be4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x235be8: 0x3c014240  lui         $at, 0x4240
    ctx->pc = 0x235be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16960 << 16));
    // 0x235bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235bf0: 0x26e4dda0  addiu       $a0, $s7, -0x2260
    ctx->pc = 0x235bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958496));
    // 0x235bf4: 0xe6210088  swc1        $f1, 0x88($s1)
    ctx->pc = 0x235bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x235bf8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x235bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235bfc: 0xc08db6a  jal         func_236DA8
    ctx->pc = 0x235BFCu;
    SET_GPR_U32(ctx, 31, 0x235C04u);
    ctx->pc = 0x235C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BFCu;
    // 0x235c00: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x236DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236DA8u, 0x235BFCu, 0x235C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C04u;
label_235c04:
    // 0x235c04: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x235c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x235c08: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x235c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x235c0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x235c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235c10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235C10u;
    {
        const bool branch_taken_0x235c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C10u;
        // 0x235c14: 0xc6200064  lwc1        $f0, 0x64($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c10) {
            ctx->pc = 0x235C20u;
            goto label_235c20;
        }
    }
    ctx->pc = 0x235C18u;
    // 0x235c18: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x235c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x235c1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x235c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_235c20:
    // 0x235c20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x235c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235c24: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x235C24u;
    {
        const bool branch_taken_0x235c24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x235c24) {
            ctx->pc = 0x235C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235C24u;
            // 0x235c28: 0xe6210064  swc1        $f1, 0x64($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x235C2Cu;
            goto label_235c2c;
        }
    }
    ctx->pc = 0x235C2Cu;
label_235c2c:
    // 0x235c2c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x235c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x235c30: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x235C30u;
    {
        const bool branch_taken_0x235c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C30u;
        // 0x235c34: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c30) {
            ctx->pc = 0x235CB0u;
            goto label_235cb0;
        }
    }
    ctx->pc = 0x235C38u;
    // 0x235c38: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x235c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x235c3c: 0x26330090  addiu       $s3, $s1, 0x90
    ctx->pc = 0x235c3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x235c40: 0x263400a0  addiu       $s4, $s1, 0xA0
    ctx->pc = 0x235c40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x235c44: 0xc78e867c  lwc1        $f14, -0x7984($gp)
    ctx->pc = 0x235c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x235c48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x235c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c50: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x235c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c54: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x235c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x235c58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x235c5c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x235c5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c60: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x235c60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c64: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x235c64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x235c68: 0xc08daf8  jal         func_236BE0
    ctx->pc = 0x235C68u;
    SET_GPR_U32(ctx, 31, 0x235C70u);
    ctx->pc = 0x235C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C68u;
    // 0x235c6c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x235C68u, 0x235C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C70u;
label_235c70:
    // 0x235c70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c74: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x235c74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235c78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x235c78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x235c7c: 0xc78e8680  lwc1        $f14, -0x7980($gp)
    ctx->pc = 0x235c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x235c80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x235c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c84: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x235c84u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x235c88: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x235c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x235c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c90: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x235c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c94: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x235c94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c98: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x235c98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x235c9c: 0xc08daf8  jal         func_236BE0
    ctx->pc = 0x235C9Cu;
    SET_GPR_U32(ctx, 31, 0x235CA4u);
    ctx->pc = 0x235CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C9Cu;
    // 0x235ca0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x235C9Cu, 0x235CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CA4u;
label_235ca4:
    // 0x235ca4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x235ca4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x235ca8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235CA8u;
    {
        const bool branch_taken_0x235ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CA8u;
        // 0x235cac: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ca8) {
            ctx->pc = 0x235CB8u;
            goto label_235cb8;
        }
    }
    ctx->pc = 0x235CB0u;
label_235cb0:
    // 0x235cb0: 0x26330090  addiu       $s3, $s1, 0x90
    ctx->pc = 0x235cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x235cb4: 0x263400a0  addiu       $s4, $s1, 0xA0
    ctx->pc = 0x235cb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_235cb8:
    // 0x235cb8: 0xc62c0080  lwc1        $f12, 0x80($s1)
    ctx->pc = 0x235cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x235cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235cc0: 0xc62d0088  lwc1        $f13, 0x88($s1)
    ctx->pc = 0x235cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x235cc4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x235cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235cc8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x235cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ccc: 0xc08cc4e  jal         func_233138
    ctx->pc = 0x235CCCu;
    SET_GPR_U32(ctx, 31, 0x235CD4u);
    ctx->pc = 0x235CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235CCCu;
    // 0x235cd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233138u, 0x235CCCu, 0x235CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CD4u;
label_235cd4:
    // 0x235cd4: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x235cd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x235cd8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x235cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235cdc: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x235cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x235ce0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x235ce0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x235ce4: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x235ce4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x235ce8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x235ce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x235cec: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x235cecu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x235cf0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x235cf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235cf4: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x235cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235cf8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x235cf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x235cfc: 0xe62000b0  swc1        $f0, 0xB0($s1)
    ctx->pc = 0x235cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x235d00: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x235d00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x235d04: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x235d04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x235d08: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x235d08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x235d0c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x235d0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x235d10: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x235d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x235d14: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x235d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x235d18: 0x3e00008  jr          $ra
    ctx->pc = 0x235D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D18u;
        // 0x235d1c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235D20u;
}

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

// Function: sub_002F52A0
// Address: 0x2f52a0 - 0x2f5428
void sub_002F52A0_0x2f52a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F52A0_0x2f52a0");
#endif

    switch (ctx->pc) {
        case 0x2f53e8u: goto label_2f53e8;
        case 0x2f53f8u: goto label_2f53f8;
        default: break;
    }

    ctx->pc = 0x2f52a0u;

    // 0x2f52a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f52a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f52a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f52a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f52a8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f52a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f52acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f52b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f52b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f52b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f52b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f52b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f52bc: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F52BCu;
    {
        const bool branch_taken_0x2f52bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52BCu;
        // 0x2f52c0: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52bc) {
            ctx->pc = 0x2F5338u;
            goto label_2f5338;
        }
    }
    ctx->pc = 0x2F52C4u;
    // 0x2f52c4: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x2f52c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2f52c8: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x2f52c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x2f52cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f52ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f52d0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2f52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2f52d4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f52d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2f52d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f52d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f52dc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f52e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f52e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f52e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f52e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f52e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f52e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f52ec: 0x0  nop
    ctx->pc = 0x2f52ecu;
    // NOP
    // 0x2f52f0: 0x0  nop
    ctx->pc = 0x2f52f0u;
    // NOP
    // 0x2f52f4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2f52f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x2f52f8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F52F8u;
    {
        const bool branch_taken_0x2f52f8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f52f8) {
            ctx->pc = 0x2F5310u;
            goto label_2f5310;
        }
    }
    ctx->pc = 0x2F5300u;
    // 0x2f5300: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2f5300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2f5304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5308: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5308u;
    {
        const bool branch_taken_0x2f5308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5308u;
        // 0x2f530c: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5308) {
            ctx->pc = 0x2F531Cu;
            goto label_2f531c;
        }
    }
    ctx->pc = 0x2F5310u;
label_2f5310:
    // 0x2f5310: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f5310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f5314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5318: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f5318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f531c:
    // 0x2f531c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f531cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f5320: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2f5320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f5324: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f5324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5328: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x2f5328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x2f532c: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x2f532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x2f5330: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F5330u;
    {
        const bool branch_taken_0x2f5330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5330u;
        // 0x2f5334: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5330) {
            ctx->pc = 0x2F53A4u;
            goto label_2f53a4;
        }
    }
    ctx->pc = 0x2F5338u;
label_2f5338:
    // 0x2f5338: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x2f5338u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2f533c: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x2f533cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x2f5340: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f5340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f5344: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2f5344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2f5348: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f5348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2f534c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f534cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5350: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f5350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f5354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5358: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f535c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f535cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f5360: 0x0  nop
    ctx->pc = 0x2f5360u;
    // NOP
    // 0x2f5364: 0x0  nop
    ctx->pc = 0x2f5364u;
    // NOP
    // 0x2f5368: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2f5368u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x2f536c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F536Cu;
    {
        const bool branch_taken_0x2f536c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f536c) {
            ctx->pc = 0x2F5388u;
            goto label_2f5388;
        }
    }
    ctx->pc = 0x2F5374u;
    // 0x2f5374: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2f5374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2f5378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f537c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F537Cu;
    {
        const bool branch_taken_0x2f537c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F537Cu;
        // 0x2f5380: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f537c) {
            ctx->pc = 0x2F5394u;
            goto label_2f5394;
        }
    }
    ctx->pc = 0x2F5384u;
    // 0x2f5384: 0x0  nop
    ctx->pc = 0x2f5384u;
    // NOP
label_2f5388:
    // 0x2f5388: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f5388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f538c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f538cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5390: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f5390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f5394:
    // 0x2f5394: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5394u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f5398: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f5398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f539c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2f539cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2f53a0: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x2f53a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_2f53a4:
    // 0x2f53a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F53A4u;
    {
        const bool branch_taken_0x2f53a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53A4u;
        // 0x2f53a8: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53a4) {
            ctx->pc = 0x2F53B0u;
            goto label_2f53b0;
        }
    }
    ctx->pc = 0x2F53ACu;
    // 0x2f53ac: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2f53acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2f53b0:
    // 0x2f53b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2f53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f53b4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2f53b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2f53b8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2f53b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2f53bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f53bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f53c0: 0x8c840340  lw          $a0, 0x340($a0)
    ctx->pc = 0x2f53c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x2f53c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2f53c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2f53c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f53c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2f53cc: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2f53ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f53d0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2f53d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2f53d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f53d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f53d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2f53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f53dc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f53dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f53e0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F53E0u;
    SET_GPR_U32(ctx, 31, 0x2F53E8u);
    ctx->pc = 0x2F53E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F53E0u;
    // 0x2f53e4: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F53E0u, 0x2F53E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F53E8u;
label_2f53e8:
    // 0x2f53e8: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x2f53e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2f53ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f53ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f53f0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F53F0u;
    SET_GPR_U32(ctx, 31, 0x2F53F8u);
    ctx->pc = 0x2F53F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F53F0u;
    // 0x2f53f4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F53F0u, 0x2F53F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F53F8u;
label_2f53f8:
    // 0x2f53f8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2f53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2f53fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f5400: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f5400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5404: 0x2842005a  slti        $v0, $v0, 0x5A
    ctx->pc = 0x2f5404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x2f5408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f5408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f540c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f540cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f5410: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f5410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f5414: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f5414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f5418: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2f5418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f541c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F541Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F541Cu;
        // 0x2f5420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F541Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5424u;
    // 0x2f5424: 0x0  nop
    ctx->pc = 0x2f5424u;
    // NOP
    ctx->pc = 0x2f5428u;
}

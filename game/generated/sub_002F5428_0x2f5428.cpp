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

// Function: sub_002F5428
// Address: 0x2f5428 - 0x2f57b8
void sub_002F5428_0x2f5428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5428_0x2f5428");
#endif

    switch (ctx->pc) {
        case 0x2f5578u: goto label_2f5578;
        case 0x2f5588u: goto label_2f5588;
        case 0x2f5598u: goto label_2f5598;
        case 0x2f55a8u: goto label_2f55a8;
        case 0x2f55b8u: goto label_2f55b8;
        case 0x2f55c8u: goto label_2f55c8;
        case 0x2f55d8u: goto label_2f55d8;
        case 0x2f55f0u: goto label_2f55f0;
        case 0x2f5600u: goto label_2f5600;
        case 0x2f5610u: goto label_2f5610;
        case 0x2f5620u: goto label_2f5620;
        case 0x2f5630u: goto label_2f5630;
        case 0x2f5640u: goto label_2f5640;
        case 0x2f5650u: goto label_2f5650;
        case 0x2f5660u: goto label_2f5660;
        case 0x2f5670u: goto label_2f5670;
        case 0x2f5684u: goto label_2f5684;
        case 0x2f5694u: goto label_2f5694;
        case 0x2f56a4u: goto label_2f56a4;
        case 0x2f56b4u: goto label_2f56b4;
        case 0x2f56c4u: goto label_2f56c4;
        case 0x2f56d4u: goto label_2f56d4;
        case 0x2f56e4u: goto label_2f56e4;
        case 0x2f56f4u: goto label_2f56f4;
        case 0x2f5704u: goto label_2f5704;
        case 0x2f5714u: goto label_2f5714;
        case 0x2f5724u: goto label_2f5724;
        case 0x2f5734u: goto label_2f5734;
        case 0x2f5744u: goto label_2f5744;
        case 0x2f5754u: goto label_2f5754;
        case 0x2f5764u: goto label_2f5764;
        case 0x2f5774u: goto label_2f5774;
        case 0x2f5784u: goto label_2f5784;
        default: break;
    }

    ctx->pc = 0x2f5428u;

    // 0x2f5428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f5428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f542c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f542cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f5430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f5434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f5438: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f5438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f543c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f543cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f5440: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f5440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5444: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f5444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f5448: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f5448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f544c: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F544Cu;
    {
        const bool branch_taken_0x2f544c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F544Cu;
        // 0x2f5450: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f544c) {
            ctx->pc = 0x2F54C8u;
            goto label_2f54c8;
        }
    }
    ctx->pc = 0x2F5454u;
    // 0x2f5454: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x2f5454u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2f5458: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x2f5458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x2f545c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f545cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f5460: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x2f5460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2f5464: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f5464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2f5468: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f5468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f546c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f546cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f5470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5474: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5478: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f5478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f547c: 0x0  nop
    ctx->pc = 0x2f547cu;
    // NOP
    // 0x2f5480: 0x0  nop
    ctx->pc = 0x2f5480u;
    // NOP
    // 0x2f5484: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2f5484u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x2f5488: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5488u;
    {
        const bool branch_taken_0x2f5488 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f5488) {
            ctx->pc = 0x2F54A0u;
            goto label_2f54a0;
        }
    }
    ctx->pc = 0x2F5490u;
    // 0x2f5490: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2f5490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2f5494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5498: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5498u;
    {
        const bool branch_taken_0x2f5498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5498u;
        // 0x2f549c: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5498) {
            ctx->pc = 0x2F54ACu;
            goto label_2f54ac;
        }
    }
    ctx->pc = 0x2F54A0u;
label_2f54a0:
    // 0x2f54a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f54a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f54a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f54a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f54a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f54a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f54ac:
    // 0x2f54ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f54acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f54b0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2f54b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f54b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f54b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f54b8: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x2f54b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x2f54bc: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x2f54bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x2f54c0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F54C0u;
    {
        const bool branch_taken_0x2f54c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54C0u;
        // 0x2f54c4: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54c0) {
            ctx->pc = 0x2F5534u;
            goto label_2f5534;
        }
    }
    ctx->pc = 0x2F54C8u;
label_2f54c8:
    // 0x2f54c8: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x2f54c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2f54cc: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x2f54ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x2f54d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f54d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f54d4: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x2f54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2f54d8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f54d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2f54dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f54dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f54e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f54e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f54e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f54e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f54e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f54ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f54ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f54f0: 0x0  nop
    ctx->pc = 0x2f54f0u;
    // NOP
    // 0x2f54f4: 0x0  nop
    ctx->pc = 0x2f54f4u;
    // NOP
    // 0x2f54f8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2f54f8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x2f54fc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F54FCu;
    {
        const bool branch_taken_0x2f54fc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f54fc) {
            ctx->pc = 0x2F5518u;
            goto label_2f5518;
        }
    }
    ctx->pc = 0x2F5504u;
    // 0x2f5504: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2f5504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2f5508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f550c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F550Cu;
    {
        const bool branch_taken_0x2f550c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F550Cu;
        // 0x2f5510: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f550c) {
            ctx->pc = 0x2F5524u;
            goto label_2f5524;
        }
    }
    ctx->pc = 0x2F5514u;
    // 0x2f5514: 0x0  nop
    ctx->pc = 0x2f5514u;
    // NOP
label_2f5518:
    // 0x2f5518: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f5518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f551c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f551cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5520: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f5520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f5524:
    // 0x2f5524: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5524u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f5528: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f5528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f552c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2f552cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2f5530: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x2f5530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_2f5534:
    // 0x2f5534: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5534u;
    {
        const bool branch_taken_0x2f5534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5534u;
        // 0x2f5538: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5534) {
            ctx->pc = 0x2F5540u;
            goto label_2f5540;
        }
    }
    ctx->pc = 0x2F553Cu;
    // 0x2f553c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2f553cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2f5540:
    // 0x2f5540: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2f5540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f5544: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2f5544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2f5548: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2f5548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2f554c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f554cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f5550: 0x8c840340  lw          $a0, 0x340($a0)
    ctx->pc = 0x2f5550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x2f5554: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2f5554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2f5558: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f5558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2f555c: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2f555cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f5560: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2f5560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2f5564: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f5568: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f5568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f556c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f556cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f5570: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5570u;
    SET_GPR_U32(ctx, 31, 0x2F5578u);
    ctx->pc = 0x2F5574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5570u;
    // 0x2f5574: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5570u, 0x2F5578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5578u;
label_2f5578:
    // 0x2f5578: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x2f5578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2f557c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f557cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f5580: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5580u;
    SET_GPR_U32(ctx, 31, 0x2F5588u);
    ctx->pc = 0x2F5584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5580u;
    // 0x2f5584: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5580u, 0x2F5588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5588u;
label_2f5588:
    // 0x2f5588: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x2f5588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2f558c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f558cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f5590: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5590u;
    SET_GPR_U32(ctx, 31, 0x2F5598u);
    ctx->pc = 0x2F5594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5590u;
    // 0x2f5594: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5590u, 0x2F5598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5598u;
label_2f5598:
    // 0x2f5598: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x2f5598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2f559c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f55a0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F55A0u;
    SET_GPR_U32(ctx, 31, 0x2F55A8u);
    ctx->pc = 0x2F55A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55A0u;
    // 0x2f55a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F55A0u, 0x2F55A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55A8u;
label_2f55a8:
    // 0x2f55a8: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2f55a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2f55ac: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f55acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f55b0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F55B0u;
    SET_GPR_U32(ctx, 31, 0x2F55B8u);
    ctx->pc = 0x2F55B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55B0u;
    // 0x2f55b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F55B0u, 0x2F55B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55B8u;
label_2f55b8:
    // 0x2f55b8: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x2f55b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2f55bc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f55bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f55c0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F55C0u;
    SET_GPR_U32(ctx, 31, 0x2F55C8u);
    ctx->pc = 0x2F55C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55C0u;
    // 0x2f55c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F55C0u, 0x2F55C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55C8u;
label_2f55c8:
    // 0x2f55c8: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x2f55c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2f55cc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f55ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f55d0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F55D0u;
    SET_GPR_U32(ctx, 31, 0x2F55D8u);
    ctx->pc = 0x2F55D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55D0u;
    // 0x2f55d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F55D0u, 0x2F55D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55D8u;
label_2f55d8:
    // 0x2f55d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f55dc: 0x12620026  beq         $s3, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F55DCu;
    {
        const bool branch_taken_0x2f55dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55DCu;
        // 0x2f55e0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55dc) {
            ctx->pc = 0x2F5678u;
            goto label_2f5678;
        }
    }
    ctx->pc = 0x2F55E4u;
    // 0x2f55e4: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2f55e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2f55e8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F55E8u;
    SET_GPR_U32(ctx, 31, 0x2F55F0u);
    ctx->pc = 0x2F55ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55E8u;
    // 0x2f55ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F55E8u, 0x2F55F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55F0u;
label_2f55f0:
    // 0x2f55f0: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2f55f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2f55f4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f55f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f55f8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F55F8u;
    SET_GPR_U32(ctx, 31, 0x2F5600u);
    ctx->pc = 0x2F55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55F8u;
    // 0x2f55fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F55F8u, 0x2F5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5600u;
label_2f5600:
    // 0x2f5600: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x2f5600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2f5604: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f5608: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5608u;
    SET_GPR_U32(ctx, 31, 0x2F5610u);
    ctx->pc = 0x2F560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5608u;
    // 0x2f560c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5608u, 0x2F5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5610u;
label_2f5610:
    // 0x2f5610: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x2f5610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2f5614: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f5618: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5618u;
    SET_GPR_U32(ctx, 31, 0x2F5620u);
    ctx->pc = 0x2F561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5618u;
    // 0x2f561c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5618u, 0x2F5620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5620u;
label_2f5620:
    // 0x2f5620: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x2f5620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2f5624: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f5628: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5628u;
    SET_GPR_U32(ctx, 31, 0x2F5630u);
    ctx->pc = 0x2F562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5628u;
    // 0x2f562c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5628u, 0x2F5630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5630u;
label_2f5630:
    // 0x2f5630: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x2f5630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2f5634: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f5638: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5638u;
    SET_GPR_U32(ctx, 31, 0x2F5640u);
    ctx->pc = 0x2F563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5638u;
    // 0x2f563c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5638u, 0x2F5640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5640u;
label_2f5640:
    // 0x2f5640: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x2f5640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2f5644: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f5648: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5648u;
    SET_GPR_U32(ctx, 31, 0x2F5650u);
    ctx->pc = 0x2F564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5648u;
    // 0x2f564c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5648u, 0x2F5650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5650u;
label_2f5650:
    // 0x2f5650: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x2f5650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2f5654: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f5658: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5658u;
    SET_GPR_U32(ctx, 31, 0x2F5660u);
    ctx->pc = 0x2F565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5658u;
    // 0x2f565c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5658u, 0x2F5660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5660u;
label_2f5660:
    // 0x2f5660: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x2f5660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2f5664: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f5664u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f5668: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5668u;
    SET_GPR_U32(ctx, 31, 0x2F5670u);
    ctx->pc = 0x2F566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5668u;
    // 0x2f566c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5668u, 0x2F5670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5670u;
label_2f5670:
    // 0x2f5670: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2F5670u;
    {
        const bool branch_taken_0x2f5670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5670u;
        // 0x2f5674: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5670) {
            ctx->pc = 0x2F5788u;
            goto label_2f5788;
        }
    }
    ctx->pc = 0x2F5678u;
label_2f5678:
    // 0x2f5678: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x2f5678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2f567c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F567Cu;
    SET_GPR_U32(ctx, 31, 0x2F5684u);
    ctx->pc = 0x2F5680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F567Cu;
    // 0x2f5680: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F567Cu, 0x2F5684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5684u;
label_2f5684:
    // 0x2f5684: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x2f5684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2f5688: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f568c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F568Cu;
    SET_GPR_U32(ctx, 31, 0x2F5694u);
    ctx->pc = 0x2F5690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F568Cu;
    // 0x2f5690: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F568Cu, 0x2F5694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5694u;
label_2f5694:
    // 0x2f5694: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x2f5694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2f5698: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f569c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F569Cu;
    SET_GPR_U32(ctx, 31, 0x2F56A4u);
    ctx->pc = 0x2F56A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F569Cu;
    // 0x2f56a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F569Cu, 0x2F56A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F56A4u;
label_2f56a4:
    // 0x2f56a4: 0x8e0400c8  lw          $a0, 0xC8($s0)
    ctx->pc = 0x2f56a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2f56a8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f56a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f56ac: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F56ACu;
    SET_GPR_U32(ctx, 31, 0x2F56B4u);
    ctx->pc = 0x2F56B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F56ACu;
    // 0x2f56b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F56ACu, 0x2F56B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F56B4u;
label_2f56b4:
    // 0x2f56b4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x2f56b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2f56b8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f56b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f56bc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F56BCu;
    SET_GPR_U32(ctx, 31, 0x2F56C4u);
    ctx->pc = 0x2F56C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F56BCu;
    // 0x2f56c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F56BCu, 0x2F56C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F56C4u;
label_2f56c4:
    // 0x2f56c4: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x2f56c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2f56c8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f56c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f56cc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F56CCu;
    SET_GPR_U32(ctx, 31, 0x2F56D4u);
    ctx->pc = 0x2F56D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F56CCu;
    // 0x2f56d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F56CCu, 0x2F56D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F56D4u;
label_2f56d4:
    // 0x2f56d4: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x2f56d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2f56d8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f56d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f56dc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F56DCu;
    SET_GPR_U32(ctx, 31, 0x2F56E4u);
    ctx->pc = 0x2F56E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F56DCu;
    // 0x2f56e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F56DCu, 0x2F56E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F56E4u;
label_2f56e4:
    // 0x2f56e4: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x2f56e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2f56e8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f56e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f56ec: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F56ECu;
    SET_GPR_U32(ctx, 31, 0x2F56F4u);
    ctx->pc = 0x2F56F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F56ECu;
    // 0x2f56f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F56ECu, 0x2F56F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F56F4u;
label_2f56f4:
    // 0x2f56f4: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x2f56f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2f56f8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f56f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f56fc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F56FCu;
    SET_GPR_U32(ctx, 31, 0x2F5704u);
    ctx->pc = 0x2F5700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F56FCu;
    // 0x2f5700: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F56FCu, 0x2F5704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5704u;
label_2f5704:
    // 0x2f5704: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x2f5704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x2f5708: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f570c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F570Cu;
    SET_GPR_U32(ctx, 31, 0x2F5714u);
    ctx->pc = 0x2F5710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F570Cu;
    // 0x2f5710: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F570Cu, 0x2F5714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5714u;
label_2f5714:
    // 0x2f5714: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x2f5714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2f5718: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f571c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F571Cu;
    SET_GPR_U32(ctx, 31, 0x2F5724u);
    ctx->pc = 0x2F5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F571Cu;
    // 0x2f5720: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F571Cu, 0x2F5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5724u;
label_2f5724:
    // 0x2f5724: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x2f5724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2f5728: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f572c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F572Cu;
    SET_GPR_U32(ctx, 31, 0x2F5734u);
    ctx->pc = 0x2F5730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F572Cu;
    // 0x2f5730: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F572Cu, 0x2F5734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5734u;
label_2f5734:
    // 0x2f5734: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2f5734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2f5738: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f573c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F573Cu;
    SET_GPR_U32(ctx, 31, 0x2F5744u);
    ctx->pc = 0x2F5740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F573Cu;
    // 0x2f5740: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F573Cu, 0x2F5744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5744u;
label_2f5744:
    // 0x2f5744: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x2f5744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2f5748: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f574c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F574Cu;
    SET_GPR_U32(ctx, 31, 0x2F5754u);
    ctx->pc = 0x2F5750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F574Cu;
    // 0x2f5750: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F574Cu, 0x2F5754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5754u;
label_2f5754:
    // 0x2f5754: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x2f5754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2f5758: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f575c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F575Cu;
    SET_GPR_U32(ctx, 31, 0x2F5764u);
    ctx->pc = 0x2F5760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F575Cu;
    // 0x2f5760: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F575Cu, 0x2F5764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5764u;
label_2f5764:
    // 0x2f5764: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x2f5764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2f5768: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f5768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f576c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F576Cu;
    SET_GPR_U32(ctx, 31, 0x2F5774u);
    ctx->pc = 0x2F5770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F576Cu;
    // 0x2f5770: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F576Cu, 0x2F5774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5774u;
label_2f5774:
    // 0x2f5774: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x2f5774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x2f5778: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f5778u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f577c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F577Cu;
    SET_GPR_U32(ctx, 31, 0x2F5784u);
    ctx->pc = 0x2F5780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F577Cu;
    // 0x2f5780: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F577Cu, 0x2F5784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5784u;
label_2f5784:
    // 0x2f5784: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x2f5784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_2f5788:
    // 0x2f5788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f5788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f578c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f578cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f5790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f5790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5794: 0x2842005a  slti        $v0, $v0, 0x5A
    ctx->pc = 0x2f5794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x2f5798: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f5798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f579c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f579cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f57a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f57a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f57a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f57a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f57a8: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x2f57a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f57ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F57ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F57B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57ACu;
        // 0x2f57b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F57ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F57B4u;
    // 0x2f57b4: 0x0  nop
    ctx->pc = 0x2f57b4u;
    // NOP
    ctx->pc = 0x2f57b8u;
}

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

// Function: sub_003286B8
// Address: 0x3286b8 - 0x328ab0
void sub_003286B8_0x3286b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003286B8_0x3286b8");
#endif

    switch (ctx->pc) {
        case 0x3289e8u: goto label_3289e8;
        case 0x328a90u: goto label_328a90;
        default: break;
    }

    ctx->pc = 0x3286b8u;

    // 0x3286b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3286b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3286bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3286bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3286c0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3286c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3286c4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3286c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3286c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3286c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3286cc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3286ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x3286d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3286d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3286d4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3286d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3286d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3286d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3286dc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3286dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3286e0: 0x31383  sra         $v0, $v1, 14
    ctx->pc = 0x3286e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
    // 0x3286e4: 0x30653fff  andi        $a1, $v1, 0x3FFF
    ctx->pc = 0x3286e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x3286e8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3286e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3286ec: 0x10640016  beq         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3286ECu;
    {
        const bool branch_taken_0x3286ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3286F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286ECu;
        // 0x3286f0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3286ec) {
            ctx->pc = 0x328748u;
            goto label_328748;
        }
    }
    ctx->pc = 0x3286F4u;
    // 0x3286f4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3286f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3286f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3286F8u;
    {
        const bool branch_taken_0x3286f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3286FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286F8u;
        // 0x3286fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3286f8) {
            ctx->pc = 0x328710u;
            goto label_328710;
        }
    }
    ctx->pc = 0x328700u;
    // 0x328700: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x328700u;
    {
        const bool branch_taken_0x328700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328700u;
        // 0x328704: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328700) {
            ctx->pc = 0x328720u;
            goto label_328720;
        }
    }
    ctx->pc = 0x328708u;
    // 0x328708: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x328708u;
    {
        const bool branch_taken_0x328708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328708u;
        // 0x32870c: 0x3c07003f  lui         $a3, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328708) {
            ctx->pc = 0x3287B0u;
            goto label_3287b0;
        }
    }
    ctx->pc = 0x328710u;
label_328710:
    // 0x328710: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x328710u;
    {
        const bool branch_taken_0x328710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x328714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328710u;
        // 0x328714: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328710) {
            ctx->pc = 0x328778u;
            goto label_328778;
        }
    }
    ctx->pc = 0x328718u;
    // 0x328718: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x328718u;
    {
        const bool branch_taken_0x328718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328718u;
        // 0x32871c: 0x3c07003f  lui         $a3, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328718) {
            ctx->pc = 0x3287B0u;
            goto label_3287b0;
        }
    }
    ctx->pc = 0x328720u;
label_328720:
    // 0x328720: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x328720u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x328724: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x328724u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x328728: 0x24e30340  addiu       $v1, $a3, 0x340
    ctx->pc = 0x328728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
    // 0x32872c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x32872cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x328730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x328730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x328734: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x328734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x328738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32873c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x32873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328740: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x328740u;
    {
        const bool branch_taken_0x328740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328740u;
        // 0x328744: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x328740) {
            ctx->pc = 0x3287A4u;
            goto label_3287a4;
        }
    }
    ctx->pc = 0x328748u;
label_328748:
    // 0x328748: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x328748u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x32874c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32874cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x328750: 0x24e40340  addiu       $a0, $a3, 0x340
    ctx->pc = 0x328750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
    // 0x328754: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x328754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x328758: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32875c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x32875cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x328760: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x328760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328764: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x328764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x328768: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x328768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32876c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x32876cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x328770: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x328770u;
    {
        const bool branch_taken_0x328770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328770u;
        // 0x328774: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x328770) {
            ctx->pc = 0x3287A4u;
            goto label_3287a4;
        }
    }
    ctx->pc = 0x328778u;
label_328778:
    // 0x328778: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x328778u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x32877c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x32877cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x328780: 0x24e30340  addiu       $v1, $a3, 0x340
    ctx->pc = 0x328780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
    // 0x328784: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x328784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x328788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x328788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32878c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x32878cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x328790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328794: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x328794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328798: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x328798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32879c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x32879cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3287a0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3287a0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3287a4:
    // 0x3287a4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3287a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3287a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3287A8u;
    {
        const bool branch_taken_0x3287a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3287ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287A8u;
        // 0x3287ac: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287a8) {
            ctx->pc = 0x3287DCu;
            goto label_3287dc;
        }
    }
    ctx->pc = 0x3287B0u;
label_3287b0:
    // 0x3287b0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3287b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3287b4: 0x24e40340  addiu       $a0, $a3, 0x340
    ctx->pc = 0x3287b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
    // 0x3287b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3287b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3287bc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3287bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3287c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3287c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3287c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3287c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3287c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3287c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3287cc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3287ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3287d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3287d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3287d4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x3287d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3287d8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3287d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3287dc:
    // 0x3287dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3287dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3287e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3287e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3287e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3287e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3287e8: 0x21b83  sra         $v1, $v0, 14
    ctx->pc = 0x3287e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 14));
    // 0x3287ec: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3287ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3287f0: 0x10640017  beq         $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3287F0u;
    {
        const bool branch_taken_0x3287f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3287F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287F0u;
        // 0x3287f4: 0x30453fff  andi        $a1, $v0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287f0) {
            ctx->pc = 0x328850u;
            goto label_328850;
        }
    }
    ctx->pc = 0x3287F8u;
    // 0x3287f8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3287f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3287fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3287FCu;
    {
        const bool branch_taken_0x3287fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287FCu;
        // 0x328800: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287fc) {
            ctx->pc = 0x328818u;
            goto label_328818;
        }
    }
    ctx->pc = 0x328804u;
    // 0x328804: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x328804u;
    {
        const bool branch_taken_0x328804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328804u;
        // 0x328808: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328804) {
            ctx->pc = 0x328828u;
            goto label_328828;
        }
    }
    ctx->pc = 0x32880Cu;
    // 0x32880c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x32880Cu;
    {
        const bool branch_taken_0x32880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32880Cu;
        // 0x328810: 0x24e40340  addiu       $a0, $a3, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32880c) {
            ctx->pc = 0x3288B8u;
            goto label_3288b8;
        }
    }
    ctx->pc = 0x328814u;
    // 0x328814: 0x0  nop
    ctx->pc = 0x328814u;
    // NOP
label_328818:
    // 0x328818: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x328818u;
    {
        const bool branch_taken_0x328818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328818u;
        // 0x32881c: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328818) {
            ctx->pc = 0x328880u;
            goto label_328880;
        }
    }
    ctx->pc = 0x328820u;
    // 0x328820: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x328820u;
    {
        const bool branch_taken_0x328820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328820u;
        // 0x328824: 0x24e40340  addiu       $a0, $a3, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328820) {
            ctx->pc = 0x3288B8u;
            goto label_3288b8;
        }
    }
    ctx->pc = 0x328828u;
label_328828:
    // 0x328828: 0x24e40340  addiu       $a0, $a3, 0x340
    ctx->pc = 0x328828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
    // 0x32882c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x32882cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x328830: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x328830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x328834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x328834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x328838: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32883c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32883cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x328840: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x328840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328844: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x328844u;
    {
        const bool branch_taken_0x328844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328844u;
        // 0x328848: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x328844) {
            ctx->pc = 0x3288A8u;
            goto label_3288a8;
        }
    }
    ctx->pc = 0x32884Cu;
    // 0x32884c: 0x0  nop
    ctx->pc = 0x32884cu;
    // NOP
label_328850:
    // 0x328850: 0x24e40340  addiu       $a0, $a3, 0x340
    ctx->pc = 0x328850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
    // 0x328854: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x328854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x328858: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32885c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32885cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x328860: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x328860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x328864: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x328864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x328868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x328868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32886c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x32886cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x328870: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x328870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x328874: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x328874u;
    {
        const bool branch_taken_0x328874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328874u;
        // 0x328878: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x328874) {
            ctx->pc = 0x3288A8u;
            goto label_3288a8;
        }
    }
    ctx->pc = 0x32887Cu;
    // 0x32887c: 0x0  nop
    ctx->pc = 0x32887cu;
    // NOP
label_328880:
    // 0x328880: 0x24e40340  addiu       $a0, $a3, 0x340
    ctx->pc = 0x328880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
    // 0x328884: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x328884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x328888: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x328888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32888c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32888cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x328890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328894: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x328894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x328898: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x328898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32889c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x32889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3288a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3288a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3288a4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3288a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3288a8:
    // 0x3288a8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3288a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3288ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3288ACu;
    {
        const bool branch_taken_0x3288ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3288B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288ACu;
        // 0x3288b0: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288ac) {
            ctx->pc = 0x3288E0u;
            goto label_3288e0;
        }
    }
    ctx->pc = 0x3288B4u;
    // 0x3288b4: 0x0  nop
    ctx->pc = 0x3288b4u;
    // NOP
label_3288b8:
    // 0x3288b8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3288b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3288bc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3288bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3288c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3288c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3288c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3288c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3288c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3288c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3288cc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3288ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3288d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3288d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3288d4: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x3288d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3288d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3288d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3288dc: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x3288dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_3288e0:
    // 0x3288e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3288e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3288e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3288e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3288e8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3288e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3288ec: 0x21b83  sra         $v1, $v0, 14
    ctx->pc = 0x3288ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 14));
    // 0x3288f0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3288f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3288f4: 0x10640016  beq         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3288F4u;
    {
        const bool branch_taken_0x3288f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3288F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288F4u;
        // 0x3288f8: 0x30453fff  andi        $a1, $v0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288f4) {
            ctx->pc = 0x328950u;
            goto label_328950;
        }
    }
    ctx->pc = 0x3288FCu;
    // 0x3288fc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3288fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x328900: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x328900u;
    {
        const bool branch_taken_0x328900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328900u;
        // 0x328904: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328900) {
            ctx->pc = 0x328918u;
            goto label_328918;
        }
    }
    ctx->pc = 0x328908u;
    // 0x328908: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x328908u;
    {
        const bool branch_taken_0x328908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328908u;
        // 0x32890c: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328908) {
            ctx->pc = 0x328928u;
            goto label_328928;
        }
    }
    ctx->pc = 0x328910u;
    // 0x328910: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x328910u;
    {
        const bool branch_taken_0x328910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328910u;
        // 0x328914: 0x24e40340  addiu       $a0, $a3, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328910) {
            ctx->pc = 0x3289B8u;
            goto label_3289b8;
        }
    }
    ctx->pc = 0x328918u;
label_328918:
    // 0x328918: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x328918u;
    {
        const bool branch_taken_0x328918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328918u;
        // 0x32891c: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328918) {
            ctx->pc = 0x328980u;
            goto label_328980;
        }
    }
    ctx->pc = 0x328920u;
    // 0x328920: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x328920u;
    {
        const bool branch_taken_0x328920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328920u;
        // 0x328924: 0x24e40340  addiu       $a0, $a3, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328920) {
            ctx->pc = 0x3289B8u;
            goto label_3289b8;
        }
    }
    ctx->pc = 0x328928u;
label_328928:
    // 0x328928: 0x24e40340  addiu       $a0, $a3, 0x340
    ctx->pc = 0x328928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
    // 0x32892c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x32892cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x328930: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x328930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x328934: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x328934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x328938: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32893c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x328940: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x328940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x328944: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x328944u;
    {
        const bool branch_taken_0x328944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328944u;
        // 0x328948: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x328944) {
            ctx->pc = 0x3289A8u;
            goto label_3289a8;
        }
    }
    ctx->pc = 0x32894Cu;
    // 0x32894c: 0x0  nop
    ctx->pc = 0x32894cu;
    // NOP
label_328950:
    // 0x328950: 0x24e40340  addiu       $a0, $a3, 0x340
    ctx->pc = 0x328950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
    // 0x328954: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x328954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x328958: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32895c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x328960: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x328960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328964: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x328964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x328968: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x328968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32896c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x32896cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x328970: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x328970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x328974: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x328974u;
    {
        const bool branch_taken_0x328974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328974u;
        // 0x328978: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x328974) {
            ctx->pc = 0x3289A8u;
            goto label_3289a8;
        }
    }
    ctx->pc = 0x32897Cu;
    // 0x32897c: 0x0  nop
    ctx->pc = 0x32897cu;
    // NOP
label_328980:
    // 0x328980: 0x24e40340  addiu       $a0, $a3, 0x340
    ctx->pc = 0x328980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
    // 0x328984: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x328984u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x328988: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x328988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32898c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32898cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x328990: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328994: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x328994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x328998: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x328998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32899c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x32899cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3289a0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3289a0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3289a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3289a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3289a8:
    // 0x3289a8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x3289a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3289ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3289ACu;
    {
        const bool branch_taken_0x3289ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3289B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289ACu;
        // 0x3289b0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3289ac) {
            ctx->pc = 0x3289E0u;
            goto label_3289e0;
        }
    }
    ctx->pc = 0x3289B4u;
    // 0x3289b4: 0x0  nop
    ctx->pc = 0x3289b4u;
    // NOP
label_3289b8:
    // 0x3289b8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3289b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3289bc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3289bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3289c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3289c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3289c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3289c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3289c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3289c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3289cc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3289ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3289d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3289d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3289d4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x3289d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3289d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3289d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3289dc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3289dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3289e0:
    // 0x3289e0: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x3289E0u;
    SET_GPR_U32(ctx, 31, 0x3289E8u);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x3289E0u, 0x3289E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3289E8u;
label_3289e8:
    // 0x3289e8: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x3289e8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3289ec: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x3289ecu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x3289f0: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x3289f0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3289f4: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x3289f4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x3289f8: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x3289f8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x3289fc: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x3289fcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x328a00: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x328a00u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x328a04: 0xda280000  lqc2        $vf8, 0x0($s1)
    ctx->pc = 0x328a04u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x328a08: 0x4be8e9bd  vmulay.xyzw $ACC, $vf29, $vf8y
    ctx->pc = 0x328a08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x328a0c: 0x4a88022c  vsub.y      $vf8, $vf0, $vf8
    ctx->pc = 0x328a0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x328a10: 0x4be8e0c8  vmaddx.xyzw $vf3, $vf28, $vf8x
    ctx->pc = 0x328a10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x328a14: 0x4be8e9bc  vmulax.xyzw $ACC, $vf29, $vf8x
    ctx->pc = 0x328a14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x328a18: 0x4a0002ff  vnop
    ctx->pc = 0x328a18u;
    // NOP operation, no action needed for VU0
    // 0x328a1c: 0x4be8e749  vmaddy.xyzw $vf29, $vf28, $vf8y
    ctx->pc = 0x328a1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x328a20: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x328a20u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x328a24: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x328a24u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328a28: 0x4be8f1bd  vmulay.xyzw $ACC, $vf30, $vf8y
    ctx->pc = 0x328a28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x328a2c: 0x4a88022c  vsub.y      $vf8, $vf0, $vf8
    ctx->pc = 0x328a2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x328a30: 0x4be8e8c8  vmaddx.xyzw $vf3, $vf29, $vf8x
    ctx->pc = 0x328a30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x328a34: 0x4be8f1bc  vmulax.xyzw $ACC, $vf30, $vf8x
    ctx->pc = 0x328a34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x328a38: 0x4a0002ff  vnop
    ctx->pc = 0x328a38u;
    // NOP operation, no action needed for VU0
    // 0x328a3c: 0x4be8ef89  vmaddy.xyzw $vf30, $vf29, $vf8y
    ctx->pc = 0x328a3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x328a40: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x328a40u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x328a44: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x328a44u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x328a48: 0x4be8e1bd  vmulay.xyzw $ACC, $vf28, $vf8y
    ctx->pc = 0x328a48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x328a4c: 0x4a88022c  vsub.y      $vf8, $vf0, $vf8
    ctx->pc = 0x328a4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x328a50: 0x4be8f0c8  vmaddx.xyzw $vf3, $vf30, $vf8x
    ctx->pc = 0x328a50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x328a54: 0x4be8e1bc  vmulax.xyzw $ACC, $vf28, $vf8x
    ctx->pc = 0x328a54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x328a58: 0x4a0002ff  vnop
    ctx->pc = 0x328a58u;
    // NOP operation, no action needed for VU0
    // 0x328a5c: 0x4be8f709  vmaddy.xyzw $vf28, $vf30, $vf8y
    ctx->pc = 0x328a5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x328a60: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x328a60u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x328a64: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x328a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328a68: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x328a68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x328a6c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x328a6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x328a70: 0x4be1e718  vmulx.xyzw  $vf28, $vf28, $vf1x
    ctx->pc = 0x328a70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x328a74: 0x4be1ef58  vmulx.xyzw  $vf29, $vf29, $vf1x
    ctx->pc = 0x328a74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x328a78: 0x4be1f798  vmulx.xyzw  $vf30, $vf30, $vf1x
    ctx->pc = 0x328a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x328a7c: 0xfa7c0040  sqc2        $vf28, 0x40($s3)
    ctx->pc = 0x328a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x328a80: 0xfa7d0050  sqc2        $vf29, 0x50($s3)
    ctx->pc = 0x328a80u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x328a84: 0xfa7e0060  sqc2        $vf30, 0x60($s3)
    ctx->pc = 0x328a84u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x328a88: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x328A88u;
    SET_GPR_U32(ctx, 31, 0x328A90u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x328A88u, 0x328A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A90u;
label_328a90:
    // 0x328a90: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x328a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328a94: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x328a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328a98: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x328a98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x328a9c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x328a9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328aa0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x328aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x328aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x328AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AA4u;
        // 0x328aa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328AACu;
    // 0x328aac: 0x0  nop
    ctx->pc = 0x328aacu;
    // NOP
    ctx->pc = 0x328ab0u;
}

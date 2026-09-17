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

// Function: sub_002AE160
// Address: 0x2ae160 - 0x2ae510
void sub_002AE160_0x2ae160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE160_0x2ae160");
#endif

    switch (ctx->pc) {
        case 0x2ae198u: goto label_2ae198;
        case 0x2ae268u: goto label_2ae268;
        case 0x2ae28cu: goto label_2ae28c;
        case 0x2ae2b4u: goto label_2ae2b4;
        case 0x2ae328u: goto label_2ae328;
        case 0x2ae360u: goto label_2ae360;
        case 0x2ae384u: goto label_2ae384;
        case 0x2ae3acu: goto label_2ae3ac;
        default: break;
    }

    ctx->pc = 0x2ae160u;

    // 0x2ae160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ae160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ae164: 0x28a60009  slti        $a2, $a1, 0x9
    ctx->pc = 0x2ae164u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2ae168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ae168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae16c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ae16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ae170: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ae170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ae174: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ae174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ae178: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2ae178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2ae17c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2ae17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2ae180: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2ae180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2ae184: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2ae184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2ae188: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2ae188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2ae18c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2ae18cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ae190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ae190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ae194: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ae194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ae198:
    // 0x2ae198: 0x50c0001b  beql        $a2, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2AE198u;
    {
        const bool branch_taken_0x2ae198 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae198) {
            ctx->pc = 0x2AE19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE198u;
            // 0x2ae19c: 0x8e220080  lw          $v0, 0x80($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE208u;
            goto label_2ae208;
        }
    }
    ctx->pc = 0x2AE1A0u;
    // 0x2ae1a0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ae1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ae1a4: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x2ae1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2ae1a8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ae1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ae1ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ae1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ae1b0: 0x8c63ce88  lw          $v1, -0x3178($v1)
    ctx->pc = 0x2ae1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954632)));
    // 0x2ae1b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ae1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ae1b8: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2AE1B8u;
    {
        const bool branch_taken_0x2ae1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1B8u;
        // 0x2ae1bc: 0xb11021  addu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae1b8) {
            ctx->pc = 0x2AE480u;
            goto label_2ae480;
        }
    }
    ctx->pc = 0x2AE1C0u;
    // 0x2ae1c0: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x2ae1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2ae1c4: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x2ae1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2ae1c8: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x2ae1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae1cc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae1d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae1d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae1d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ae1d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae1d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ae1d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae1dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ae1dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae1e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ae1e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae1e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ae1e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae1e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2ae1e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae1ec: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2ae1ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ae1f0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2ae1f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae1f4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2ae1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ae1f8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2ae1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ae1fc: 0x80aa636  j           func_2A98D8
    ctx->pc = 0x2AE1FCu;
    ctx->pc = 0x2AE200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE1FCu;
    // 0x2ae200: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    sub_002A98D8_0x2a98d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2AE204u;
    // 0x2ae204: 0x0  nop
    ctx->pc = 0x2ae204u;
    // NOP
label_2ae208:
    // 0x2ae208: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x2ae208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2ae20c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ae20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ae210: 0x5040007f  beql        $v0, $zero, . + 4 + (0x7F << 2)
    ctx->pc = 0x2AE210u;
    {
        const bool branch_taken_0x2ae210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae210) {
            ctx->pc = 0x2AE214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE210u;
            // 0x2ae214: 0xde220080  ld          $v0, 0x80($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE410u;
            goto label_2ae410;
        }
    }
    ctx->pc = 0x2AE218u;
    // 0x2ae218: 0x8e2600b4  lw          $a2, 0xB4($s1)
    ctx->pc = 0x2ae218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2ae21c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae21cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae220: 0x18c000ae  blez        $a2, . + 4 + (0xAE << 2)
    ctx->pc = 0x2AE220u;
    {
        const bool branch_taken_0x2ae220 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2AE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE220u;
        // 0x2ae224: 0x24b2fffa  addiu       $s2, $a1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae220) {
            ctx->pc = 0x2AE4DCu;
            goto label_2ae4dc;
        }
    }
    ctx->pc = 0x2AE228u;
    // 0x2ae228: 0x8e3000b8  lw          $s0, 0xB8($s1)
    ctx->pc = 0x2ae228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2ae22c: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2ae22cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ae230: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ae230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae234: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ae234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ae238: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ae238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae23c: 0x8c63cec8  lw          $v1, -0x3138($v1)
    ctx->pc = 0x2ae23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954696)));
    // 0x2ae240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ae240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ae244: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AE244u;
    {
        const bool branch_taken_0x2ae244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE244u;
        // 0x2ae248: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae244) {
            ctx->pc = 0x2AE2C0u;
            goto label_2ae2c0;
        }
    }
    ctx->pc = 0x2AE24Cu;
    // 0x2ae24c: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE24Cu;
    {
        const bool branch_taken_0x2ae24c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE24Cu;
        // 0x2ae250: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae24c) {
            ctx->pc = 0x2AE270u;
            goto label_2ae270;
        }
    }
    ctx->pc = 0x2AE254u;
    // 0x2ae254: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae258: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ae258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae25c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae260: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE260u;
    SET_GPR_U32(ctx, 31, 0x2AE268u);
    ctx->pc = 0x2AE264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE260u;
    // 0x2ae264: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE260u, 0x2AE268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE268u;
label_2ae268:
    // 0x2ae268: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AE268u;
    {
        const bool branch_taken_0x2ae268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE268u;
        // 0x2ae26c: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae268) {
            ctx->pc = 0x2AE290u;
            goto label_2ae290;
        }
    }
    ctx->pc = 0x2AE270u;
label_2ae270:
    // 0x2ae270: 0x5642000b  bnel        $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AE270u;
    {
        const bool branch_taken_0x2ae270 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ae270) {
            ctx->pc = 0x2AE274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE270u;
            // 0x2ae274: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE2A0u;
            goto label_2ae2a0;
        }
    }
    ctx->pc = 0x2AE278u;
    // 0x2ae278: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae27c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ae27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae280: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae284: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE284u;
    SET_GPR_U32(ctx, 31, 0x2AE28Cu);
    ctx->pc = 0x2AE288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE284u;
    // 0x2ae288: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE284u, 0x2AE28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE28Cu;
label_2ae28c:
    // 0x2ae28c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2ae28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ae290:
    // 0x2ae290: 0x8e2600b4  lw          $a2, 0xB4($s1)
    ctx->pc = 0x2ae290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2ae294: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2AE294u;
    {
        const bool branch_taken_0x2ae294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE294u;
        // 0x2ae298: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae294) {
            ctx->pc = 0x2AE2F4u;
            goto label_2ae2f4;
        }
    }
    ctx->pc = 0x2AE29Cu;
    // 0x2ae29c: 0x0  nop
    ctx->pc = 0x2ae29cu;
    // NOP
label_2ae2a0:
    // 0x2ae2a0: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2ae2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ae2a4: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x2ae2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae2a8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae2a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae2ac: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE2ACu;
    SET_GPR_U32(ctx, 31, 0x2AE2B4u);
    ctx->pc = 0x2AE2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE2ACu;
    // 0x2ae2b0: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE2ACu, 0x2AE2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE2B4u;
label_2ae2b4:
    // 0x2ae2b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2AE2B4u;
    {
        const bool branch_taken_0x2ae2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2B4u;
        // 0x2ae2b8: 0x8e2600b4  lw          $a2, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae2b4) {
            ctx->pc = 0x2AE2F4u;
            goto label_2ae2f4;
        }
    }
    ctx->pc = 0x2AE2BCu;
    // 0x2ae2bc: 0x0  nop
    ctx->pc = 0x2ae2bcu;
    // NOP
label_2ae2c0:
    // 0x2ae2c0: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE2C0u;
    {
        const bool branch_taken_0x2ae2c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2C0u;
        // 0x2ae2c4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae2c0) {
            ctx->pc = 0x2AE2D8u;
            goto label_2ae2d8;
        }
    }
    ctx->pc = 0x2AE2C8u;
    // 0x2ae2c8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2ae2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae2cc: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2ae2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae2d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE2D0u;
    {
        const bool branch_taken_0x2ae2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2D0u;
        // 0x2ae2d4: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae2d0) {
            ctx->pc = 0x2AE2F4u;
            goto label_2ae2f4;
        }
    }
    ctx->pc = 0x2AE2D8u;
label_2ae2d8:
    // 0x2ae2d8: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE2D8u;
    {
        const bool branch_taken_0x2ae2d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2D8u;
        // 0x2ae2dc: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae2d8) {
            ctx->pc = 0x2AE2F0u;
            goto label_2ae2f0;
        }
    }
    ctx->pc = 0x2AE2E0u;
    // 0x2ae2e0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2ae2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae2e4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2ae2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae2e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE2E8u;
    {
        const bool branch_taken_0x2ae2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2E8u;
        // 0x2ae2ec: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae2e8) {
            ctx->pc = 0x2AE2F4u;
            goto label_2ae2f4;
        }
    }
    ctx->pc = 0x2AE2F0u;
label_2ae2f0:
    // 0x2ae2f0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2ae2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae2f4:
    // 0x2ae2f4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ae2f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae2f8: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x2ae2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2ae2fc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2AE2FCu;
    {
        const bool branch_taken_0x2ae2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2FCu;
        // 0x2ae300: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae2fc) {
            ctx->pc = 0x2AE408u;
            goto label_2ae408;
        }
    }
    ctx->pc = 0x2AE304u;
    // 0x2ae304: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2ae304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ae308: 0x263e0008  addiu       $fp, $s1, 0x8
    ctx->pc = 0x2ae308u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2ae30c: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x2ae30cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ae310: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x2ae310u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    // 0x2ae314: 0x26f7cec8  addiu       $s7, $s7, -0x3138
    ctx->pc = 0x2ae314u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294954696));
    // 0x2ae318: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x2ae318u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2ae31c: 0x24160007  addiu       $s6, $zero, 0x7
    ctx->pc = 0x2ae31cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ae320: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x2ae320u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ae324: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2ae324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2ae328:
    // 0x2ae328: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2ae328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2ae32c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2ae32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2ae330: 0x8c5000b0  lw          $s0, 0xB0($v0)
    ctx->pc = 0x2ae330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2ae334: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ae334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae338: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ae338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ae33c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AE33Cu;
    {
        const bool branch_taken_0x2ae33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae33c) {
            ctx->pc = 0x2AE3B8u;
            goto label_2ae3b8;
        }
    }
    ctx->pc = 0x2AE344u;
    // 0x2ae344: 0x16560008  bne         $s2, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE344u;
    {
        const bool branch_taken_0x2ae344 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        if (branch_taken_0x2ae344) {
            ctx->pc = 0x2AE368u;
            goto label_2ae368;
        }
    }
    ctx->pc = 0x2AE34Cu;
    // 0x2ae34c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae350: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ae350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae354: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae358: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE358u;
    SET_GPR_U32(ctx, 31, 0x2AE360u);
    ctx->pc = 0x2AE35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE358u;
    // 0x2ae35c: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE358u, 0x2AE360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE360u;
label_2ae360:
    // 0x2ae360: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AE360u;
    {
        const bool branch_taken_0x2ae360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE360u;
        // 0x2ae364: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae360) {
            ctx->pc = 0x2AE388u;
            goto label_2ae388;
        }
    }
    ctx->pc = 0x2AE368u;
label_2ae368:
    // 0x2ae368: 0x5655000b  bnel        $s2, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x2AE368u;
    {
        const bool branch_taken_0x2ae368 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x2ae368) {
            ctx->pc = 0x2AE36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE368u;
            // 0x2ae36c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE398u;
            goto label_2ae398;
        }
    }
    ctx->pc = 0x2AE370u;
    // 0x2ae370: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae374: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ae374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae378: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae37c: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE37Cu;
    SET_GPR_U32(ctx, 31, 0x2AE384u);
    ctx->pc = 0x2AE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE37Cu;
    // 0x2ae380: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE37Cu, 0x2AE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE384u;
label_2ae384:
    // 0x2ae384: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2ae384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ae388:
    // 0x2ae388: 0x8e2600b4  lw          $a2, 0xB4($s1)
    ctx->pc = 0x2ae388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2ae38c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2AE38Cu;
    {
        const bool branch_taken_0x2ae38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE38Cu;
        // 0x2ae390: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae38c) {
            ctx->pc = 0x2AE3ECu;
            goto label_2ae3ec;
        }
    }
    ctx->pc = 0x2AE394u;
    // 0x2ae394: 0x0  nop
    ctx->pc = 0x2ae394u;
    // NOP
label_2ae398:
    // 0x2ae398: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x2ae398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2ae39c: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x2ae39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae3a0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae3a4: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE3A4u;
    SET_GPR_U32(ctx, 31, 0x2AE3ACu);
    ctx->pc = 0x2AE3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE3A4u;
    // 0x2ae3a8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE3A4u, 0x2AE3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE3ACu;
label_2ae3ac:
    // 0x2ae3ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2AE3ACu;
    {
        const bool branch_taken_0x2ae3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3ACu;
        // 0x2ae3b0: 0x8e2600b4  lw          $a2, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3ac) {
            ctx->pc = 0x2AE3ECu;
            goto label_2ae3ec;
        }
    }
    ctx->pc = 0x2AE3B4u;
    // 0x2ae3b4: 0x0  nop
    ctx->pc = 0x2ae3b4u;
    // NOP
label_2ae3b8:
    // 0x2ae3b8: 0x16560005  bne         $s2, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE3B8u;
    {
        const bool branch_taken_0x2ae3b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        if (branch_taken_0x2ae3b8) {
            ctx->pc = 0x2AE3D0u;
            goto label_2ae3d0;
        }
    }
    ctx->pc = 0x2AE3C0u;
    // 0x2ae3c0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2ae3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae3c4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2ae3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae3c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE3C8u;
    {
        const bool branch_taken_0x2ae3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3C8u;
        // 0x2ae3cc: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3c8) {
            ctx->pc = 0x2AE3ECu;
            goto label_2ae3ec;
        }
    }
    ctx->pc = 0x2AE3D0u;
label_2ae3d0:
    // 0x2ae3d0: 0x16550005  bne         $s2, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE3D0u;
    {
        const bool branch_taken_0x2ae3d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x2AE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3D0u;
        // 0x2ae3d4: 0x2141021  addu        $v0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3d0) {
            ctx->pc = 0x2AE3E8u;
            goto label_2ae3e8;
        }
    }
    ctx->pc = 0x2AE3D8u;
    // 0x2ae3d8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2ae3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae3dc: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2ae3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae3e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE3E0u;
    {
        const bool branch_taken_0x2ae3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3E0u;
        // 0x2ae3e4: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3e0) {
            ctx->pc = 0x2AE3ECu;
            goto label_2ae3ec;
        }
    }
    ctx->pc = 0x2AE3E8u;
label_2ae3e8:
    // 0x2ae3e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ae3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae3ec:
    // 0x2ae3ec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ae3ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ae3f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE3F0u;
    {
        const bool branch_taken_0x2ae3f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ae3f0) {
            ctx->pc = 0x2AE3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE3F0u;
            // 0x2ae3f4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE3F8u;
            goto label_2ae3f8;
        }
    }
    ctx->pc = 0x2AE3F8u;
label_2ae3f8:
    // 0x2ae3f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ae3f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ae3fc: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x2ae3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2ae400: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2AE400u;
    {
        const bool branch_taken_0x2ae400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE400u;
        // 0x2ae404: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae400) {
            ctx->pc = 0x2AE328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae328;
        }
    }
    ctx->pc = 0x2AE408u;
label_2ae408:
    // 0x2ae408: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2AE408u;
    {
        const bool branch_taken_0x2ae408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE408u;
        // 0x2ae40c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae408) {
            ctx->pc = 0x2AE4DCu;
            goto label_2ae4dc;
        }
    }
    ctx->pc = 0x2AE410u;
label_2ae410:
    // 0x2ae410: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2ae410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2ae414: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AE414u;
    {
        const bool branch_taken_0x2ae414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae414) {
            ctx->pc = 0x2AE490u;
            goto label_2ae490;
        }
    }
    ctx->pc = 0x2AE41Cu;
    // 0x2ae41c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ae41cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ae420: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x2ae420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2ae424: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ae424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ae428: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ae428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ae42c: 0x8c63ce88  lw          $v1, -0x3178($v1)
    ctx->pc = 0x2ae42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954632)));
    // 0x2ae430: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ae430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ae434: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AE434u;
    {
        const bool branch_taken_0x2ae434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE434u;
        // 0x2ae438: 0xb11021  addu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae434) {
            ctx->pc = 0x2AE480u;
            goto label_2ae480;
        }
    }
    ctx->pc = 0x2AE43Cu;
    // 0x2ae43c: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x2ae43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2ae440: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x2ae440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2ae444: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x2ae444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae448: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae44c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae44cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae450: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ae450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae454: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ae454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae458: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ae458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae45c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ae45cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae460: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ae460u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae464: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2ae464u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae468: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2ae468u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ae46c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2ae46cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae470: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2ae470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ae474: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2ae474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ae478: 0x80aa636  j           func_2A98D8
    ctx->pc = 0x2AE478u;
    ctx->pc = 0x2AE47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE478u;
    // 0x2ae47c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    sub_002A98D8_0x2a98d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2AE480u;
label_2ae480:
    // 0x2ae480: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x2ae480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2ae484: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2AE484u;
    {
        const bool branch_taken_0x2ae484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE484u;
        // 0x2ae488: 0xc4400090  lwc1        $f0, 0x90($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae484) {
            ctx->pc = 0x2AE4DCu;
            goto label_2ae4dc;
        }
    }
    ctx->pc = 0x2AE48Cu;
    // 0x2ae48c: 0x0  nop
    ctx->pc = 0x2ae48cu;
    // NOP
label_2ae490:
    // 0x2ae490: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AE490u;
    {
        const bool branch_taken_0x2ae490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE490u;
        // 0x2ae494: 0x262400b4  addiu       $a0, $s1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae490) {
            ctx->pc = 0x2AE4D8u;
            goto label_2ae4d8;
        }
    }
    ctx->pc = 0x2AE498u;
    // 0x2ae498: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ae498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ae49c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE49Cu;
    {
        const bool branch_taken_0x2ae49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE49Cu;
        // 0x2ae4a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae49c) {
            ctx->pc = 0x2AE4B0u;
            goto label_2ae4b0;
        }
    }
    ctx->pc = 0x2AE4A4u;
    // 0x2ae4a4: 0x1000ff3c  b           . + 4 + (-0xC4 << 2)
    ctx->pc = 0x2AE4A4u;
    {
        const bool branch_taken_0x2ae4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4A4u;
        // 0x2ae4a8: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4a4) {
            ctx->pc = 0x2AE198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae198;
        }
    }
    ctx->pc = 0x2AE4ACu;
    // 0x2ae4ac: 0x0  nop
    ctx->pc = 0x2ae4acu;
    // NOP
label_2ae4b0:
    // 0x2ae4b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE4B0u;
    {
        const bool branch_taken_0x2ae4b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4B0u;
        // 0x2ae4b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4b0) {
            ctx->pc = 0x2AE4C0u;
            goto label_2ae4c0;
        }
    }
    ctx->pc = 0x2AE4B8u;
    // 0x2ae4b8: 0x1000ff37  b           . + 4 + (-0xC9 << 2)
    ctx->pc = 0x2AE4B8u;
    {
        const bool branch_taken_0x2ae4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4B8u;
        // 0x2ae4bc: 0x8c910004  lw          $s1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4b8) {
            ctx->pc = 0x2AE198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae198;
        }
    }
    ctx->pc = 0x2AE4C0u;
label_2ae4c0:
    // 0x2ae4c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae4c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae4c4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE4C4u;
    {
        const bool branch_taken_0x2ae4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4C4u;
        // 0x2ae4c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4c4) {
            ctx->pc = 0x2AE4E0u;
            goto label_2ae4e0;
        }
    }
    ctx->pc = 0x2AE4CCu;
    // 0x2ae4cc: 0x1000ff32  b           . + 4 + (-0xCE << 2)
    ctx->pc = 0x2AE4CCu;
    {
        const bool branch_taken_0x2ae4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4CCu;
        // 0x2ae4d0: 0x8c910008  lw          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4cc) {
            ctx->pc = 0x2AE198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae198;
        }
    }
    ctx->pc = 0x2AE4D4u;
    // 0x2ae4d4: 0x0  nop
    ctx->pc = 0x2ae4d4u;
    // NOP
label_2ae4d8:
    // 0x2ae4d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae4d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ae4dc:
    // 0x2ae4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ae4e0:
    // 0x2ae4e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ae4e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae4e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ae4e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae4e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ae4e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae4ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ae4ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae4f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ae4f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae4f4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2ae4f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae4f8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2ae4f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ae4fc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2ae4fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae500: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2ae500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ae504: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2ae504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ae508: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE508u;
        // 0x2ae50c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE510u;
}

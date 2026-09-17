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

// Function: sub_0020E248
// Address: 0x20e248 - 0x2104fc
void sub_0020E248_0x20e248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E248_0x20e248");
#endif

    switch (ctx->pc) {
        case 0x20e47cu: goto label_20e47c;
        case 0x20e518u: goto label_20e518;
        case 0x20e528u: goto label_20e528;
        case 0x20e550u: goto label_20e550;
        case 0x20e57cu: goto label_20e57c;
        case 0x20e5a8u: goto label_20e5a8;
        case 0x20e5ccu: goto label_20e5cc;
        case 0x20e5f8u: goto label_20e5f8;
        case 0x20e608u: goto label_20e608;
        case 0x20e630u: goto label_20e630;
        case 0x20e7d4u: goto label_20e7d4;
        case 0x20e9a8u: goto label_20e9a8;
        case 0x20e9bcu: goto label_20e9bc;
        case 0x20e9d4u: goto label_20e9d4;
        case 0x20ea18u: goto label_20ea18;
        case 0x20eb38u: goto label_20eb38;
        case 0x20eb48u: goto label_20eb48;
        case 0x20ebccu: goto label_20ebcc;
        case 0x20ed54u: goto label_20ed54;
        case 0x20ed78u: goto label_20ed78;
        case 0x20ed98u: goto label_20ed98;
        case 0x20eeb0u: goto label_20eeb0;
        case 0x20eee8u: goto label_20eee8;
        case 0x20ef00u: goto label_20ef00;
        case 0x20ef40u: goto label_20ef40;
        case 0x20ef5cu: goto label_20ef5c;
        case 0x20f024u: goto label_20f024;
        case 0x20f07cu: goto label_20f07c;
        case 0x20f090u: goto label_20f090;
        case 0x20f0a4u: goto label_20f0a4;
        case 0x20f0b8u: goto label_20f0b8;
        case 0x20f0ccu: goto label_20f0cc;
        case 0x20f0e0u: goto label_20f0e0;
        case 0x20f0f8u: goto label_20f0f8;
        case 0x20f108u: goto label_20f108;
        case 0x20f120u: goto label_20f120;
        case 0x20f138u: goto label_20f138;
        case 0x20f150u: goto label_20f150;
        case 0x20f168u: goto label_20f168;
        case 0x20f180u: goto label_20f180;
        case 0x20f1a0u: goto label_20f1a0;
        case 0x20f200u: goto label_20f200;
        case 0x20f210u: goto label_20f210;
        case 0x20f220u: goto label_20f220;
        case 0x20f230u: goto label_20f230;
        case 0x20f240u: goto label_20f240;
        case 0x20f250u: goto label_20f250;
        case 0x20f260u: goto label_20f260;
        case 0x20f270u: goto label_20f270;
        case 0x20f284u: goto label_20f284;
        case 0x20f290u: goto label_20f290;
        case 0x20f2a8u: goto label_20f2a8;
        case 0x20f2dcu: goto label_20f2dc;
        case 0x20f338u: goto label_20f338;
        case 0x20f34cu: goto label_20f34c;
        case 0x20f360u: goto label_20f360;
        case 0x20f370u: goto label_20f370;
        case 0x20f380u: goto label_20f380;
        case 0x20f390u: goto label_20f390;
        case 0x20f3a0u: goto label_20f3a0;
        case 0x20f90cu: goto label_20f90c;
        case 0x20f92cu: goto label_20f92c;
        case 0x20f980u: goto label_20f980;
        case 0x20f9a8u: goto label_20f9a8;
        case 0x20f9b8u: goto label_20f9b8;
        case 0x20f9dcu: goto label_20f9dc;
        case 0x20fa00u: goto label_20fa00;
        case 0x20fa64u: goto label_20fa64;
        case 0x20fad4u: goto label_20fad4;
        case 0x20fdd8u: goto label_20fdd8;
        case 0x20fe08u: goto label_20fe08;
        case 0x20feb4u: goto label_20feb4;
        case 0x20ff20u: goto label_20ff20;
        case 0x20ff60u: goto label_20ff60;
        case 0x20fff4u: goto label_20fff4;
        case 0x210068u: goto label_210068;
        case 0x210100u: goto label_210100;
        case 0x210118u: goto label_210118;
        case 0x210130u: goto label_210130;
        case 0x210148u: goto label_210148;
        case 0x210178u: goto label_210178;
        case 0x210188u: goto label_210188;
        case 0x210198u: goto label_210198;
        case 0x2101a8u: goto label_2101a8;
        case 0x2101b8u: goto label_2101b8;
        case 0x2101c8u: goto label_2101c8;
        case 0x2101f8u: goto label_2101f8;
        case 0x21024cu: goto label_21024c;
        case 0x210318u: goto label_210318;
        case 0x21032cu: goto label_21032c;
        case 0x210344u: goto label_210344;
        case 0x210374u: goto label_210374;
        case 0x2103a4u: goto label_2103a4;
        case 0x2103b8u: goto label_2103b8;
        case 0x2103c8u: goto label_2103c8;
        case 0x2103d8u: goto label_2103d8;
        case 0x2103e8u: goto label_2103e8;
        case 0x2103f8u: goto label_2103f8;
        case 0x2104e4u: goto label_2104e4;
        default: break;
    }

    ctx->pc = 0x20e248u;

    // 0x20e248: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20e248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20e24c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x20e24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x20e250: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20e250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e254: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x20e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x20e258: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x20e258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x20e25c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x20e25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x20e260: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x20e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x20e264: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x20e264u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x20e268: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x20e268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x20e26c: 0x94890000  lhu         $t1, 0x0($a0)
    ctx->pc = 0x20e26cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20e270: 0x31228000  andi        $v0, $t1, 0x8000
    ctx->pc = 0x20e270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32768);
    // 0x20e274: 0x104008a1  beqz        $v0, . + 4 + (0x8A1 << 2)
    ctx->pc = 0x20E274u;
    {
        const bool branch_taken_0x20e274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E274u;
        // 0x20e278: 0x8e320064  lw          $s2, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e274) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20E27Cu;
    // 0x20e27c: 0x94900002  lhu         $s0, 0x2($a0)
    ctx->pc = 0x20e27cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20e280: 0x105400  sll         $t2, $s0, 16
    ctx->pc = 0x20e280u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x20e284: 0x4490a800  mtc1        $s0, $f21
    ctx->pc = 0x20e284u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x20e288: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x20e288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x20e28c: 0x10c002c4  beqz        $a2, . + 4 + (0x2C4 << 2)
    ctx->pc = 0x20E28Cu;
    {
        const bool branch_taken_0x20e28c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E28Cu;
        // 0x20e290: 0xa4403  sra         $t0, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e28c) {
            ctx->pc = 0x20EDA0u;
            goto label_20eda0;
        }
    }
    ctx->pc = 0x20E294u;
    // 0x20e294: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x20e294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x20e298: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20E298u;
    {
        const bool branch_taken_0x20e298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E298u;
        // 0x20e29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e298) {
            ctx->pc = 0x20E2BCu;
            goto label_20e2bc;
        }
    }
    ctx->pc = 0x20E2A0u;
    // 0x20e2a0: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x20e2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x20e2a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E2A4u;
    {
        const bool branch_taken_0x20e2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2A4u;
        // 0x20e2a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2a4) {
            ctx->pc = 0x20E2BCu;
            goto label_20e2bc;
        }
    }
    ctx->pc = 0x20E2ACu;
    // 0x20e2ac: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x20e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x20e2b0: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20E2B0u;
    {
        const bool branch_taken_0x20e2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20e2b0) {
            ctx->pc = 0x20E2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E2B0u;
            // 0x20e2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E2BCu;
            goto label_20e2bc;
        }
    }
    ctx->pc = 0x20E2B8u;
    // 0x20e2b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e2bc:
    // 0x20e2bc: 0x54400890  bnel        $v0, $zero, . + 4 + (0x890 << 2)
    ctx->pc = 0x20E2BCu;
    {
        const bool branch_taken_0x20e2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e2bc) {
            ctx->pc = 0x20E2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E2BCu;
            // 0x20e2c0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E2C4u;
    // 0x20e2c4: 0x25227fe7  addiu       $v0, $t1, 0x7FE7
    ctx->pc = 0x20e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 32743));
    // 0x20e2c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20e2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20e2cc: 0x2c420022  sltiu       $v0, $v0, 0x22
    ctx->pc = 0x20e2ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x20e2d0: 0x5040088b  beql        $v0, $zero, . + 4 + (0x88B << 2)
    ctx->pc = 0x20E2D0u;
    {
        const bool branch_taken_0x20e2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e2d0) {
            ctx->pc = 0x20E2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E2D0u;
            // 0x20e2d4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E2D8u;
    // 0x20e2d8: 0x9623003c  lhu         $v1, 0x3C($s1)
    ctx->pc = 0x20e2d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x20e2dc: 0x3c130015  lui         $s3, 0x15
    ctx->pc = 0x20e2dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
    // 0x20e2e0: 0x8e240894  lw          $a0, 0x894($s1)
    ctx->pc = 0x20e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x20e2e4: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x20e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x20e2e8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20e2ec: 0x26675900  addiu       $a3, $s3, 0x5900
    ctx->pc = 0x20e2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20e2f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e2f4: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x20e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x20e2f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20e2fc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x20e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x20e300: 0x2463a540  addiu       $v1, $v1, -0x5AC0
    ctx->pc = 0x20e300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944064));
    // 0x20e304: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20e304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20e308: 0x16050005  bne         $s0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E308u;
    {
        const bool branch_taken_0x20e308 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x20E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E308u;
        // 0x20e30c: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e308) {
            ctx->pc = 0x20E320u;
            goto label_20e320;
        }
    }
    ctx->pc = 0x20E310u;
    // 0x20e310: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x20e310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e314: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x20e314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e318: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x20E318u;
    {
        const bool branch_taken_0x20e318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E318u;
        // 0x20e31c: 0xc4620024  lwc1        $f2, 0x24($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e318) {
            ctx->pc = 0x20E3FCu;
            goto label_20e3fc;
        }
    }
    ctx->pc = 0x20E320u;
label_20e320:
    // 0x20e320: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x20e320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x20e324: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E324u;
    {
        const bool branch_taken_0x20e324 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E324u;
        // 0x20e328: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e324) {
            ctx->pc = 0x20E340u;
            goto label_20e340;
        }
    }
    ctx->pc = 0x20E32Cu;
    // 0x20e32c: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x20e32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e330: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x20e330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e334: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x20E334u;
    {
        const bool branch_taken_0x20e334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E334u;
        // 0x20e338: 0xc4620034  lwc1        $f2, 0x34($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e334) {
            ctx->pc = 0x20E3FCu;
            goto label_20e3fc;
        }
    }
    ctx->pc = 0x20E33Cu;
    // 0x20e33c: 0x0  nop
    ctx->pc = 0x20e33cu;
    // NOP
label_20e340:
    // 0x20e340: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E340u;
    {
        const bool branch_taken_0x20e340 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E340u;
        // 0x20e344: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e340) {
            ctx->pc = 0x20E358u;
            goto label_20e358;
        }
    }
    ctx->pc = 0x20E348u;
    // 0x20e348: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x20e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e34c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x20e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e350: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x20E350u;
    {
        const bool branch_taken_0x20e350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E350u;
        // 0x20e354: 0xc4620024  lwc1        $f2, 0x24($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e350) {
            ctx->pc = 0x20E3FCu;
            goto label_20e3fc;
        }
    }
    ctx->pc = 0x20E358u;
label_20e358:
    // 0x20e358: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E358u;
    {
        const bool branch_taken_0x20e358 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E358u;
        // 0x20e35c: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e358) {
            ctx->pc = 0x20E370u;
            goto label_20e370;
        }
    }
    ctx->pc = 0x20E360u;
    // 0x20e360: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x20e360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e364: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x20e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e368: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x20E368u;
    {
        const bool branch_taken_0x20e368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E368u;
        // 0x20e36c: 0xc4620014  lwc1        $f2, 0x14($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e368) {
            ctx->pc = 0x20E3FCu;
            goto label_20e3fc;
        }
    }
    ctx->pc = 0x20E370u;
label_20e370:
    // 0x20e370: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E370u;
    {
        const bool branch_taken_0x20e370 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E370u;
        // 0x20e374: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e370) {
            ctx->pc = 0x20E388u;
            goto label_20e388;
        }
    }
    ctx->pc = 0x20E378u;
    // 0x20e378: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x20e378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e37c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20e37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e380: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20E380u;
    {
        const bool branch_taken_0x20e380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E380u;
        // 0x20e384: 0xc4620004  lwc1        $f2, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e380) {
            ctx->pc = 0x20E3FCu;
            goto label_20e3fc;
        }
    }
    ctx->pc = 0x20E388u;
label_20e388:
    // 0x20e388: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E388u;
    {
        const bool branch_taken_0x20e388 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E388u;
        // 0x20e38c: 0x24020075  addiu       $v0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e388) {
            ctx->pc = 0x20E3A0u;
            goto label_20e3a0;
        }
    }
    ctx->pc = 0x20E390u;
    // 0x20e390: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x20e390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e394: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x20e394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e398: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20E398u;
    {
        const bool branch_taken_0x20e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E398u;
        // 0x20e39c: 0xc4620024  lwc1        $f2, 0x24($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e398) {
            ctx->pc = 0x20E3FCu;
            goto label_20e3fc;
        }
    }
    ctx->pc = 0x20E3A0u;
label_20e3a0:
    // 0x20e3a0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E3A0u;
    {
        const bool branch_taken_0x20e3a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3A0u;
        // 0x20e3a4: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3a0) {
            ctx->pc = 0x20E3B8u;
            goto label_20e3b8;
        }
    }
    ctx->pc = 0x20E3A8u;
    // 0x20e3a8: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x20e3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e3ac: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x20e3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e3b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20E3B0u;
    {
        const bool branch_taken_0x20e3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3B0u;
        // 0x20e3b4: 0xc4620024  lwc1        $f2, 0x24($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3b0) {
            ctx->pc = 0x20E3FCu;
            goto label_20e3fc;
        }
    }
    ctx->pc = 0x20E3B8u;
label_20e3b8:
    // 0x20e3b8: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E3B8u;
    {
        const bool branch_taken_0x20e3b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3B8u;
        // 0x20e3bc: 0x24020073  addiu       $v0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3b8) {
            ctx->pc = 0x20E3D0u;
            goto label_20e3d0;
        }
    }
    ctx->pc = 0x20E3C0u;
    // 0x20e3c0: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x20e3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e3c4: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x20e3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e3c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20E3C8u;
    {
        const bool branch_taken_0x20e3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3C8u;
        // 0x20e3cc: 0xc4620024  lwc1        $f2, 0x24($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3c8) {
            ctx->pc = 0x20E3FCu;
            goto label_20e3fc;
        }
    }
    ctx->pc = 0x20E3D0u;
label_20e3d0:
    // 0x20e3d0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E3D0u;
    {
        const bool branch_taken_0x20e3d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3D0u;
        // 0x20e3d4: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3d0) {
            ctx->pc = 0x20E3E8u;
            goto label_20e3e8;
        }
    }
    ctx->pc = 0x20E3D8u;
    // 0x20e3d8: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x20e3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e3dc: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x20e3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e3e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20E3E0u;
    {
        const bool branch_taken_0x20e3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3E0u;
        // 0x20e3e4: 0xc4620044  lwc1        $f2, 0x44($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3e0) {
            ctx->pc = 0x20E3FCu;
            goto label_20e3fc;
        }
    }
    ctx->pc = 0x20E3E8u;
label_20e3e8:
    // 0x20e3e8: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20E3E8u;
    {
        const bool branch_taken_0x20e3e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3E8u;
        // 0x20e3ec: 0x2e02006c  sltiu       $v0, $s0, 0x6C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)108) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3e8) {
            ctx->pc = 0x20E410u;
            goto label_20e410;
        }
    }
    ctx->pc = 0x20E3F0u;
    // 0x20e3f0: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x20e3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e3f4: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x20e3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e3f8: 0xc4620054  lwc1        $f2, 0x54($v1)
    ctx->pc = 0x20e3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20e3fc:
    // 0x20e3fc: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x20e3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x20e400: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x20e400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x20e404: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20E404u;
    {
        const bool branch_taken_0x20e404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E404u;
        // 0x20e408: 0xe4e20004  swc1        $f2, 0x4($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e404) {
            ctx->pc = 0x20E43Cu;
            goto label_20e43c;
        }
    }
    ctx->pc = 0x20E40Cu;
    // 0x20e40c: 0x0  nop
    ctx->pc = 0x20e40cu;
    // NOP
label_20e410:
    // 0x20e410: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20E410u;
    {
        const bool branch_taken_0x20e410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E410u;
        // 0x20e414: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e410) {
            ctx->pc = 0x20E43Cu;
            goto label_20e43c;
        }
    }
    ctx->pc = 0x20E418u;
    // 0x20e418: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20e41c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20e420: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20e420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20e424: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x20e424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e428: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x20e428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x20e42c: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x20e42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e430: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x20e430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x20e434: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x20e434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e438: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x20e438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_20e43c:
    // 0x20e43c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x20e440: 0x34427fe7  ori         $v0, $v0, 0x7FE7
    ctx->pc = 0x20e440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32743);
    // 0x20e444: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x20e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x20e448: 0x2c430022  sltiu       $v1, $v0, 0x22
    ctx->pc = 0x20e448u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x20e44c: 0x5060082c  beql        $v1, $zero, . + 4 + (0x82C << 2)
    ctx->pc = 0x20E44Cu;
    {
        const bool branch_taken_0x20e44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e44c) {
            ctx->pc = 0x20E450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E44Cu;
            // 0x20e450: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E454u;
    // 0x20e454: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e458: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x20e458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x20e45c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20e460: 0x8c634590  lw          $v1, 0x4590($v1)
    ctx->pc = 0x20e460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17808)));
    // 0x20e464: 0x600008  jr          $v1
    ctx->pc = 0x20E464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E470u: goto label_20e470;
            case 0x20E4A0u: goto label_20e4a0;
            case 0x20E558u: goto label_20e558;
            case 0x20E588u: goto label_20e588;
            case 0x20E5B0u: goto label_20e5b0;
            case 0x20E5D8u: goto label_20e5d8;
            case 0x20E610u: goto label_20e610;
            case 0x20E638u: goto label_20e638;
            case 0x20E7E0u: goto label_20e7e0;
            case 0x20E9E0u: goto label_20e9e0;
            case 0x20EA34u: goto label_20ea34;
            case 0x20EA40u: goto label_20ea40;
            case 0x20EA50u: goto label_20ea50;
            case 0x20EA60u: goto label_20ea60;
            case 0x20EA98u: goto label_20ea98;
            case 0x20EAB0u: goto label_20eab0;
            case 0x20EB68u: goto label_20eb68;
            case 0x20EB78u: goto label_20eb78;
            case 0x20EB88u: goto label_20eb88;
            case 0x20EB98u: goto label_20eb98;
            case 0x20EBA8u: goto label_20eba8;
            case 0x20EBB8u: goto label_20ebb8;
            case 0x20EBD8u: goto label_20ebd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E464u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20E46Cu;
    // 0x20e46c: 0x0  nop
    ctx->pc = 0x20e46cu;
    // NOP
label_20e470:
    // 0x20e470: 0x86240012  lh          $a0, 0x12($s1)
    ctx->pc = 0x20e470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x20e474: 0xc08e980  jal         func_23A600
    ctx->pc = 0x20E474u;
    SET_GPR_U32(ctx, 31, 0x20E47Cu);
    ctx->pc = 0x20E478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E474u;
    // 0x20e478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A600u, 0x20E474u, 0x20E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E47Cu;
label_20e47c:
    // 0x20e47c: 0x26625900  addiu       $v0, $s3, 0x5900
    ctx->pc = 0x20e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20e480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e484: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20e484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20e488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e48c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x20e48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x20e490: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x20e490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x20e494: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x20E494u;
    {
        const bool branch_taken_0x20e494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E494u;
        // 0x20e498: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e494) {
            ctx->pc = 0x20E548u;
            goto label_20e548;
        }
    }
    ctx->pc = 0x20E49Cu;
    // 0x20e49c: 0x0  nop
    ctx->pc = 0x20e49cu;
    // NOP
label_20e4a0:
    // 0x20e4a0: 0x8623007a  lh          $v1, 0x7A($s1)
    ctx->pc = 0x20e4a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x20e4a4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x20e4a8: 0xc78283d4  lwc1        $f2, -0x7C2C($gp)
    ctx->pc = 0x20e4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20e4ac: 0x24424550  addiu       $v0, $v0, 0x4550
    ctx->pc = 0x20e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17744));
    // 0x20e4b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e4b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20e4b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20e4b8: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x20e4b8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x464558u));
    // 0x20e4bc: 0xc78183d8  lwc1        $f1, -0x7C28($gp)
    ctx->pc = 0x20e4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e4c0: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x20e4c0u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x464550u));
    // 0x20e4c4: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x20e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x20e4c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20e4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x20e4cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20e4ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20e4d0: 0x0  nop
    ctx->pc = 0x20e4d0u;
    // NOP
    // 0x20e4d4: 0x0  nop
    ctx->pc = 0x20e4d4u;
    // NOP
    // 0x20e4d8: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x20e4d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x20e4dc: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x20e4dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e4e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20E4E0u;
    {
        const bool branch_taken_0x20e4e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E4E0u;
        // 0x20e4e4: 0xffa40040  sd          $a0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e4e0) {
            ctx->pc = 0x20E4F8u;
            goto label_20e4f8;
        }
    }
    ctx->pc = 0x20E4E8u;
    // 0x20e4e8: 0xc78083dc  lwc1        $f0, -0x7C24($gp)
    ctx->pc = 0x20e4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e4ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20E4ECu;
    {
        const bool branch_taken_0x20e4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E4ECu;
        // 0x20e4f0: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e4ec) {
            ctx->pc = 0x20E510u;
            goto label_20e510;
        }
    }
    ctx->pc = 0x20E4F4u;
    // 0x20e4f4: 0x0  nop
    ctx->pc = 0x20e4f4u;
    // NOP
label_20e4f8:
    // 0x20e4f8: 0xc78083e0  lwc1        $f0, -0x7C20($gp)
    ctx->pc = 0x20e4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e4fc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x20e4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e500: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20E500u;
    {
        const bool branch_taken_0x20e500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e500) {
            ctx->pc = 0x20E510u;
            goto label_20e510;
        }
    }
    ctx->pc = 0x20E508u;
    // 0x20e508: 0xc78083e4  lwc1        $f0, -0x7C1C($gp)
    ctx->pc = 0x20e508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e50c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x20e50cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_20e510:
    // 0x20e510: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x20E510u;
    SET_GPR_U32(ctx, 31, 0x20E518u);
    ctx->pc = 0x20E514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E510u;
    // 0x20e514: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x20E510u, 0x20E518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E518u;
label_20e518:
    // 0x20e518: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20e518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20e51c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20e51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e520: 0xc08491e  jal         func_212478
    ctx->pc = 0x20E520u;
    SET_GPR_U32(ctx, 31, 0x20E528u);
    ctx->pc = 0x20E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E520u;
    // 0x20e524: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x20E520u, 0x20E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E528u;
label_20e528:
    // 0x20e528: 0x26625900  addiu       $v0, $s3, 0x5900
    ctx->pc = 0x20e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20e52c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x20e52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e530: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20e530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e534: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x20e534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20e538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e53c: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x20e53cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x20e540: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x20e540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x20e544: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x20e544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_20e548:
    // 0x20e548: 0xc094dcc  jal         func_253730
    ctx->pc = 0x20E548u;
    SET_GPR_U32(ctx, 31, 0x20E550u);
    ctx->pc = 0x20E54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E548u;
    // 0x20e54c: 0x9624003c  lhu         $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x20E548u, 0x20E550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E550u;
label_20e550:
    // 0x20e550: 0x100007eb  b           . + 4 + (0x7EB << 2)
    ctx->pc = 0x20E550u;
    {
        const bool branch_taken_0x20e550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E550u;
        // 0x20e554: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e550) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E558u;
label_20e558:
    // 0x20e558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e55c: 0x26625900  addiu       $v0, $s3, 0x5900
    ctx->pc = 0x20e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20e560: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20e560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20e564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e568: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x20e568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x20e56c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x20e56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x20e570: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x20e570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x20e574: 0xc094dcc  jal         func_253730
    ctx->pc = 0x20E574u;
    SET_GPR_U32(ctx, 31, 0x20E57Cu);
    ctx->pc = 0x20E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E574u;
    // 0x20e578: 0x9644003c  lhu         $a0, 0x3C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x20E574u, 0x20E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E57Cu;
label_20e57c:
    // 0x20e57c: 0x100007e0  b           . + 4 + (0x7E0 << 2)
    ctx->pc = 0x20E57Cu;
    {
        const bool branch_taken_0x20e57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E57Cu;
        // 0x20e580: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e57c) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E584u;
    // 0x20e584: 0x0  nop
    ctx->pc = 0x20e584u;
    // NOP
label_20e588:
    // 0x20e588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e58c: 0x26625900  addiu       $v0, $s3, 0x5900
    ctx->pc = 0x20e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20e590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20e590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20e594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e598: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x20e598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x20e59c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x20e59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x20e5a0: 0xc095904  jal         func_256410
    ctx->pc = 0x20E5A0u;
    SET_GPR_U32(ctx, 31, 0x20E5A8u);
    ctx->pc = 0x20E5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E5A0u;
    // 0x20e5a4: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x256410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256410u, 0x20E5A0u, 0x20E5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E5A8u;
label_20e5a8:
    // 0x20e5a8: 0x100007d5  b           . + 4 + (0x7D5 << 2)
    ctx->pc = 0x20E5A8u;
    {
        const bool branch_taken_0x20e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5A8u;
        // 0x20e5ac: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5a8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E5B0u;
label_20e5b0:
    // 0x20e5b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e5b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e5b4: 0x26625900  addiu       $v0, $s3, 0x5900
    ctx->pc = 0x20e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20e5b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20e5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e5bc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x20e5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x20e5c0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x20e5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x20e5c4: 0xc09595a  jal         func_256568
    ctx->pc = 0x20E5C4u;
    SET_GPR_U32(ctx, 31, 0x20E5CCu);
    ctx->pc = 0x20E5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E5C4u;
    // 0x20e5c8: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x256568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256568u, 0x20E5C4u, 0x20E5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E5CCu;
label_20e5cc:
    // 0x20e5cc: 0x100007cc  b           . + 4 + (0x7CC << 2)
    ctx->pc = 0x20E5CCu;
    {
        const bool branch_taken_0x20e5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5CCu;
        // 0x20e5d0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5cc) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E5D4u;
    // 0x20e5d4: 0x0  nop
    ctx->pc = 0x20e5d4u;
    // NOP
label_20e5d8:
    // 0x20e5d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e5dc: 0x26725900  addiu       $s2, $s3, 0x5900
    ctx->pc = 0x20e5dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20e5e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e5e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20e5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e5e8: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x20e5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x20e5ec: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x20e5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x20e5f0: 0xc083878  jal         func_20E1E0
    ctx->pc = 0x20E5F0u;
    SET_GPR_U32(ctx, 31, 0x20E5F8u);
    ctx->pc = 0x20E5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E5F0u;
    // 0x20e5f4: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E1E0u, 0x20E5F0u, 0x20E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E5F8u;
label_20e5f8:
    // 0x20e5f8: 0x504007c1  beql        $v0, $zero, . + 4 + (0x7C1 << 2)
    ctx->pc = 0x20E5F8u;
    {
        const bool branch_taken_0x20e5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e5f8) {
            ctx->pc = 0x20E5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E5F8u;
            // 0x20e5fc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E600u;
    // 0x20e600: 0xc095970  jal         func_2565C0
    ctx->pc = 0x20E600u;
    SET_GPR_U32(ctx, 31, 0x20E608u);
    ctx->pc = 0x20E604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E600u;
    // 0x20e604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2565C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2565C0u, 0x20E600u, 0x20E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E608u;
label_20e608:
    // 0x20e608: 0x100007bd  b           . + 4 + (0x7BD << 2)
    ctx->pc = 0x20E608u;
    {
        const bool branch_taken_0x20e608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E608u;
        // 0x20e60c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e608) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E610u;
label_20e610:
    // 0x20e610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e614: 0x26625900  addiu       $v0, $s3, 0x5900
    ctx->pc = 0x20e614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20e618: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20e618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e61c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20e61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e620: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x20e620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x20e624: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x20e624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x20e628: 0xc095940  jal         func_256500
    ctx->pc = 0x20E628u;
    SET_GPR_U32(ctx, 31, 0x20E630u);
    ctx->pc = 0x20E62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E628u;
    // 0x20e62c: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x256500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256500u, 0x20E628u, 0x20E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E630u;
label_20e630:
    // 0x20e630: 0x100007b3  b           . + 4 + (0x7B3 << 2)
    ctx->pc = 0x20E630u;
    {
        const bool branch_taken_0x20e630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E630u;
        // 0x20e634: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e630) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E638u;
label_20e638:
    // 0x20e638: 0x9623003c  lhu         $v1, 0x3C($s1)
    ctx->pc = 0x20e638u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x20e63c: 0x24c6a540  addiu       $a2, $a2, -0x5AC0
    ctx->pc = 0x20e63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944064));
    // 0x20e640: 0x8e240894  lw          $a0, 0x894($s1)
    ctx->pc = 0x20e640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x20e644: 0x103a02  srl         $a3, $s0, 8
    ctx->pc = 0x20e644u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x20e648: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20e648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20e64c: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x20e64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x20e650: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20e650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e654: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x20e654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x20e658: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20e65c: 0x8c8a001c  lw          $t2, 0x1C($a0)
    ctx->pc = 0x20e65cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x20e660: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x20e660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20e664: 0x14e50006  bne         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E664u;
    {
        const bool branch_taken_0x20e664 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x20E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E664u;
        // 0x20e668: 0x26645900  addiu       $a0, $s3, 0x5900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e664) {
            ctx->pc = 0x20E680u;
            goto label_20e680;
        }
    }
    ctx->pc = 0x20E66Cu;
    // 0x20e66c: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20e66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e670: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e674: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x20E674u;
    {
        const bool branch_taken_0x20e674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E674u;
        // 0x20e678: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e674) {
            ctx->pc = 0x20E75Cu;
            goto label_20e75c;
        }
    }
    ctx->pc = 0x20E67Cu;
    // 0x20e67c: 0x0  nop
    ctx->pc = 0x20e67cu;
    // NOP
label_20e680:
    // 0x20e680: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x20e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x20e684: 0x14e20006  bne         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E684u;
    {
        const bool branch_taken_0x20e684 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E684u;
        // 0x20e688: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e684) {
            ctx->pc = 0x20E6A0u;
            goto label_20e6a0;
        }
    }
    ctx->pc = 0x20E68Cu;
    // 0x20e68c: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x20e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e690: 0xc4c10030  lwc1        $f1, 0x30($a2)
    ctx->pc = 0x20e690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e694: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x20E694u;
    {
        const bool branch_taken_0x20e694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E694u;
        // 0x20e698: 0xc4c20034  lwc1        $f2, 0x34($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e694) {
            ctx->pc = 0x20E75Cu;
            goto label_20e75c;
        }
    }
    ctx->pc = 0x20E69Cu;
    // 0x20e69c: 0x0  nop
    ctx->pc = 0x20e69cu;
    // NOP
label_20e6a0:
    // 0x20e6a0: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E6A0u;
    {
        const bool branch_taken_0x20e6a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6A0u;
        // 0x20e6a4: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6a0) {
            ctx->pc = 0x20E6B8u;
            goto label_20e6b8;
        }
    }
    ctx->pc = 0x20E6A8u;
    // 0x20e6a8: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20e6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e6ac: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20e6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e6b0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x20E6B0u;
    {
        const bool branch_taken_0x20e6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6B0u;
        // 0x20e6b4: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6b0) {
            ctx->pc = 0x20E75Cu;
            goto label_20e75c;
        }
    }
    ctx->pc = 0x20E6B8u;
label_20e6b8:
    // 0x20e6b8: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E6B8u;
    {
        const bool branch_taken_0x20e6b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6B8u;
        // 0x20e6bc: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6b8) {
            ctx->pc = 0x20E6D0u;
            goto label_20e6d0;
        }
    }
    ctx->pc = 0x20E6C0u;
    // 0x20e6c0: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x20e6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e6c4: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x20e6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e6c8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x20E6C8u;
    {
        const bool branch_taken_0x20e6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6C8u;
        // 0x20e6cc: 0xc4c20014  lwc1        $f2, 0x14($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6c8) {
            ctx->pc = 0x20E75Cu;
            goto label_20e75c;
        }
    }
    ctx->pc = 0x20E6D0u;
label_20e6d0:
    // 0x20e6d0: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E6D0u;
    {
        const bool branch_taken_0x20e6d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6D0u;
        // 0x20e6d4: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6d0) {
            ctx->pc = 0x20E6E8u;
            goto label_20e6e8;
        }
    }
    ctx->pc = 0x20E6D8u;
    // 0x20e6d8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x20e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e6dc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x20e6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e6e0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20E6E0u;
    {
        const bool branch_taken_0x20e6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6E0u;
        // 0x20e6e4: 0xc4c20004  lwc1        $f2, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6e0) {
            ctx->pc = 0x20E75Cu;
            goto label_20e75c;
        }
    }
    ctx->pc = 0x20E6E8u;
label_20e6e8:
    // 0x20e6e8: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E6E8u;
    {
        const bool branch_taken_0x20e6e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6E8u;
        // 0x20e6ec: 0x24020075  addiu       $v0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6e8) {
            ctx->pc = 0x20E700u;
            goto label_20e700;
        }
    }
    ctx->pc = 0x20E6F0u;
    // 0x20e6f0: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20e6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e6f4: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20e6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e6f8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20E6F8u;
    {
        const bool branch_taken_0x20e6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6F8u;
        // 0x20e6fc: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6f8) {
            ctx->pc = 0x20E75Cu;
            goto label_20e75c;
        }
    }
    ctx->pc = 0x20E700u;
label_20e700:
    // 0x20e700: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E700u;
    {
        const bool branch_taken_0x20e700 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E700u;
        // 0x20e704: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e700) {
            ctx->pc = 0x20E718u;
            goto label_20e718;
        }
    }
    ctx->pc = 0x20E708u;
    // 0x20e708: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20e708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e70c: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e710: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20E710u;
    {
        const bool branch_taken_0x20e710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E710u;
        // 0x20e714: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e710) {
            ctx->pc = 0x20E75Cu;
            goto label_20e75c;
        }
    }
    ctx->pc = 0x20E718u;
label_20e718:
    // 0x20e718: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E718u;
    {
        const bool branch_taken_0x20e718 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E718u;
        // 0x20e71c: 0x24020073  addiu       $v0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e718) {
            ctx->pc = 0x20E730u;
            goto label_20e730;
        }
    }
    ctx->pc = 0x20E720u;
    // 0x20e720: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20e720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e724: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e728: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20E728u;
    {
        const bool branch_taken_0x20e728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E728u;
        // 0x20e72c: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e728) {
            ctx->pc = 0x20E75Cu;
            goto label_20e75c;
        }
    }
    ctx->pc = 0x20E730u;
label_20e730:
    // 0x20e730: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E730u;
    {
        const bool branch_taken_0x20e730 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E730u;
        // 0x20e734: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e730) {
            ctx->pc = 0x20E748u;
            goto label_20e748;
        }
    }
    ctx->pc = 0x20E738u;
    // 0x20e738: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x20e738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e73c: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x20e73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e740: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20E740u;
    {
        const bool branch_taken_0x20e740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E740u;
        // 0x20e744: 0xc4c20044  lwc1        $f2, 0x44($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e740) {
            ctx->pc = 0x20E75Cu;
            goto label_20e75c;
        }
    }
    ctx->pc = 0x20E748u;
label_20e748:
    // 0x20e748: 0x14e20009  bne         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20E748u;
    {
        const bool branch_taken_0x20e748 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E748u;
        // 0x20e74c: 0x2ce2006c  sltiu       $v0, $a3, 0x6C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)108) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e748) {
            ctx->pc = 0x20E770u;
            goto label_20e770;
        }
    }
    ctx->pc = 0x20E750u;
    // 0x20e750: 0xc4c00058  lwc1        $f0, 0x58($a2)
    ctx->pc = 0x20e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e754: 0xc4c10050  lwc1        $f1, 0x50($a2)
    ctx->pc = 0x20e754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e758: 0xc4c20054  lwc1        $f2, 0x54($a2)
    ctx->pc = 0x20e758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20e75c:
    // 0x20e75c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x20e75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x20e760: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x20e760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x20e764: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20E764u;
    {
        const bool branch_taken_0x20e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E764u;
        // 0x20e768: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e764) {
            ctx->pc = 0x20E7A0u;
            goto label_20e7a0;
        }
    }
    ctx->pc = 0x20E76Cu;
    // 0x20e76c: 0x0  nop
    ctx->pc = 0x20e76cu;
    // NOP
label_20e770:
    // 0x20e770: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20E770u;
    {
        const bool branch_taken_0x20e770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E770u;
        // 0x20e774: 0x3402802b  ori         $v0, $zero, 0x802B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32811);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e770) {
            ctx->pc = 0x20E7A4u;
            goto label_20e7a4;
        }
    }
    ctx->pc = 0x20E778u;
    // 0x20e778: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x20e778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x20e77c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20e780: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20e784: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x20e784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x20e788: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x20e788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e78c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x20e78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x20e790: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x20e790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e794: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x20e794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x20e798: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x20e798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e79c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x20e79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_20e7a0:
    // 0x20e7a0: 0x3402802b  ori         $v0, $zero, 0x802B
    ctx->pc = 0x20e7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32811);
label_20e7a4:
    // 0x20e7a4: 0x55220008  bnel        $t1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20E7A4u;
    {
        const bool branch_taken_0x20e7a4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x20e7a4) {
            ctx->pc = 0x20E7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E7A4u;
            // 0x20e7a8: 0x9624003c  lhu         $a0, 0x3C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E7C8u;
            goto label_20e7c8;
        }
    }
    ctx->pc = 0x20E7ACu;
    // 0x20e7ac: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x20e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x20e7b0: 0x1462007f  bne         $v1, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x20E7B0u;
    {
        const bool branch_taken_0x20e7b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7B0u;
        // 0x20e7b4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7b0) {
            ctx->pc = 0x20E9B0u;
            goto label_20e9b0;
        }
    }
    ctx->pc = 0x20E7B8u;
    // 0x20e7b8: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x20e7b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x20e7bc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x20E7BCu;
    {
        const bool branch_taken_0x20e7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7BCu;
        // 0x20e7c0: 0x73040  sll         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7bc) {
            ctx->pc = 0x20E998u;
            goto label_20e998;
        }
    }
    ctx->pc = 0x20E7C4u;
    // 0x20e7c4: 0x0  nop
    ctx->pc = 0x20e7c4u;
    // NOP
label_20e7c8:
    // 0x20e7c8: 0x26655900  addiu       $a1, $s3, 0x5900
    ctx->pc = 0x20e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20e7cc: 0xc094dcc  jal         func_253730
    ctx->pc = 0x20E7CCu;
    SET_GPR_U32(ctx, 31, 0x20E7D4u);
    ctx->pc = 0x20E7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E7CCu;
    // 0x20e7d0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x20E7CCu, 0x20E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7D4u;
label_20e7d4:
    // 0x20e7d4: 0x1000074a  b           . + 4 + (0x74A << 2)
    ctx->pc = 0x20E7D4u;
    {
        const bool branch_taken_0x20e7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7D4u;
        // 0x20e7d8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7d4) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E7DCu;
    // 0x20e7dc: 0x0  nop
    ctx->pc = 0x20e7dcu;
    // NOP
label_20e7e0:
    // 0x20e7e0: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x20e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x20e7e4: 0x320a00ff  andi        $t2, $s0, 0xFF
    ctx->pc = 0x20e7e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x20e7e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20E7E8u;
    {
        const bool branch_taken_0x20e7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7E8u;
        // 0x20e7ec: 0x104202  srl         $t0, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7e8) {
            ctx->pc = 0x20E810u;
            goto label_20e810;
        }
    }
    ctx->pc = 0x20E7F0u;
    // 0x20e7f0: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x20e7f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x20e7f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E7F4u;
    {
        const bool branch_taken_0x20e7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7F4u;
        // 0x20e7f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7f4) {
            ctx->pc = 0x20E814u;
            goto label_20e814;
        }
    }
    ctx->pc = 0x20E7FCu;
    // 0x20e7fc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x20e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x20e800: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E800u;
    {
        const bool branch_taken_0x20e800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20e800) {
            ctx->pc = 0x20E804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E800u;
            // 0x20e804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E814u;
            goto label_20e814;
        }
    }
    ctx->pc = 0x20E808u;
    // 0x20e808: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20E808u;
    {
        const bool branch_taken_0x20e808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E808u;
        // 0x20e80c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e808) {
            ctx->pc = 0x20E814u;
            goto label_20e814;
        }
    }
    ctx->pc = 0x20E810u;
label_20e810:
    // 0x20e810: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e814:
    // 0x20e814: 0x1440073a  bnez        $v0, . + 4 + (0x73A << 2)
    ctx->pc = 0x20E814u;
    {
        const bool branch_taken_0x20e814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E814u;
        // 0x20e818: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e814) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E81Cu;
    // 0x20e81c: 0x9643003c  lhu         $v1, 0x3C($s2)
    ctx->pc = 0x20e81cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x20e820: 0x24c6a540  addiu       $a2, $a2, -0x5AC0
    ctx->pc = 0x20e820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944064));
    // 0x20e824: 0x8e440894  lw          $a0, 0x894($s2)
    ctx->pc = 0x20e824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x20e828: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x20e828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x20e82c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20e830: 0x26675900  addiu       $a3, $s3, 0x5900
    ctx->pc = 0x20e830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20e834: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20e834u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e838: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x20e838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x20e83c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20e840: 0x15050005  bne         $t0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E840u;
    {
        const bool branch_taken_0x20e840 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x20E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E840u;
        // 0x20e844: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e840) {
            ctx->pc = 0x20E858u;
            goto label_20e858;
        }
    }
    ctx->pc = 0x20E848u;
    // 0x20e848: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e84c: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e850: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x20E850u;
    {
        const bool branch_taken_0x20e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E850u;
        // 0x20e854: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e850) {
            ctx->pc = 0x20E934u;
            goto label_20e934;
        }
    }
    ctx->pc = 0x20E858u;
label_20e858:
    // 0x20e858: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x20e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x20e85c: 0x15020006  bne         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E85Cu;
    {
        const bool branch_taken_0x20e85c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E85Cu;
        // 0x20e860: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e85c) {
            ctx->pc = 0x20E878u;
            goto label_20e878;
        }
    }
    ctx->pc = 0x20E864u;
    // 0x20e864: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x20e864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e868: 0xc4c10030  lwc1        $f1, 0x30($a2)
    ctx->pc = 0x20e868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e86c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x20E86Cu;
    {
        const bool branch_taken_0x20e86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E86Cu;
        // 0x20e870: 0xc4c20034  lwc1        $f2, 0x34($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e86c) {
            ctx->pc = 0x20E934u;
            goto label_20e934;
        }
    }
    ctx->pc = 0x20E874u;
    // 0x20e874: 0x0  nop
    ctx->pc = 0x20e874u;
    // NOP
label_20e878:
    // 0x20e878: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E878u;
    {
        const bool branch_taken_0x20e878 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E878u;
        // 0x20e87c: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e878) {
            ctx->pc = 0x20E890u;
            goto label_20e890;
        }
    }
    ctx->pc = 0x20E880u;
    // 0x20e880: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e884: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e888: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x20E888u;
    {
        const bool branch_taken_0x20e888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E888u;
        // 0x20e88c: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e888) {
            ctx->pc = 0x20E934u;
            goto label_20e934;
        }
    }
    ctx->pc = 0x20E890u;
label_20e890:
    // 0x20e890: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E890u;
    {
        const bool branch_taken_0x20e890 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E890u;
        // 0x20e894: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e890) {
            ctx->pc = 0x20E8A8u;
            goto label_20e8a8;
        }
    }
    ctx->pc = 0x20E898u;
    // 0x20e898: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x20e898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e89c: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x20e89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e8a0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x20E8A0u;
    {
        const bool branch_taken_0x20e8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8A0u;
        // 0x20e8a4: 0xc4c20014  lwc1        $f2, 0x14($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8a0) {
            ctx->pc = 0x20E934u;
            goto label_20e934;
        }
    }
    ctx->pc = 0x20E8A8u;
label_20e8a8:
    // 0x20e8a8: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E8A8u;
    {
        const bool branch_taken_0x20e8a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8A8u;
        // 0x20e8ac: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8a8) {
            ctx->pc = 0x20E8C0u;
            goto label_20e8c0;
        }
    }
    ctx->pc = 0x20E8B0u;
    // 0x20e8b0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x20e8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e8b4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x20e8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e8b8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20E8B8u;
    {
        const bool branch_taken_0x20e8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8B8u;
        // 0x20e8bc: 0xc4c20004  lwc1        $f2, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8b8) {
            ctx->pc = 0x20E934u;
            goto label_20e934;
        }
    }
    ctx->pc = 0x20E8C0u;
label_20e8c0:
    // 0x20e8c0: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E8C0u;
    {
        const bool branch_taken_0x20e8c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8C0u;
        // 0x20e8c4: 0x24020075  addiu       $v0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8c0) {
            ctx->pc = 0x20E8D8u;
            goto label_20e8d8;
        }
    }
    ctx->pc = 0x20E8C8u;
    // 0x20e8c8: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20e8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e8cc: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20e8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e8d0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20E8D0u;
    {
        const bool branch_taken_0x20e8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8D0u;
        // 0x20e8d4: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8d0) {
            ctx->pc = 0x20E934u;
            goto label_20e934;
        }
    }
    ctx->pc = 0x20E8D8u;
label_20e8d8:
    // 0x20e8d8: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E8D8u;
    {
        const bool branch_taken_0x20e8d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8D8u;
        // 0x20e8dc: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8d8) {
            ctx->pc = 0x20E8F0u;
            goto label_20e8f0;
        }
    }
    ctx->pc = 0x20E8E0u;
    // 0x20e8e0: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20e8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e8e4: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20e8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e8e8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20E8E8u;
    {
        const bool branch_taken_0x20e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8E8u;
        // 0x20e8ec: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8e8) {
            ctx->pc = 0x20E934u;
            goto label_20e934;
        }
    }
    ctx->pc = 0x20E8F0u;
label_20e8f0:
    // 0x20e8f0: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E8F0u;
    {
        const bool branch_taken_0x20e8f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8F0u;
        // 0x20e8f4: 0x24020073  addiu       $v0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8f0) {
            ctx->pc = 0x20E908u;
            goto label_20e908;
        }
    }
    ctx->pc = 0x20E8F8u;
    // 0x20e8f8: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20e8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e8fc: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20e8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e900: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20E900u;
    {
        const bool branch_taken_0x20e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E900u;
        // 0x20e904: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e900) {
            ctx->pc = 0x20E934u;
            goto label_20e934;
        }
    }
    ctx->pc = 0x20E908u;
label_20e908:
    // 0x20e908: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E908u;
    {
        const bool branch_taken_0x20e908 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E908u;
        // 0x20e90c: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e908) {
            ctx->pc = 0x20E920u;
            goto label_20e920;
        }
    }
    ctx->pc = 0x20E910u;
    // 0x20e910: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x20e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e914: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x20e914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e918: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20E918u;
    {
        const bool branch_taken_0x20e918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E918u;
        // 0x20e91c: 0xc4c20044  lwc1        $f2, 0x44($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e918) {
            ctx->pc = 0x20E934u;
            goto label_20e934;
        }
    }
    ctx->pc = 0x20E920u;
label_20e920:
    // 0x20e920: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20E920u;
    {
        const bool branch_taken_0x20e920 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E920u;
        // 0x20e924: 0x2d02006c  sltiu       $v0, $t0, 0x6C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)108) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e920) {
            ctx->pc = 0x20E948u;
            goto label_20e948;
        }
    }
    ctx->pc = 0x20E928u;
    // 0x20e928: 0xc4c00058  lwc1        $f0, 0x58($a2)
    ctx->pc = 0x20e928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e92c: 0xc4c10050  lwc1        $f1, 0x50($a2)
    ctx->pc = 0x20e92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e930: 0xc4c20054  lwc1        $f2, 0x54($a2)
    ctx->pc = 0x20e930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20e934:
    // 0x20e934: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x20e934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x20e938: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x20e938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x20e93c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20E93Cu;
    {
        const bool branch_taken_0x20e93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E93Cu;
        // 0x20e940: 0xe4e20004  swc1        $f2, 0x4($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e93c) {
            ctx->pc = 0x20E978u;
            goto label_20e978;
        }
    }
    ctx->pc = 0x20E944u;
    // 0x20e944: 0x0  nop
    ctx->pc = 0x20e944u;
    // NOP
label_20e948:
    // 0x20e948: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20E948u;
    {
        const bool branch_taken_0x20e948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E948u;
        // 0x20e94c: 0x3402802c  ori         $v0, $zero, 0x802C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32812);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e948) {
            ctx->pc = 0x20E97Cu;
            goto label_20e97c;
        }
    }
    ctx->pc = 0x20E950u;
    // 0x20e950: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x20e950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x20e954: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x20e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20e958: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20e95c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e960: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x20e960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e964: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x20e964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x20e968: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x20e968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e96c: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x20e96cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x20e970: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x20e970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e974: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x20e974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_20e978:
    // 0x20e978: 0x3402802c  ori         $v0, $zero, 0x802C
    ctx->pc = 0x20e978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32812);
label_20e97c:
    // 0x20e97c: 0x55220012  bnel        $t1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20E97Cu;
    {
        const bool branch_taken_0x20e97c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x20e97c) {
            ctx->pc = 0x20E980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E97Cu;
            // 0x20e980: 0x9644003c  lhu         $a0, 0x3C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E9C8u;
            goto label_20e9c8;
        }
    }
    ctx->pc = 0x20E984u;
    // 0x20e984: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x20e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x20e988: 0x15420009  bne         $t2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20E988u;
    {
        const bool branch_taken_0x20e988 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E988u;
        // 0x20e98c: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e988) {
            ctx->pc = 0x20E9B0u;
            goto label_20e9b0;
        }
    }
    ctx->pc = 0x20E990u;
    // 0x20e990: 0x9642003c  lhu         $v0, 0x3C($s2)
    ctx->pc = 0x20e990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x20e994: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x20e994u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_20e998:
    // 0x20e998: 0x26655900  addiu       $a1, $s3, 0x5900
    ctx->pc = 0x20e998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20e99c: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x20e99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x20e9a0: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x20E9A0u;
    SET_GPR_U32(ctx, 31, 0x20E9A8u);
    ctx->pc = 0x20E9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E9A0u;
    // 0x20e9a4: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x20E9A0u, 0x20E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E9A8u;
label_20e9a8:
    // 0x20e9a8: 0x100006d5  b           . + 4 + (0x6D5 << 2)
    ctx->pc = 0x20E9A8u;
    {
        const bool branch_taken_0x20e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9A8u;
        // 0x20e9ac: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9a8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E9B0u;
label_20e9b0:
    // 0x20e9b0: 0x26655900  addiu       $a1, $s3, 0x5900
    ctx->pc = 0x20e9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20e9b4: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x20E9B4u;
    SET_GPR_U32(ctx, 31, 0x20E9BCu);
    ctx->pc = 0x20E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E9B4u;
    // 0x20e9b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x20E9B4u, 0x20E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E9BCu;
label_20e9bc:
    // 0x20e9bc: 0x100006d0  b           . + 4 + (0x6D0 << 2)
    ctx->pc = 0x20E9BCu;
    {
        const bool branch_taken_0x20e9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9BCu;
        // 0x20e9c0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9bc) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E9C4u;
    // 0x20e9c4: 0x0  nop
    ctx->pc = 0x20e9c4u;
    // NOP
label_20e9c8:
    // 0x20e9c8: 0x26655900  addiu       $a1, $s3, 0x5900
    ctx->pc = 0x20e9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20e9cc: 0xc094dcc  jal         func_253730
    ctx->pc = 0x20E9CCu;
    SET_GPR_U32(ctx, 31, 0x20E9D4u);
    ctx->pc = 0x20E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E9CCu;
    // 0x20e9d0: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x20E9CCu, 0x20E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E9D4u;
label_20e9d4:
    // 0x20e9d4: 0x100006ca  b           . + 4 + (0x6CA << 2)
    ctx->pc = 0x20E9D4u;
    {
        const bool branch_taken_0x20e9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9D4u;
        // 0x20e9d8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9d4) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20E9DCu;
    // 0x20e9dc: 0x0  nop
    ctx->pc = 0x20e9dcu;
    // NOP
label_20e9e0:
    // 0x20e9e0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x20e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x20e9e4: 0x101a02  srl         $v1, $s0, 8
    ctx->pc = 0x20e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x20e9e8: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x20e9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x20e9ec: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x20e9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20e9f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x20e9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20e9f4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x20e9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20e9f8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x20e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20e9fc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20e9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20ea00: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x20ea00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20ea04: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x20ea04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20ea08: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x20ea08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x20ea0c: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x20ea0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x20ea10: 0xc084784  jal         func_211E10
    ctx->pc = 0x20EA10u;
    SET_GPR_U32(ctx, 31, 0x20EA18u);
    ctx->pc = 0x20EA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA10u;
    // 0x20ea14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x20EA10u, 0x20EA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA18u;
label_20ea18:
    // 0x20ea18: 0x26625900  addiu       $v0, $s3, 0x5900
    ctx->pc = 0x20ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20ea1c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x20ea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ea20: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x20ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ea24: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x20ea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ea28: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x20ea28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x20ea2c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x20ea2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x20ea30: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x20ea30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_20ea34:
    // 0x20ea34: 0x26625900  addiu       $v0, $s3, 0x5900
    ctx->pc = 0x20ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20ea38: 0x100006b0  b           . + 4 + (0x6B0 << 2)
    ctx->pc = 0x20EA38u;
    {
        const bool branch_taken_0x20ea38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA38u;
        // 0x20ea3c: 0xe4550010  swc1        $f21, 0x10($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea38) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20EA40u;
label_20ea40:
    // 0x20ea40: 0x26625900  addiu       $v0, $s3, 0x5900
    ctx->pc = 0x20ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20ea44: 0x100006ad  b           . + 4 + (0x6AD << 2)
    ctx->pc = 0x20EA44u;
    {
        const bool branch_taken_0x20ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA44u;
        // 0x20ea48: 0xe4550014  swc1        $f21, 0x14($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea44) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20EA4Cu;
    // 0x20ea4c: 0x0  nop
    ctx->pc = 0x20ea4cu;
    // NOP
label_20ea50:
    // 0x20ea50: 0x26625900  addiu       $v0, $s3, 0x5900
    ctx->pc = 0x20ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20ea54: 0x100006a9  b           . + 4 + (0x6A9 << 2)
    ctx->pc = 0x20EA54u;
    {
        const bool branch_taken_0x20ea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA54u;
        // 0x20ea58: 0xe4550018  swc1        $f21, 0x18($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea54) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20EA5Cu;
    // 0x20ea5c: 0x0  nop
    ctx->pc = 0x20ea5cu;
    // NOP
label_20ea60:
    // 0x20ea60: 0xa1403  sra         $v0, $t2, 16
    ctx->pc = 0x20ea60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 16));
    // 0x20ea64: 0xc78183e8  lwc1        $f1, -0x7C18($gp)
    ctx->pc = 0x20ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ea68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ea68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ea6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20ea6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20ea70: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x20ea74: 0xc78283ec  lwc1        $f2, -0x7C14($gp)
    ctx->pc = 0x20ea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ea78: 0x24424560  addiu       $v0, $v0, 0x4560
    ctx->pc = 0x20ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17760));
    // 0x20ea7c: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x20ea7cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x464568u));
    // 0x20ea80: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x20ea80u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x464560u));
    // 0x20ea84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20ea84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x20ea88: 0xffa40048  sd          $a0, 0x48($sp)
    ctx->pc = 0x20ea88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 4));
    // 0x20ea8c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x20EA8Cu;
    {
        const bool branch_taken_0x20ea8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA8Cu;
        // 0x20ea90: 0xffa30040  sd          $v1, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea8c) {
            ctx->pc = 0x20EAECu;
            goto label_20eaec;
        }
    }
    ctx->pc = 0x20EA94u;
    // 0x20ea94: 0x0  nop
    ctx->pc = 0x20ea94u;
    // NOP
label_20ea98:
    // 0x20ea98: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x20ea98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x20ea9c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x20ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x20eaa0: 0xc78183f0  lwc1        $f1, -0x7C10($gp)
    ctx->pc = 0x20eaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20eaa4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20EAA4u;
    {
        const bool branch_taken_0x20eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAA4u;
        // 0x20eaa8: 0x24634570  addiu       $v1, $v1, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eaa4) {
            ctx->pc = 0x20EAC0u;
            goto label_20eac0;
        }
    }
    ctx->pc = 0x20EAACu;
    // 0x20eaac: 0x0  nop
    ctx->pc = 0x20eaacu;
    // NOP
label_20eab0:
    // 0x20eab0: 0x9622007a  lhu         $v0, 0x7A($s1)
    ctx->pc = 0x20eab0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x20eab4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x20eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x20eab8: 0xc78183f4  lwc1        $f1, -0x7C0C($gp)
    ctx->pc = 0x20eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20eabc: 0x24634580  addiu       $v1, $v1, 0x4580
    ctx->pc = 0x20eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17792));
label_20eac0:
    // 0x20eac0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x20eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20eac4: 0xc78283f8  lwc1        $f2, -0x7C08($gp)
    ctx->pc = 0x20eac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20eac8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x20eacc: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x20eaccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20ead0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x20ead0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20ead4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x20ead4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ead8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ead8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eadc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20eadcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20eae0: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x20eae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x20eae4: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x20eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x20eae8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20eae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_20eaec:
    // 0x20eaec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20eaecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20eaf0: 0x0  nop
    ctx->pc = 0x20eaf0u;
    // NOP
    // 0x20eaf4: 0x0  nop
    ctx->pc = 0x20eaf4u;
    // NOP
    // 0x20eaf8: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x20eaf8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[2];
    // 0x20eafc: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x20eafcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20eb00: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20EB00u;
    {
        const bool branch_taken_0x20eb00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20eb00) {
            ctx->pc = 0x20EB18u;
            goto label_20eb18;
        }
    }
    ctx->pc = 0x20EB08u;
    // 0x20eb08: 0xc78083fc  lwc1        $f0, -0x7C04($gp)
    ctx->pc = 0x20eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20eb0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20EB0Cu;
    {
        const bool branch_taken_0x20eb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB0Cu;
        // 0x20eb10: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb0c) {
            ctx->pc = 0x20EB30u;
            goto label_20eb30;
        }
    }
    ctx->pc = 0x20EB14u;
    // 0x20eb14: 0x0  nop
    ctx->pc = 0x20eb14u;
    // NOP
label_20eb18:
    // 0x20eb18: 0xc7808400  lwc1        $f0, -0x7C00($gp)
    ctx->pc = 0x20eb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20eb1c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x20eb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20eb20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20EB20u;
    {
        const bool branch_taken_0x20eb20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20eb20) {
            ctx->pc = 0x20EB30u;
            goto label_20eb30;
        }
    }
    ctx->pc = 0x20EB28u;
    // 0x20eb28: 0xc7808404  lwc1        $f0, -0x7BFC($gp)
    ctx->pc = 0x20eb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20eb2c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x20eb2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_20eb30:
    // 0x20eb30: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x20EB30u;
    SET_GPR_U32(ctx, 31, 0x20EB38u);
    ctx->pc = 0x20EB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB30u;
    // 0x20eb34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x20EB30u, 0x20EB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB38u;
label_20eb38:
    // 0x20eb38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20eb3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20eb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb40: 0xc08491e  jal         func_212478
    ctx->pc = 0x20EB40u;
    SET_GPR_U32(ctx, 31, 0x20EB48u);
    ctx->pc = 0x20EB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB40u;
    // 0x20eb44: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x20EB40u, 0x20EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB48u;
label_20eb48:
    // 0x20eb48: 0x26625900  addiu       $v0, $s3, 0x5900
    ctx->pc = 0x20eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20eb4c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x20eb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20eb50: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x20eb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20eb54: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x20eb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x20eb58: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x20eb58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x20eb5c: 0x10000667  b           . + 4 + (0x667 << 2)
    ctx->pc = 0x20EB5Cu;
    {
        const bool branch_taken_0x20eb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB5Cu;
        // 0x20eb60: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb5c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20EB64u;
    // 0x20eb64: 0x0  nop
    ctx->pc = 0x20eb64u;
    // NOP
label_20eb68:
    // 0x20eb68: 0x26645900  addiu       $a0, $s3, 0x5900
    ctx->pc = 0x20eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20eb6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20eb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eb70: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20EB70u;
    {
        const bool branch_taken_0x20eb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB70u;
        // 0x20eb74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb70) {
            ctx->pc = 0x20EBC4u;
            goto label_20ebc4;
        }
    }
    ctx->pc = 0x20EB78u;
label_20eb78:
    // 0x20eb78: 0x26645900  addiu       $a0, $s3, 0x5900
    ctx->pc = 0x20eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20eb7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eb80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20EB80u;
    {
        const bool branch_taken_0x20eb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB80u;
        // 0x20eb84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb80) {
            ctx->pc = 0x20EBC4u;
            goto label_20ebc4;
        }
    }
    ctx->pc = 0x20EB88u;
label_20eb88:
    // 0x20eb88: 0x26645900  addiu       $a0, $s3, 0x5900
    ctx->pc = 0x20eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20eb8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eb90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20EB90u;
    {
        const bool branch_taken_0x20eb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB90u;
        // 0x20eb94: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb90) {
            ctx->pc = 0x20EBC4u;
            goto label_20ebc4;
        }
    }
    ctx->pc = 0x20EB98u;
label_20eb98:
    // 0x20eb98: 0x26645900  addiu       $a0, $s3, 0x5900
    ctx->pc = 0x20eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20eb9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20eb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eba0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20EBA0u;
    {
        const bool branch_taken_0x20eba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBA0u;
        // 0x20eba4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eba0) {
            ctx->pc = 0x20EBC4u;
            goto label_20ebc4;
        }
    }
    ctx->pc = 0x20EBA8u;
label_20eba8:
    // 0x20eba8: 0x26645900  addiu       $a0, $s3, 0x5900
    ctx->pc = 0x20eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20ebac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ebb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20EBB0u;
    {
        const bool branch_taken_0x20ebb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBB0u;
        // 0x20ebb4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ebb0) {
            ctx->pc = 0x20EBC4u;
            goto label_20ebc4;
        }
    }
    ctx->pc = 0x20EBB8u;
label_20ebb8:
    // 0x20ebb8: 0x26645900  addiu       $a0, $s3, 0x5900
    ctx->pc = 0x20ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20ebbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ebc0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x20ebc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20ebc4:
    // 0x20ebc4: 0xc08f4d4  jal         func_23D350
    ctx->pc = 0x20EBC4u;
    SET_GPR_U32(ctx, 31, 0x20EBCCu);
    ctx->pc = 0x20EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBC4u;
    // 0x20ebc8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D350u, 0x20EBC4u, 0x20EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EBCCu;
label_20ebcc:
    // 0x20ebcc: 0x1000064c  b           . + 4 + (0x64C << 2)
    ctx->pc = 0x20EBCCu;
    {
        const bool branch_taken_0x20ebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBCCu;
        // 0x20ebd0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ebcc) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20EBD4u;
    // 0x20ebd4: 0x0  nop
    ctx->pc = 0x20ebd4u;
    // NOP
label_20ebd8:
    // 0x20ebd8: 0x9623003c  lhu         $v1, 0x3C($s1)
    ctx->pc = 0x20ebd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x20ebdc: 0x24c6a540  addiu       $a2, $a2, -0x5AC0
    ctx->pc = 0x20ebdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944064));
    // 0x20ebe0: 0x8e240894  lw          $a0, 0x894($s1)
    ctx->pc = 0x20ebe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x20ebe4: 0x103a02  srl         $a3, $s0, 8
    ctx->pc = 0x20ebe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x20ebe8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20ebec: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x20ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x20ebf0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ebf4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x20ebf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x20ebf8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20ebfc: 0x8c88001c  lw          $t0, 0x1C($a0)
    ctx->pc = 0x20ebfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x20ec00: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x20ec00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20ec04: 0x14e50006  bne         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20EC04u;
    {
        const bool branch_taken_0x20ec04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x20EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC04u;
        // 0x20ec08: 0x26645900  addiu       $a0, $s3, 0x5900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec04) {
            ctx->pc = 0x20EC20u;
            goto label_20ec20;
        }
    }
    ctx->pc = 0x20EC0Cu;
    // 0x20ec0c: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ec10: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20ec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ec14: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x20EC14u;
    {
        const bool branch_taken_0x20ec14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC14u;
        // 0x20ec18: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec14) {
            ctx->pc = 0x20ECFCu;
            goto label_20ecfc;
        }
    }
    ctx->pc = 0x20EC1Cu;
    // 0x20ec1c: 0x0  nop
    ctx->pc = 0x20ec1cu;
    // NOP
label_20ec20:
    // 0x20ec20: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x20ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x20ec24: 0x14e20006  bne         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20EC24u;
    {
        const bool branch_taken_0x20ec24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC24u;
        // 0x20ec28: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec24) {
            ctx->pc = 0x20EC40u;
            goto label_20ec40;
        }
    }
    ctx->pc = 0x20EC2Cu;
    // 0x20ec2c: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x20ec2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ec30: 0xc4c10030  lwc1        $f1, 0x30($a2)
    ctx->pc = 0x20ec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ec34: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x20EC34u;
    {
        const bool branch_taken_0x20ec34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC34u;
        // 0x20ec38: 0xc4c20034  lwc1        $f2, 0x34($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec34) {
            ctx->pc = 0x20ECFCu;
            goto label_20ecfc;
        }
    }
    ctx->pc = 0x20EC3Cu;
    // 0x20ec3c: 0x0  nop
    ctx->pc = 0x20ec3cu;
    // NOP
label_20ec40:
    // 0x20ec40: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20EC40u;
    {
        const bool branch_taken_0x20ec40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC40u;
        // 0x20ec44: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec40) {
            ctx->pc = 0x20EC58u;
            goto label_20ec58;
        }
    }
    ctx->pc = 0x20EC48u;
    // 0x20ec48: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20ec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ec4c: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20ec4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ec50: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x20EC50u;
    {
        const bool branch_taken_0x20ec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC50u;
        // 0x20ec54: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec50) {
            ctx->pc = 0x20ECFCu;
            goto label_20ecfc;
        }
    }
    ctx->pc = 0x20EC58u;
label_20ec58:
    // 0x20ec58: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20EC58u;
    {
        const bool branch_taken_0x20ec58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC58u;
        // 0x20ec5c: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec58) {
            ctx->pc = 0x20EC70u;
            goto label_20ec70;
        }
    }
    ctx->pc = 0x20EC60u;
    // 0x20ec60: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x20ec60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ec64: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x20ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ec68: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x20EC68u;
    {
        const bool branch_taken_0x20ec68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC68u;
        // 0x20ec6c: 0xc4c20014  lwc1        $f2, 0x14($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec68) {
            ctx->pc = 0x20ECFCu;
            goto label_20ecfc;
        }
    }
    ctx->pc = 0x20EC70u;
label_20ec70:
    // 0x20ec70: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20EC70u;
    {
        const bool branch_taken_0x20ec70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC70u;
        // 0x20ec74: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec70) {
            ctx->pc = 0x20EC88u;
            goto label_20ec88;
        }
    }
    ctx->pc = 0x20EC78u;
    // 0x20ec78: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x20ec78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ec7c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x20ec7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ec80: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20EC80u;
    {
        const bool branch_taken_0x20ec80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC80u;
        // 0x20ec84: 0xc4c20004  lwc1        $f2, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec80) {
            ctx->pc = 0x20ECFCu;
            goto label_20ecfc;
        }
    }
    ctx->pc = 0x20EC88u;
label_20ec88:
    // 0x20ec88: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20EC88u;
    {
        const bool branch_taken_0x20ec88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC88u;
        // 0x20ec8c: 0x24020075  addiu       $v0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec88) {
            ctx->pc = 0x20ECA0u;
            goto label_20eca0;
        }
    }
    ctx->pc = 0x20EC90u;
    // 0x20ec90: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20ec90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ec94: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20ec94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ec98: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20EC98u;
    {
        const bool branch_taken_0x20ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC98u;
        // 0x20ec9c: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec98) {
            ctx->pc = 0x20ECFCu;
            goto label_20ecfc;
        }
    }
    ctx->pc = 0x20ECA0u;
label_20eca0:
    // 0x20eca0: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20ECA0u;
    {
        const bool branch_taken_0x20eca0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECA0u;
        // 0x20eca4: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eca0) {
            ctx->pc = 0x20ECB8u;
            goto label_20ecb8;
        }
    }
    ctx->pc = 0x20ECA8u;
    // 0x20eca8: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ecac: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ecb0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20ECB0u;
    {
        const bool branch_taken_0x20ecb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECB0u;
        // 0x20ecb4: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ecb0) {
            ctx->pc = 0x20ECFCu;
            goto label_20ecfc;
        }
    }
    ctx->pc = 0x20ECB8u;
label_20ecb8:
    // 0x20ecb8: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20ECB8u;
    {
        const bool branch_taken_0x20ecb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECB8u;
        // 0x20ecbc: 0x24020073  addiu       $v0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ecb8) {
            ctx->pc = 0x20ECD0u;
            goto label_20ecd0;
        }
    }
    ctx->pc = 0x20ECC0u;
    // 0x20ecc0: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x20ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ecc4: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x20ecc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ecc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20ECC8u;
    {
        const bool branch_taken_0x20ecc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECC8u;
        // 0x20eccc: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ecc8) {
            ctx->pc = 0x20ECFCu;
            goto label_20ecfc;
        }
    }
    ctx->pc = 0x20ECD0u;
label_20ecd0:
    // 0x20ecd0: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20ECD0u;
    {
        const bool branch_taken_0x20ecd0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECD0u;
        // 0x20ecd4: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ecd0) {
            ctx->pc = 0x20ECE8u;
            goto label_20ece8;
        }
    }
    ctx->pc = 0x20ECD8u;
    // 0x20ecd8: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x20ecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ecdc: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x20ecdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ece0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20ECE0u;
    {
        const bool branch_taken_0x20ece0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECE0u;
        // 0x20ece4: 0xc4c20044  lwc1        $f2, 0x44($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ece0) {
            ctx->pc = 0x20ECFCu;
            goto label_20ecfc;
        }
    }
    ctx->pc = 0x20ECE8u;
label_20ece8:
    // 0x20ece8: 0x14e20009  bne         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20ECE8u;
    {
        const bool branch_taken_0x20ece8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECE8u;
        // 0x20ecec: 0x2ce2006c  sltiu       $v0, $a3, 0x6C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)108) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ece8) {
            ctx->pc = 0x20ED10u;
            goto label_20ed10;
        }
    }
    ctx->pc = 0x20ECF0u;
    // 0x20ecf0: 0xc4c00058  lwc1        $f0, 0x58($a2)
    ctx->pc = 0x20ecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ecf4: 0xc4c10050  lwc1        $f1, 0x50($a2)
    ctx->pc = 0x20ecf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ecf8: 0xc4c20054  lwc1        $f2, 0x54($a2)
    ctx->pc = 0x20ecf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ecfc:
    // 0x20ecfc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x20ecfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x20ed00: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x20ed00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x20ed04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20ED04u;
    {
        const bool branch_taken_0x20ed04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED04u;
        // 0x20ed08: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed04) {
            ctx->pc = 0x20ED3Cu;
            goto label_20ed3c;
        }
    }
    ctx->pc = 0x20ED0Cu;
    // 0x20ed0c: 0x0  nop
    ctx->pc = 0x20ed0cu;
    // NOP
label_20ed10:
    // 0x20ed10: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20ED10u;
    {
        const bool branch_taken_0x20ed10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED10u;
        // 0x20ed14: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed10) {
            ctx->pc = 0x20ED3Cu;
            goto label_20ed3c;
        }
    }
    ctx->pc = 0x20ED18u;
    // 0x20ed18: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20ed1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20ed20: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x20ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20ed24: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x20ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ed28: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x20ed28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x20ed2c: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x20ed2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ed30: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x20ed30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x20ed34: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x20ed34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ed38: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x20ed38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_20ed3c:
    // 0x20ed3c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20ED3Cu;
    {
        const bool branch_taken_0x20ed3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED3Cu;
        // 0x20ed40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed3c) {
            ctx->pc = 0x20ED60u;
            goto label_20ed60;
        }
    }
    ctx->pc = 0x20ED44u;
    // 0x20ed44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ed44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed48: 0x26655900  addiu       $a1, $s3, 0x5900
    ctx->pc = 0x20ed48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20ed4c: 0xc081ffc  jal         func_207FF0
    ctx->pc = 0x20ED4Cu;
    SET_GPR_U32(ctx, 31, 0x20ED54u);
    ctx->pc = 0x20ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED4Cu;
    // 0x20ed50: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF0u, 0x20ED4Cu, 0x20ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED54u;
label_20ed54:
    // 0x20ed54: 0x100005ea  b           . + 4 + (0x5EA << 2)
    ctx->pc = 0x20ED54u;
    {
        const bool branch_taken_0x20ed54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED54u;
        // 0x20ed58: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed54) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20ED5Cu;
    // 0x20ed5c: 0x0  nop
    ctx->pc = 0x20ed5cu;
    // NOP
label_20ed60:
    // 0x20ed60: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20ED60u;
    {
        const bool branch_taken_0x20ed60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20ed60) {
            ctx->pc = 0x20ED64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ED60u;
            // 0x20ed64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ED80u;
            goto label_20ed80;
        }
    }
    ctx->pc = 0x20ED68u;
    // 0x20ed68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ed68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed6c: 0x26655900  addiu       $a1, $s3, 0x5900
    ctx->pc = 0x20ed6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20ed70: 0xc081ffc  jal         func_207FF0
    ctx->pc = 0x20ED70u;
    SET_GPR_U32(ctx, 31, 0x20ED78u);
    ctx->pc = 0x20ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED70u;
    // 0x20ed74: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF0u, 0x20ED70u, 0x20ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED78u;
label_20ed78:
    // 0x20ed78: 0x100005e1  b           . + 4 + (0x5E1 << 2)
    ctx->pc = 0x20ED78u;
    {
        const bool branch_taken_0x20ed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED78u;
        // 0x20ed7c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed78) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20ED80u;
label_20ed80:
    // 0x20ed80: 0x146205df  bne         $v1, $v0, . + 4 + (0x5DF << 2)
    ctx->pc = 0x20ED80u;
    {
        const bool branch_taken_0x20ed80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED80u;
        // 0x20ed84: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed80) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20ED88u;
    // 0x20ed88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed8c: 0x26655900  addiu       $a1, $s3, 0x5900
    ctx->pc = 0x20ed8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22784));
    // 0x20ed90: 0xc081ffc  jal         func_207FF0
    ctx->pc = 0x20ED90u;
    SET_GPR_U32(ctx, 31, 0x20ED98u);
    ctx->pc = 0x20ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED90u;
    // 0x20ed94: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF0u, 0x20ED90u, 0x20ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED98u;
label_20ed98:
    // 0x20ed98: 0x100005d9  b           . + 4 + (0x5D9 << 2)
    ctx->pc = 0x20ED98u;
    {
        const bool branch_taken_0x20ed98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED98u;
        // 0x20ed9c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed98) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20EDA0u;
label_20eda0:
    // 0x20eda0: 0x25227ec3  addiu       $v0, $t1, 0x7EC3
    ctx->pc = 0x20eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 32451));
    // 0x20eda4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20eda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20eda8: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x20eda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x20edac: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x20EDACu;
    {
        const bool branch_taken_0x20edac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDACu;
        // 0x20edb0: 0x25227eb3  addiu       $v0, $t1, 0x7EB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 32435));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edac) {
            ctx->pc = 0x20F030u;
            goto label_20f030;
        }
    }
    ctx->pc = 0x20EDB4u;
    // 0x20edb4: 0x34028144  ori         $v0, $zero, 0x8144
    ctx->pc = 0x20edb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33092);
    // 0x20edb8: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x20edb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x20edbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20EDBCu;
    {
        const bool branch_taken_0x20edbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDBCu;
        // 0x20edc0: 0x25227eb5  addiu       $v0, $t1, 0x7EB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 32437));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edbc) {
            ctx->pc = 0x20EDD0u;
            goto label_20edd0;
        }
    }
    ctx->pc = 0x20EDC4u;
    // 0x20edc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20edc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20EDC8u;
    {
        const bool branch_taken_0x20edc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDC8u;
        // 0x20edcc: 0xa222019e  sb          $v0, 0x19E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 414), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edc8) {
            ctx->pc = 0x20EDE4u;
            goto label_20ede4;
        }
    }
    ctx->pc = 0x20EDD0u;
label_20edd0:
    // 0x20edd0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20edd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20edd4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20edd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20edd8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20EDD8u;
    {
        const bool branch_taken_0x20edd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDD8u;
        // 0x20eddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edd8) {
            ctx->pc = 0x20EDE4u;
            goto label_20ede4;
        }
    }
    ctx->pc = 0x20EDE0u;
    // 0x20ede0: 0xa222019f  sb          $v0, 0x19F($s1)
    ctx->pc = 0x20ede0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 415), (uint8_t)GPR_U32(ctx, 2));
label_20ede4:
    // 0x20ede4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x20ede8: 0x34427ec2  ori         $v0, $v0, 0x7EC2
    ctx->pc = 0x20ede8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32450);
    // 0x20edec: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x20edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x20edf0: 0x2c43000f  sltiu       $v1, $v0, 0xF
    ctx->pc = 0x20edf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x20edf4: 0x506005c2  beql        $v1, $zero, . + 4 + (0x5C2 << 2)
    ctx->pc = 0x20EDF4u;
    {
        const bool branch_taken_0x20edf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20edf4) {
            ctx->pc = 0x20EDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EDF4u;
            // 0x20edf8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20EDFCu;
    // 0x20edfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ee00: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x20ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x20ee04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20ee08: 0x8c634620  lw          $v1, 0x4620($v1)
    ctx->pc = 0x20ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17952)));
    // 0x20ee0c: 0x600008  jr          $v1
    ctx->pc = 0x20EE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20EE18u: goto label_20ee18;
            case 0x20EE28u: goto label_20ee28;
            case 0x20EE38u: goto label_20ee38;
            case 0x20EE70u: goto label_20ee70;
            case 0x20EEA8u: goto label_20eea8;
            case 0x20EEE0u: goto label_20eee0;
            case 0x20EEF8u: goto label_20eef8;
            case 0x20EF10u: goto label_20ef10;
            case 0x20EF38u: goto label_20ef38;
            case 0x20EF50u: goto label_20ef50;
            case 0x20EF68u: goto label_20ef68;
            case 0x20EF80u: goto label_20ef80;
            case 0x20EFB8u: goto label_20efb8;
            case 0x20EFF0u: goto label_20eff0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EE0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20EE14u;
    // 0x20ee14: 0x0  nop
    ctx->pc = 0x20ee14u;
    // NOP
label_20ee18:
    // 0x20ee18: 0x102202  srl         $a0, $s0, 8
    ctx->pc = 0x20ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x20ee1c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x20EE1Cu;
    {
        const bool branch_taken_0x20ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE1Cu;
        // 0x20ee20: 0x26230848  addiu       $v1, $s1, 0x848 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee1c) {
            ctx->pc = 0x20EF18u;
            goto label_20ef18;
        }
    }
    ctx->pc = 0x20EE24u;
    // 0x20ee24: 0x0  nop
    ctx->pc = 0x20ee24u;
    // NOP
label_20ee28:
    // 0x20ee28: 0x102202  srl         $a0, $s0, 8
    ctx->pc = 0x20ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x20ee2c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x20EE2Cu;
    {
        const bool branch_taken_0x20ee2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE2Cu;
        // 0x20ee30: 0x26230834  addiu       $v1, $s1, 0x834 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee2c) {
            ctx->pc = 0x20EF18u;
            goto label_20ef18;
        }
    }
    ctx->pc = 0x20EE34u;
    // 0x20ee34: 0x0  nop
    ctx->pc = 0x20ee34u;
    // NOP
label_20ee38:
    // 0x20ee38: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x20ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x20ee3c: 0x26230834  addiu       $v1, $s1, 0x834
    ctx->pc = 0x20ee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2100));
    // 0x20ee40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ee40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ee44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20ee44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20ee48: 0x26220848  addiu       $v0, $s1, 0x848
    ctx->pc = 0x20ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2120));
    // 0x20ee4c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x20ee4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x20ee50: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x20ee50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ee54: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x20ee54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x20ee58: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20ee58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20ee5c: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x20ee5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x20ee60: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20ee60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20ee64: 0x100005a5  b           . + 4 + (0x5A5 << 2)
    ctx->pc = 0x20EE64u;
    {
        const bool branch_taken_0x20ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE64u;
        // 0x20ee68: 0xa4600004  sh          $zero, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee64) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20EE6Cu;
    // 0x20ee6c: 0x0  nop
    ctx->pc = 0x20ee6cu;
    // NOP
label_20ee70:
    // 0x20ee70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20ee70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20ee74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20ee74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ee78: 0x26230834  addiu       $v1, $s1, 0x834
    ctx->pc = 0x20ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2100));
    // 0x20ee7c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x20ee7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x20ee80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20ee80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20ee84: 0x26220848  addiu       $v0, $s1, 0x848
    ctx->pc = 0x20ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2120));
    // 0x20ee88: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x20ee88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x20ee8c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20ee8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20ee90: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x20ee90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x20ee94: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x20ee94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ee98: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x20ee98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x20ee9c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x20ee9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20eea0: 0x10000596  b           . + 4 + (0x596 << 2)
    ctx->pc = 0x20EEA0u;
    {
        const bool branch_taken_0x20eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEA0u;
        // 0x20eea4: 0xa4600004  sh          $zero, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eea0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20EEA8u;
label_20eea8:
    // 0x20eea8: 0xc083834  jal         func_20E0D0
    ctx->pc = 0x20EEA8u;
    SET_GPR_U32(ctx, 31, 0x20EEB0u);
    ctx->pc = 0x20EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EEA8u;
    // 0x20eeac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E0D0u, 0x20EEA8u, 0x20EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EEB0u;
label_20eeb0:
    // 0x20eeb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20eeb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eeb4: 0x26230848  addiu       $v1, $s1, 0x848
    ctx->pc = 0x20eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2120));
    // 0x20eeb8: 0x26220834  addiu       $v0, $s1, 0x834
    ctx->pc = 0x20eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2100));
    // 0x20eebc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20eec0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20eec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20eec4: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x20eec4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x20eec8: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x20eec8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x20eecc: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x20eeccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x20eed0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20eed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20eed4: 0x10000589  b           . + 4 + (0x589 << 2)
    ctx->pc = 0x20EED4u;
    {
        const bool branch_taken_0x20eed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EED4u;
        // 0x20eed8: 0xa4700004  sh          $s0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eed4) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20EEDCu;
    // 0x20eedc: 0x0  nop
    ctx->pc = 0x20eedcu;
    // NOP
label_20eee0:
    // 0x20eee0: 0xc083834  jal         func_20E0D0
    ctx->pc = 0x20EEE0u;
    SET_GPR_U32(ctx, 31, 0x20EEE8u);
    ctx->pc = 0x20EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EEE0u;
    // 0x20eee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E0D0u, 0x20EEE0u, 0x20EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EEE8u;
label_20eee8:
    // 0x20eee8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20eeec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x20EEECu;
    {
        const bool branch_taken_0x20eeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEECu;
        // 0x20eef0: 0x26220848  addiu       $v0, $s1, 0x848 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eeec) {
            ctx->pc = 0x20EF70u;
            goto label_20ef70;
        }
    }
    ctx->pc = 0x20EEF4u;
    // 0x20eef4: 0x0  nop
    ctx->pc = 0x20eef4u;
    // NOP
label_20eef8:
    // 0x20eef8: 0xc083834  jal         func_20E0D0
    ctx->pc = 0x20EEF8u;
    SET_GPR_U32(ctx, 31, 0x20EF00u);
    ctx->pc = 0x20EEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EEF8u;
    // 0x20eefc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E0D0u, 0x20EEF8u, 0x20EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF00u;
label_20ef00:
    // 0x20ef00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ef04: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x20EF04u;
    {
        const bool branch_taken_0x20ef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF04u;
        // 0x20ef08: 0x26220834  addiu       $v0, $s1, 0x834 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef04) {
            ctx->pc = 0x20EF70u;
            goto label_20ef70;
        }
    }
    ctx->pc = 0x20EF0Cu;
    // 0x20ef0c: 0x0  nop
    ctx->pc = 0x20ef0cu;
    // NOP
label_20ef10:
    // 0x20ef10: 0x102202  srl         $a0, $s0, 8
    ctx->pc = 0x20ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x20ef14: 0x26230820  addiu       $v1, $s1, 0x820
    ctx->pc = 0x20ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
label_20ef18:
    // 0x20ef18: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20ef18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ef1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20ef1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20ef20: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x20ef20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x20ef24: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x20ef24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x20ef28: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x20ef28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ef2c: 0x10000573  b           . + 4 + (0x573 << 2)
    ctx->pc = 0x20EF2Cu;
    {
        const bool branch_taken_0x20ef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF2Cu;
        // 0x20ef30: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef2c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20EF34u;
    // 0x20ef34: 0x0  nop
    ctx->pc = 0x20ef34u;
    // NOP
label_20ef38:
    // 0x20ef38: 0xc083844  jal         func_20E110
    ctx->pc = 0x20EF38u;
    SET_GPR_U32(ctx, 31, 0x20EF40u);
    ctx->pc = 0x20EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF38u;
    // 0x20ef3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E110u, 0x20EF38u, 0x20EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF40u;
label_20ef40:
    // 0x20ef40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ef44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20EF44u;
    {
        const bool branch_taken_0x20ef44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF44u;
        // 0x20ef48: 0x26220820  addiu       $v0, $s1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef44) {
            ctx->pc = 0x20EF70u;
            goto label_20ef70;
        }
    }
    ctx->pc = 0x20EF4Cu;
    // 0x20ef4c: 0x0  nop
    ctx->pc = 0x20ef4cu;
    // NOP
label_20ef50:
    // 0x20ef50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ef50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ef54: 0xc08f384  jal         func_23CE10
    ctx->pc = 0x20EF54u;
    SET_GPR_U32(ctx, 31, 0x20EF5Cu);
    ctx->pc = 0x20EF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF54u;
    // 0x20ef58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE10u, 0x20EF54u, 0x20EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF5Cu;
label_20ef5c:
    // 0x20ef5c: 0x10000568  b           . + 4 + (0x568 << 2)
    ctx->pc = 0x20EF5Cu;
    {
        const bool branch_taken_0x20ef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF5Cu;
        // 0x20ef60: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef5c) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20EF64u;
    // 0x20ef64: 0x0  nop
    ctx->pc = 0x20ef64u;
    // NOP
label_20ef68:
    // 0x20ef68: 0x26220870  addiu       $v0, $s1, 0x870
    ctx->pc = 0x20ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    // 0x20ef6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20ef70:
    // 0x20ef70: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x20ef70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x20ef74: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x20ef74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x20ef78: 0x10000560  b           . + 4 + (0x560 << 2)
    ctx->pc = 0x20EF78u;
    {
        const bool branch_taken_0x20ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF78u;
        // 0x20ef7c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef78) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20EF80u;
label_20ef80:
    // 0x20ef80: 0x26220884  addiu       $v0, $s1, 0x884
    ctx->pc = 0x20ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2180));
    // 0x20ef84: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x20ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x20ef88: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x20ef88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ef8c: 0x2484dda0  addiu       $a0, $a0, -0x2260
    ctx->pc = 0x20ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x20ef90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20ef94: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x20ef94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ef98: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x20ef98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x20ef9c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20ef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20efa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20efa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20efa4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20efa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20efa8: 0x86290012  lh          $t1, 0x12($s1)
    ctx->pc = 0x20efa8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x20efac: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x20EFACu;
    {
        const bool branch_taken_0x20efac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFACu;
        // 0x20efb0: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efac) {
            ctx->pc = 0x20F01Cu;
            goto label_20f01c;
        }
    }
    ctx->pc = 0x20EFB4u;
    // 0x20efb4: 0x0  nop
    ctx->pc = 0x20efb4u;
    // NOP
label_20efb8:
    // 0x20efb8: 0x26220884  addiu       $v0, $s1, 0x884
    ctx->pc = 0x20efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2180));
    // 0x20efbc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20efbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20efc0: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x20efc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x20efc4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x20efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x20efc8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20efcc: 0x2484dda0  addiu       $a0, $a0, -0x2260
    ctx->pc = 0x20efccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x20efd0: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x20efd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x20efd4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x20efd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20efd8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20efd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20efdc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x20efdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20efe0: 0x86490012  lh          $t1, 0x12($s2)
    ctx->pc = 0x20efe0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x20efe4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20EFE4u;
    {
        const bool branch_taken_0x20efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFE4u;
        // 0x20efe8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efe4) {
            ctx->pc = 0x20F01Cu;
            goto label_20f01c;
        }
    }
    ctx->pc = 0x20EFECu;
    // 0x20efec: 0x0  nop
    ctx->pc = 0x20efecu;
    // NOP
label_20eff0:
    // 0x20eff0: 0x26220884  addiu       $v0, $s1, 0x884
    ctx->pc = 0x20eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2180));
    // 0x20eff4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x20eff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x20eff8: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x20eff8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x20effc: 0x2484dda0  addiu       $a0, $a0, -0x2260
    ctx->pc = 0x20effcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x20f000: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20f000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20f004: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x20f004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f008: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x20f008u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x20f00c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20f010: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20f010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f014: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20f014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f018: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20f018u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f01c:
    // 0x20f01c: 0xc08dd60  jal         func_237580
    ctx->pc = 0x20F01Cu;
    SET_GPR_U32(ctx, 31, 0x20F024u);
    ctx->pc = 0x237580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237580u, 0x20F01Cu, 0x20F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F024u;
label_20f024:
    // 0x20f024: 0x10000535  b           . + 4 + (0x535 << 2)
    ctx->pc = 0x20F024u;
    {
        const bool branch_taken_0x20f024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F024u;
        // 0x20f028: 0xaf9198e0  sw          $s1, -0x6720($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940896), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f024) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F02Cu;
    // 0x20f02c: 0x0  nop
    ctx->pc = 0x20f02cu;
    // NOP
label_20f030:
    // 0x20f030: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20f030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20f034: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x20f034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x20f038: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x20F038u;
    {
        const bool branch_taken_0x20f038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f038) {
            ctx->pc = 0x20F1C8u;
            goto label_20f1c8;
        }
    }
    ctx->pc = 0x20F040u;
    // 0x20f040: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20f040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x20f044: 0x34427eb3  ori         $v0, $v0, 0x7EB3
    ctx->pc = 0x20f044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32435);
    // 0x20f048: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x20f048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x20f04c: 0x2c430007  sltiu       $v1, $v0, 0x7
    ctx->pc = 0x20f04cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x20f050: 0x5060052b  beql        $v1, $zero, . + 4 + (0x52B << 2)
    ctx->pc = 0x20F050u;
    {
        const bool branch_taken_0x20f050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f050) {
            ctx->pc = 0x20F054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F050u;
            // 0x20f054: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F058u;
    // 0x20f058: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f05c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x20f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x20f060: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f064: 0x8c634660  lw          $v1, 0x4660($v1)
    ctx->pc = 0x20f064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18016)));
    // 0x20f068: 0x600008  jr          $v1
    ctx->pc = 0x20F068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F070u: goto label_20f070;
            case 0x20F098u: goto label_20f098;
            case 0x20F0C0u: goto label_20f0c0;
            case 0x20F0E8u: goto label_20f0e8;
            case 0x20F100u: goto label_20f100;
            case 0x20F188u: goto label_20f188;
            case 0x20F1A8u: goto label_20f1a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F068u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20F070u;
label_20f070:
    // 0x20f070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f074: 0xc08384e  jal         func_20E138
    ctx->pc = 0x20F074u;
    SET_GPR_U32(ctx, 31, 0x20F07Cu);
    ctx->pc = 0x20F078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F074u;
    // 0x20f078: 0xa2c03  sra         $a1, $t2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 10), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E138u, 0x20F074u, 0x20F07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F07Cu;
label_20f07c:
    // 0x20f07c: 0x1040051f  beqz        $v0, . + 4 + (0x51F << 2)
    ctx->pc = 0x20F07Cu;
    {
        const bool branch_taken_0x20f07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F07Cu;
        // 0x20f080: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f07c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F084u;
    // 0x20f084: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20f084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f088: 0xc092a94  jal         func_24AA50
    ctx->pc = 0x20F088u;
    SET_GPR_U32(ctx, 31, 0x20F090u);
    ctx->pc = 0x20F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F088u;
    // 0x20f08c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA50u, 0x20F088u, 0x20F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F090u;
label_20f090:
    // 0x20f090: 0x1000051b  b           . + 4 + (0x51B << 2)
    ctx->pc = 0x20F090u;
    {
        const bool branch_taken_0x20f090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F090u;
        // 0x20f094: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f090) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F098u;
label_20f098:
    // 0x20f098: 0xa2c03  sra         $a1, $t2, 16
    ctx->pc = 0x20f098u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 10), 16));
    // 0x20f09c: 0xc08384e  jal         func_20E138
    ctx->pc = 0x20F09Cu;
    SET_GPR_U32(ctx, 31, 0x20F0A4u);
    ctx->pc = 0x20F0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F09Cu;
    // 0x20f0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E138u, 0x20F09Cu, 0x20F0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0A4u;
label_20f0a4:
    // 0x20f0a4: 0x10400515  beqz        $v0, . + 4 + (0x515 << 2)
    ctx->pc = 0x20F0A4u;
    {
        const bool branch_taken_0x20f0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0A4u;
        // 0x20f0a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0a4) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F0ACu;
    // 0x20f0ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20f0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f0b0: 0xc092a94  jal         func_24AA50
    ctx->pc = 0x20F0B0u;
    SET_GPR_U32(ctx, 31, 0x20F0B8u);
    ctx->pc = 0x20F0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0B0u;
    // 0x20f0b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA50u, 0x20F0B0u, 0x20F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0B8u;
label_20f0b8:
    // 0x20f0b8: 0x10000511  b           . + 4 + (0x511 << 2)
    ctx->pc = 0x20F0B8u;
    {
        const bool branch_taken_0x20f0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0B8u;
        // 0x20f0bc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0b8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F0C0u;
label_20f0c0:
    // 0x20f0c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f0c4: 0xc08384e  jal         func_20E138
    ctx->pc = 0x20F0C4u;
    SET_GPR_U32(ctx, 31, 0x20F0CCu);
    ctx->pc = 0x20F0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0C4u;
    // 0x20f0c8: 0xa2c03  sra         $a1, $t2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 10), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E138u, 0x20F0C4u, 0x20F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0CCu;
label_20f0cc:
    // 0x20f0cc: 0x1040050b  beqz        $v0, . + 4 + (0x50B << 2)
    ctx->pc = 0x20F0CCu;
    {
        const bool branch_taken_0x20f0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0CCu;
        // 0x20f0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0cc) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F0D4u;
    // 0x20f0d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20f0d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f0d8: 0xc092a94  jal         func_24AA50
    ctx->pc = 0x20F0D8u;
    SET_GPR_U32(ctx, 31, 0x20F0E0u);
    ctx->pc = 0x20F0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0D8u;
    // 0x20f0dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA50u, 0x20F0D8u, 0x20F0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0E0u;
label_20f0e0:
    // 0x20f0e0: 0x10000507  b           . + 4 + (0x507 << 2)
    ctx->pc = 0x20F0E0u;
    {
        const bool branch_taken_0x20f0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0E0u;
        // 0x20f0e4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0e0) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F0E8u;
label_20f0e8:
    // 0x20f0e8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20F0E8u;
    {
        const bool branch_taken_0x20f0e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f0e8) {
            ctx->pc = 0x20F130u;
            goto label_20f130;
        }
    }
    ctx->pc = 0x20F0F0u;
    // 0x20f0f0: 0xc091c4a  jal         func_247128
    ctx->pc = 0x20F0F0u;
    SET_GPR_U32(ctx, 31, 0x20F0F8u);
    ctx->pc = 0x20F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0F0u;
    // 0x20f0f4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247128u, 0x20F0F0u, 0x20F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0F8u;
label_20f0f8:
    // 0x20f0f8: 0x10000501  b           . + 4 + (0x501 << 2)
    ctx->pc = 0x20F0F8u;
    {
        const bool branch_taken_0x20f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0F8u;
        // 0x20f0fc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0f8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F100u;
label_20f100:
    // 0x20f100: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x20F100u;
    SET_GPR_U32(ctx, 31, 0x20F108u);
    ctx->pc = 0x20F104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F100u;
    // 0x20f104: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x20F100u, 0x20F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F108u;
label_20f108:
    // 0x20f108: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x20f108u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20f10c: 0x1810  mfhi        $v1
    ctx->pc = 0x20f10cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20f110: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F110u;
    {
        const bool branch_taken_0x20f110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f110) {
            ctx->pc = 0x20F114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F110u;
            // 0x20f114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F128u;
            goto label_20f128;
        }
    }
    ctx->pc = 0x20F118u;
    // 0x20f118: 0xc091c4a  jal         func_247128
    ctx->pc = 0x20F118u;
    SET_GPR_U32(ctx, 31, 0x20F120u);
    ctx->pc = 0x20F11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F118u;
    // 0x20f11c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247128u, 0x20F118u, 0x20F120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F120u;
label_20f120:
    // 0x20f120: 0x100004f7  b           . + 4 + (0x4F7 << 2)
    ctx->pc = 0x20F120u;
    {
        const bool branch_taken_0x20f120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F120u;
        // 0x20f124: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f120) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F128u;
label_20f128:
    // 0x20f128: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F128u;
    {
        const bool branch_taken_0x20f128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F128u;
        // 0x20f12c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f128) {
            ctx->pc = 0x20F140u;
            goto label_20f140;
        }
    }
    ctx->pc = 0x20F130u;
label_20f130:
    // 0x20f130: 0xc091c4a  jal         func_247128
    ctx->pc = 0x20F130u;
    SET_GPR_U32(ctx, 31, 0x20F138u);
    ctx->pc = 0x20F134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F130u;
    // 0x20f134: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247128u, 0x20F130u, 0x20F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F138u;
label_20f138:
    // 0x20f138: 0x100004f1  b           . + 4 + (0x4F1 << 2)
    ctx->pc = 0x20F138u;
    {
        const bool branch_taken_0x20f138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F138u;
        // 0x20f13c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f138) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F140u;
label_20f140:
    // 0x20f140: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F140u;
    {
        const bool branch_taken_0x20f140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f140) {
            ctx->pc = 0x20F144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F140u;
            // 0x20f144: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F158u;
            goto label_20f158;
        }
    }
    ctx->pc = 0x20F148u;
    // 0x20f148: 0xc091c4a  jal         func_247128
    ctx->pc = 0x20F148u;
    SET_GPR_U32(ctx, 31, 0x20F150u);
    ctx->pc = 0x20F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F148u;
    // 0x20f14c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247128u, 0x20F148u, 0x20F150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F150u;
label_20f150:
    // 0x20f150: 0x100004eb  b           . + 4 + (0x4EB << 2)
    ctx->pc = 0x20F150u;
    {
        const bool branch_taken_0x20f150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F150u;
        // 0x20f154: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f150) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F158u;
label_20f158:
    // 0x20f158: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F158u;
    {
        const bool branch_taken_0x20f158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f158) {
            ctx->pc = 0x20F15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F158u;
            // 0x20f15c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F170u;
            goto label_20f170;
        }
    }
    ctx->pc = 0x20F160u;
    // 0x20f160: 0xc091c4a  jal         func_247128
    ctx->pc = 0x20F160u;
    SET_GPR_U32(ctx, 31, 0x20F168u);
    ctx->pc = 0x20F164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F160u;
    // 0x20f164: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247128u, 0x20F160u, 0x20F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F168u;
label_20f168:
    // 0x20f168: 0x100004e5  b           . + 4 + (0x4E5 << 2)
    ctx->pc = 0x20F168u;
    {
        const bool branch_taken_0x20f168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F168u;
        // 0x20f16c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f168) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F170u;
label_20f170:
    // 0x20f170: 0x146204e3  bne         $v1, $v0, . + 4 + (0x4E3 << 2)
    ctx->pc = 0x20F170u;
    {
        const bool branch_taken_0x20f170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F170u;
        // 0x20f174: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f170) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F178u;
    // 0x20f178: 0xc091c4a  jal         func_247128
    ctx->pc = 0x20F178u;
    SET_GPR_U32(ctx, 31, 0x20F180u);
    ctx->pc = 0x20F17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F178u;
    // 0x20f17c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247128u, 0x20F178u, 0x20F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F180u;
label_20f180:
    // 0x20f180: 0x100004df  b           . + 4 + (0x4DF << 2)
    ctx->pc = 0x20F180u;
    {
        const bool branch_taken_0x20f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F180u;
        // 0x20f184: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f180) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F188u;
label_20f188:
    // 0x20f188: 0x86230040  lh          $v1, 0x40($s1)
    ctx->pc = 0x20f188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x20f18c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x20f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20f190: 0x106204da  beq         $v1, $v0, . + 4 + (0x4DA << 2)
    ctx->pc = 0x20F190u;
    {
        const bool branch_taken_0x20f190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F190u;
        // 0x20f194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f190) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F198u;
    // 0x20f198: 0xc091a54  jal         func_246950
    ctx->pc = 0x20F198u;
    SET_GPR_U32(ctx, 31, 0x20F1A0u);
    ctx->pc = 0x20F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F198u;
    // 0x20f19c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246950u, 0x20F198u, 0x20F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1A0u;
label_20f1a0:
    // 0x20f1a0: 0x100004d7  b           . + 4 + (0x4D7 << 2)
    ctx->pc = 0x20F1A0u;
    {
        const bool branch_taken_0x20f1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1A0u;
        // 0x20f1a4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1a0) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F1A8u;
label_20f1a8:
    // 0x20f1a8: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x20f1a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x20f1ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F1ACu;
    {
        const bool branch_taken_0x20f1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1ACu;
        // 0x20f1b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1ac) {
            ctx->pc = 0x20F1C0u;
            goto label_20f1c0;
        }
    }
    ctx->pc = 0x20F1B4u;
    // 0x20f1b4: 0x96230166  lhu         $v1, 0x166($s1)
    ctx->pc = 0x20f1b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 358)));
    // 0x20f1b8: 0x506204d1  beql        $v1, $v0, . + 4 + (0x4D1 << 2)
    ctx->pc = 0x20F1B8u;
    {
        const bool branch_taken_0x20f1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20f1b8) {
            ctx->pc = 0x20F1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F1B8u;
            // 0x20f1bc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F1C0u;
label_20f1c0:
    // 0x20f1c0: 0x100004ce  b           . + 4 + (0x4CE << 2)
    ctx->pc = 0x20F1C0u;
    {
        const bool branch_taken_0x20f1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1C0u;
        // 0x20f1c4: 0xa6300166  sh          $s0, 0x166($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 358), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1c0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F1C8u;
label_20f1c8:
    // 0x20f1c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x20f1cc: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x20f1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x20f1d0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x20f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x20f1d4: 0x2c43015c  sltiu       $v1, $v0, 0x15C
    ctx->pc = 0x20f1d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)348) ? 1 : 0);
    // 0x20f1d8: 0x506004c9  beql        $v1, $zero, . + 4 + (0x4C9 << 2)
    ctx->pc = 0x20F1D8u;
    {
        const bool branch_taken_0x20f1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f1d8) {
            ctx->pc = 0x20F1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F1D8u;
            // 0x20f1dc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F1E0u;
    // 0x20f1e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f1e4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x20f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x20f1e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f1ec: 0x8c634680  lw          $v1, 0x4680($v1)
    ctx->pc = 0x20f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18048)));
    // 0x20f1f0: 0x600008  jr          $v1
    ctx->pc = 0x20F1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F1F8u: goto label_20f1f8;
            case 0x20F208u: goto label_20f208;
            case 0x20F218u: goto label_20f218;
            case 0x20F228u: goto label_20f228;
            case 0x20F238u: goto label_20f238;
            case 0x20F248u: goto label_20f248;
            case 0x20F258u: goto label_20f258;
            case 0x20F268u: goto label_20f268;
            case 0x20F278u: goto label_20f278;
            case 0x20F298u: goto label_20f298;
            case 0x20F2B0u: goto label_20f2b0;
            case 0x20F2E8u: goto label_20f2e8;
            case 0x20F340u: goto label_20f340;
            case 0x20F358u: goto label_20f358;
            case 0x20F368u: goto label_20f368;
            case 0x20F378u: goto label_20f378;
            case 0x20F388u: goto label_20f388;
            case 0x20F398u: goto label_20f398;
            case 0x20F3A8u: goto label_20f3a8;
            case 0x20F3B0u: goto label_20f3b0;
            case 0x20F3B8u: goto label_20f3b8;
            case 0x20F3C0u: goto label_20f3c0;
            case 0x20F3C8u: goto label_20f3c8;
            case 0x20F3D0u: goto label_20f3d0;
            case 0x20F3E0u: goto label_20f3e0;
            case 0x20F3E8u: goto label_20f3e8;
            case 0x20F3F0u: goto label_20f3f0;
            case 0x20F3F8u: goto label_20f3f8;
            case 0x20F400u: goto label_20f400;
            case 0x20F408u: goto label_20f408;
            case 0x20F410u: goto label_20f410;
            case 0x20F418u: goto label_20f418;
            case 0x20F428u: goto label_20f428;
            case 0x20F438u: goto label_20f438;
            case 0x20F440u: goto label_20f440;
            case 0x20F450u: goto label_20f450;
            case 0x20F460u: goto label_20f460;
            case 0x20F468u: goto label_20f468;
            case 0x20F478u: goto label_20f478;
            case 0x20F488u: goto label_20f488;
            case 0x20F490u: goto label_20f490;
            case 0x20F4A0u: goto label_20f4a0;
            case 0x20F4B0u: goto label_20f4b0;
            case 0x20F4C0u: goto label_20f4c0;
            case 0x20F4D0u: goto label_20f4d0;
            case 0x20F4D8u: goto label_20f4d8;
            case 0x20F4E0u: goto label_20f4e0;
            case 0x20F4F0u: goto label_20f4f0;
            case 0x20F4F8u: goto label_20f4f8;
            case 0x20F500u: goto label_20f500;
            case 0x20F510u: goto label_20f510;
            case 0x20F520u: goto label_20f520;
            case 0x20F528u: goto label_20f528;
            case 0x20F538u: goto label_20f538;
            case 0x20F548u: goto label_20f548;
            case 0x20F550u: goto label_20f550;
            case 0x20F560u: goto label_20f560;
            case 0x20F570u: goto label_20f570;
            case 0x20F580u: goto label_20f580;
            case 0x20F590u: goto label_20f590;
            case 0x20F598u: goto label_20f598;
            case 0x20F5A0u: goto label_20f5a0;
            case 0x20F5A8u: goto label_20f5a8;
            case 0x20F5B8u: goto label_20f5b8;
            case 0x20F5C0u: goto label_20f5c0;
            case 0x20F5C8u: goto label_20f5c8;
            case 0x20F5D0u: goto label_20f5d0;
            case 0x20F5D8u: goto label_20f5d8;
            case 0x20F5E0u: goto label_20f5e0;
            case 0x20F5F0u: goto label_20f5f0;
            case 0x20F5F8u: goto label_20f5f8;
            case 0x20F600u: goto label_20f600;
            case 0x20F610u: goto label_20f610;
            case 0x20F618u: goto label_20f618;
            case 0x20F630u: goto label_20f630;
            case 0x20F638u: goto label_20f638;
            case 0x20F640u: goto label_20f640;
            case 0x20F648u: goto label_20f648;
            case 0x20F6F8u: goto label_20f6f8;
            case 0x20F7A8u: goto label_20f7a8;
            case 0x20F7B0u: goto label_20f7b0;
            case 0x20F7B8u: goto label_20f7b8;
            case 0x20F7C0u: goto label_20f7c0;
            case 0x20F7C8u: goto label_20f7c8;
            case 0x20F7D0u: goto label_20f7d0;
            case 0x20F7D8u: goto label_20f7d8;
            case 0x20F860u: goto label_20f860;
            case 0x20F868u: goto label_20f868;
            case 0x20F8C0u: goto label_20f8c0;
            case 0x20F8C8u: goto label_20f8c8;
            case 0x20F8D0u: goto label_20f8d0;
            case 0x20F8D8u: goto label_20f8d8;
            case 0x20F8E8u: goto label_20f8e8;
            case 0x20F8F8u: goto label_20f8f8;
            case 0x20F918u: goto label_20f918;
            case 0x20F938u: goto label_20f938;
            case 0x20F948u: goto label_20f948;
            case 0x20F958u: goto label_20f958;
            case 0x20F968u: goto label_20f968;
            case 0x20F978u: goto label_20f978;
            case 0x20F9A0u: goto label_20f9a0;
            case 0x20F9B0u: goto label_20f9b0;
            case 0x20F9D0u: goto label_20f9d0;
            case 0x20FAC8u: goto label_20fac8;
            case 0x20FAE8u: goto label_20fae8;
            case 0x20FAF0u: goto label_20faf0;
            case 0x20FAF8u: goto label_20faf8;
            case 0x20FB00u: goto label_20fb00;
            case 0x20FB28u: goto label_20fb28;
            case 0x20FB60u: goto label_20fb60;
            case 0x20FB88u: goto label_20fb88;
            case 0x20FBC0u: goto label_20fbc0;
            case 0x20FBC8u: goto label_20fbc8;
            case 0x20FBD0u: goto label_20fbd0;
            case 0x20FBF0u: goto label_20fbf0;
            case 0x20FBF8u: goto label_20fbf8;
            case 0x20FC40u: goto label_20fc40;
            case 0x20FC48u: goto label_20fc48;
            case 0x20FC60u: goto label_20fc60;
            case 0x20FC70u: goto label_20fc70;
            case 0x20FCB8u: goto label_20fcb8;
            case 0x20FCF8u: goto label_20fcf8;
            case 0x20FD20u: goto label_20fd20;
            case 0x20FD30u: goto label_20fd30;
            case 0x20FD48u: goto label_20fd48;
            case 0x20FD50u: goto label_20fd50;
            case 0x20FD60u: goto label_20fd60;
            case 0x20FD70u: goto label_20fd70;
            case 0x20FE10u: goto label_20fe10;
            case 0x20FE48u: goto label_20fe48;
            case 0x20FEE8u: goto label_20fee8;
            case 0x20FF10u: goto label_20ff10;
            case 0x20FF68u: goto label_20ff68;
            case 0x20FF78u: goto label_20ff78;
            case 0x20FF88u: goto label_20ff88;
            case 0x20FF98u: goto label_20ff98;
            case 0x20FFB0u: goto label_20ffb0;
            case 0x20FFE8u: goto label_20ffe8;
            case 0x210010u: goto label_210010;
            case 0x210028u: goto label_210028;
            case 0x210030u: goto label_210030;
            case 0x210070u: goto label_210070;
            case 0x210078u: goto label_210078;
            case 0x2100C0u: goto label_2100c0;
            case 0x2100C8u: goto label_2100c8;
            case 0x2100D0u: goto label_2100d0;
            case 0x2100D8u: goto label_2100d8;
            case 0x2100E0u: goto label_2100e0;
            case 0x2100E8u: goto label_2100e8;
            case 0x2100F0u: goto label_2100f0;
            case 0x210108u: goto label_210108;
            case 0x210120u: goto label_210120;
            case 0x210138u: goto label_210138;
            case 0x210150u: goto label_210150;
            case 0x210158u: goto label_210158;
            case 0x210160u: goto label_210160;
            case 0x210180u: goto label_210180;
            case 0x210190u: goto label_210190;
            case 0x2101A0u: goto label_2101a0;
            case 0x2101B0u: goto label_2101b0;
            case 0x2101C0u: goto label_2101c0;
            case 0x2101D0u: goto label_2101d0;
            case 0x2101F0u: goto label_2101f0;
            case 0x210200u: goto label_210200;
            case 0x210220u: goto label_210220;
            case 0x210228u: goto label_210228;
            case 0x210230u: goto label_210230;
            case 0x210260u: goto label_210260;
            case 0x210268u: goto label_210268;
            case 0x210270u: goto label_210270;
            case 0x210278u: goto label_210278;
            case 0x210280u: goto label_210280;
            case 0x210288u: goto label_210288;
            case 0x210290u: goto label_210290;
            case 0x2102C0u: goto label_2102c0;
            case 0x2102E8u: goto label_2102e8;
            case 0x210310u: goto label_210310;
            case 0x210320u: goto label_210320;
            case 0x210338u: goto label_210338;
            case 0x210350u: goto label_210350;
            case 0x210380u: goto label_210380;
            case 0x2103B0u: goto label_2103b0;
            case 0x2103C0u: goto label_2103c0;
            case 0x2103E0u: goto label_2103e0;
            case 0x2103F0u: goto label_2103f0;
            case 0x210400u: goto label_210400;
            case 0x210408u: goto label_210408;
            case 0x210418u: goto label_210418;
            case 0x210430u: goto label_210430;
            case 0x210438u: goto label_210438;
            case 0x210458u: goto label_210458;
            case 0x210488u: goto label_210488;
            case 0x2104A0u: goto label_2104a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F1F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20F1F8u;
label_20f1f8:
    // 0x20f1f8: 0xc08e4b0  jal         func_2392C0
    ctx->pc = 0x20F1F8u;
    SET_GPR_U32(ctx, 31, 0x20F200u);
    ctx->pc = 0x20F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F1F8u;
    // 0x20f1fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2392C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2392C0u, 0x20F1F8u, 0x20F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F200u;
label_20f200:
    // 0x20f200: 0x100004bf  b           . + 4 + (0x4BF << 2)
    ctx->pc = 0x20F200u;
    {
        const bool branch_taken_0x20f200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F200u;
        // 0x20f204: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f200) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F208u;
label_20f208:
    // 0x20f208: 0xc08e4b0  jal         func_2392C0
    ctx->pc = 0x20F208u;
    SET_GPR_U32(ctx, 31, 0x20F210u);
    ctx->pc = 0x20F20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F208u;
    // 0x20f20c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2392C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2392C0u, 0x20F208u, 0x20F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F210u;
label_20f210:
    // 0x20f210: 0x100004bb  b           . + 4 + (0x4BB << 2)
    ctx->pc = 0x20F210u;
    {
        const bool branch_taken_0x20f210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F210u;
        // 0x20f214: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f210) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F218u;
label_20f218:
    // 0x20f218: 0xc08e4b0  jal         func_2392C0
    ctx->pc = 0x20F218u;
    SET_GPR_U32(ctx, 31, 0x20F220u);
    ctx->pc = 0x20F21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F218u;
    // 0x20f21c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2392C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2392C0u, 0x20F218u, 0x20F220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F220u;
label_20f220:
    // 0x20f220: 0x100004b7  b           . + 4 + (0x4B7 << 2)
    ctx->pc = 0x20F220u;
    {
        const bool branch_taken_0x20f220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F220u;
        // 0x20f224: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f220) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F228u;
label_20f228:
    // 0x20f228: 0xc08e4b0  jal         func_2392C0
    ctx->pc = 0x20F228u;
    SET_GPR_U32(ctx, 31, 0x20F230u);
    ctx->pc = 0x20F22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F228u;
    // 0x20f22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2392C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2392C0u, 0x20F228u, 0x20F230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F230u;
label_20f230:
    // 0x20f230: 0x100004b3  b           . + 4 + (0x4B3 << 2)
    ctx->pc = 0x20F230u;
    {
        const bool branch_taken_0x20f230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F230u;
        // 0x20f234: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f230) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F238u;
label_20f238:
    // 0x20f238: 0xc08e4be  jal         func_2392F8
    ctx->pc = 0x20F238u;
    SET_GPR_U32(ctx, 31, 0x20F240u);
    ctx->pc = 0x20F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F238u;
    // 0x20f23c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2392F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2392F8u, 0x20F238u, 0x20F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F240u;
label_20f240:
    // 0x20f240: 0x100004af  b           . + 4 + (0x4AF << 2)
    ctx->pc = 0x20F240u;
    {
        const bool branch_taken_0x20f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F240u;
        // 0x20f244: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f240) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F248u;
label_20f248:
    // 0x20f248: 0xc08e4be  jal         func_2392F8
    ctx->pc = 0x20F248u;
    SET_GPR_U32(ctx, 31, 0x20F250u);
    ctx->pc = 0x20F24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F248u;
    // 0x20f24c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2392F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2392F8u, 0x20F248u, 0x20F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F250u;
label_20f250:
    // 0x20f250: 0x100004ab  b           . + 4 + (0x4AB << 2)
    ctx->pc = 0x20F250u;
    {
        const bool branch_taken_0x20f250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F250u;
        // 0x20f254: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f250) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F258u;
label_20f258:
    // 0x20f258: 0xc08e4be  jal         func_2392F8
    ctx->pc = 0x20F258u;
    SET_GPR_U32(ctx, 31, 0x20F260u);
    ctx->pc = 0x20F25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F258u;
    // 0x20f25c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2392F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2392F8u, 0x20F258u, 0x20F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F260u;
label_20f260:
    // 0x20f260: 0x100004a7  b           . + 4 + (0x4A7 << 2)
    ctx->pc = 0x20F260u;
    {
        const bool branch_taken_0x20f260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F260u;
        // 0x20f264: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f260) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F268u;
label_20f268:
    // 0x20f268: 0xc08e4be  jal         func_2392F8
    ctx->pc = 0x20F268u;
    SET_GPR_U32(ctx, 31, 0x20F270u);
    ctx->pc = 0x20F26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F268u;
    // 0x20f26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2392F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2392F8u, 0x20F268u, 0x20F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F270u;
label_20f270:
    // 0x20f270: 0x100004a3  b           . + 4 + (0x4A3 << 2)
    ctx->pc = 0x20F270u;
    {
        const bool branch_taken_0x20f270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F270u;
        // 0x20f274: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f270) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F278u;
label_20f278:
    // 0x20f278: 0x86240012  lh          $a0, 0x12($s1)
    ctx->pc = 0x20f278u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x20f27c: 0xc095644  jal         func_255910
    ctx->pc = 0x20F27Cu;
    SET_GPR_U32(ctx, 31, 0x20F284u);
    ctx->pc = 0x20F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F27Cu;
    // 0x20f280: 0x26250750  addiu       $a1, $s1, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255910u, 0x20F27Cu, 0x20F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F284u;
label_20f284:
    // 0x20f284: 0x86240012  lh          $a0, 0x12($s1)
    ctx->pc = 0x20f284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x20f288: 0xc08e980  jal         func_23A600
    ctx->pc = 0x20F288u;
    SET_GPR_U32(ctx, 31, 0x20F290u);
    ctx->pc = 0x20F28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F288u;
    // 0x20f28c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A600u, 0x20F288u, 0x20F290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F290u;
label_20f290:
    // 0x20f290: 0x1000049b  b           . + 4 + (0x49B << 2)
    ctx->pc = 0x20F290u;
    {
        const bool branch_taken_0x20f290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F290u;
        // 0x20f294: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f290) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F298u;
label_20f298:
    // 0x20f298: 0x86260220  lh          $a2, 0x220($s1)
    ctx->pc = 0x20f298u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x20f29c: 0x26250750  addiu       $a1, $s1, 0x750
    ctx->pc = 0x20f29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1872));
    // 0x20f2a0: 0xc0956ae  jal         func_255AB8
    ctx->pc = 0x20F2A0u;
    SET_GPR_U32(ctx, 31, 0x20F2A8u);
    ctx->pc = 0x20F2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2A0u;
    // 0x20f2a4: 0x86240012  lh          $a0, 0x12($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255AB8u, 0x20F2A0u, 0x20F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2A8u;
label_20f2a8:
    // 0x20f2a8: 0x10000495  b           . + 4 + (0x495 << 2)
    ctx->pc = 0x20F2A8u;
    {
        const bool branch_taken_0x20f2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2A8u;
        // 0x20f2ac: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2a8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F2B0u;
label_20f2b0:
    // 0x20f2b0: 0x7a220750  lq          $v0, 0x750($s1)
    ctx->pc = 0x20f2b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 1872)));
    // 0x20f2b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20f2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f2b8: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x20f2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x20f2bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20f2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f2c0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x20f2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x20f2c4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x20f2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f2c8: 0x86260220  lh          $a2, 0x220($s1)
    ctx->pc = 0x20f2c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x20f2cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20f2ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20f2d0: 0x86240012  lh          $a0, 0x12($s1)
    ctx->pc = 0x20f2d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x20f2d4: 0xc095796  jal         func_255E58
    ctx->pc = 0x20F2D4u;
    SET_GPR_U32(ctx, 31, 0x20F2DCu);
    ctx->pc = 0x20F2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2D4u;
    // 0x20f2d8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E58u, 0x20F2D4u, 0x20F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2DCu;
label_20f2dc:
    // 0x20f2dc: 0x10000488  b           . + 4 + (0x488 << 2)
    ctx->pc = 0x20F2DCu;
    {
        const bool branch_taken_0x20f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2DCu;
        // 0x20f2e0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2dc) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F2E4u;
    // 0x20f2e4: 0x0  nop
    ctx->pc = 0x20f2e4u;
    // NOP
label_20f2e8:
    // 0x20f2e8: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x20f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x20f2ec: 0x54400484  bnel        $v0, $zero, . + 4 + (0x484 << 2)
    ctx->pc = 0x20F2ECu;
    {
        const bool branch_taken_0x20f2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f2ec) {
            ctx->pc = 0x20F2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F2ECu;
            // 0x20f2f0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F2F4u;
    // 0x20f2f4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F2F4u;
    {
        const bool branch_taken_0x20f2f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2F4u;
        // 0x20f2f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2f4) {
            ctx->pc = 0x20F308u;
            goto label_20f308;
        }
    }
    ctx->pc = 0x20F2FCu;
    // 0x20f2fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f300: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20F300u;
    {
        const bool branch_taken_0x20f300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F300u;
        // 0x20f304: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f300) {
            ctx->pc = 0x20F330u;
            goto label_20f330;
        }
    }
    ctx->pc = 0x20F308u;
label_20f308:
    // 0x20f308: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F308u;
    {
        const bool branch_taken_0x20f308 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F308u;
        // 0x20f30c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f308) {
            ctx->pc = 0x20F320u;
            goto label_20f320;
        }
    }
    ctx->pc = 0x20F310u;
    // 0x20f310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f314: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20F314u;
    {
        const bool branch_taken_0x20f314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F314u;
        // 0x20f318: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f314) {
            ctx->pc = 0x20F330u;
            goto label_20f330;
        }
    }
    ctx->pc = 0x20F31Cu;
    // 0x20f31c: 0x0  nop
    ctx->pc = 0x20f31cu;
    // NOP
label_20f320:
    // 0x20f320: 0x16020477  bne         $s0, $v0, . + 4 + (0x477 << 2)
    ctx->pc = 0x20F320u;
    {
        const bool branch_taken_0x20f320 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F320u;
        // 0x20f324: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f320) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F328u;
    // 0x20f328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f32c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x20f32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20f330:
    // 0x20f330: 0xc081ffc  jal         func_207FF0
    ctx->pc = 0x20F330u;
    SET_GPR_U32(ctx, 31, 0x20F338u);
    ctx->pc = 0x20F334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F330u;
    // 0x20f334: 0x24850750  addiu       $a1, $a0, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF0u, 0x20F330u, 0x20F338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F338u;
label_20f338:
    // 0x20f338: 0x10000471  b           . + 4 + (0x471 << 2)
    ctx->pc = 0x20F338u;
    {
        const bool branch_taken_0x20f338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F338u;
        // 0x20f33c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f338) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F340u;
label_20f340:
    // 0x20f340: 0x86240012  lh          $a0, 0x12($s1)
    ctx->pc = 0x20f340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x20f344: 0xc095682  jal         func_255A08
    ctx->pc = 0x20F344u;
    SET_GPR_U32(ctx, 31, 0x20F34Cu);
    ctx->pc = 0x20F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F344u;
    // 0x20f348: 0x26250750  addiu       $a1, $s1, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255A08u, 0x20F344u, 0x20F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F34Cu;
label_20f34c:
    // 0x20f34c: 0x1000046c  b           . + 4 + (0x46C << 2)
    ctx->pc = 0x20F34Cu;
    {
        const bool branch_taken_0x20f34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F34Cu;
        // 0x20f350: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f34c) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F354u;
    // 0x20f354: 0x0  nop
    ctx->pc = 0x20f354u;
    // NOP
label_20f358:
    // 0x20f358: 0xc08850c  jal         func_221430
    ctx->pc = 0x20F358u;
    SET_GPR_U32(ctx, 31, 0x20F360u);
    ctx->pc = 0x20F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F358u;
    // 0x20f35c: 0x9624003c  lhu         $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221430u, 0x20F358u, 0x20F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F360u;
label_20f360:
    // 0x20f360: 0x10000467  b           . + 4 + (0x467 << 2)
    ctx->pc = 0x20F360u;
    {
        const bool branch_taken_0x20f360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F360u;
        // 0x20f364: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f360) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F368u;
label_20f368:
    // 0x20f368: 0xc08850c  jal         func_221430
    ctx->pc = 0x20F368u;
    SET_GPR_U32(ctx, 31, 0x20F370u);
    ctx->pc = 0x20F36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F368u;
    // 0x20f36c: 0x9644003c  lhu         $a0, 0x3C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221430u, 0x20F368u, 0x20F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F370u;
label_20f370:
    // 0x20f370: 0x10000463  b           . + 4 + (0x463 << 2)
    ctx->pc = 0x20F370u;
    {
        const bool branch_taken_0x20f370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F370u;
        // 0x20f374: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f370) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F378u;
label_20f378:
    // 0x20f378: 0xc093fc6  jal         func_24FF18
    ctx->pc = 0x20F378u;
    SET_GPR_U32(ctx, 31, 0x20F380u);
    ctx->pc = 0x20F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F378u;
    // 0x20f37c: 0x9624003c  lhu         $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FF18u, 0x20F378u, 0x20F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F380u;
label_20f380:
    // 0x20f380: 0x1000045f  b           . + 4 + (0x45F << 2)
    ctx->pc = 0x20F380u;
    {
        const bool branch_taken_0x20f380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F380u;
        // 0x20f384: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f380) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F388u;
label_20f388:
    // 0x20f388: 0xc093fc6  jal         func_24FF18
    ctx->pc = 0x20F388u;
    SET_GPR_U32(ctx, 31, 0x20F390u);
    ctx->pc = 0x20F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F388u;
    // 0x20f38c: 0x9644003c  lhu         $a0, 0x3C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FF18u, 0x20F388u, 0x20F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F390u;
label_20f390:
    // 0x20f390: 0x1000045b  b           . + 4 + (0x45B << 2)
    ctx->pc = 0x20F390u;
    {
        const bool branch_taken_0x20f390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F390u;
        // 0x20f394: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f390) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F398u;
label_20f398:
    // 0x20f398: 0xc0959a2  jal         func_256688
    ctx->pc = 0x20F398u;
    SET_GPR_U32(ctx, 31, 0x20F3A0u);
    ctx->pc = 0x20F39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F398u;
    // 0x20f39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256688u, 0x20F398u, 0x20F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F3A0u;
label_20f3a0:
    // 0x20f3a0: 0x10000457  b           . + 4 + (0x457 << 2)
    ctx->pc = 0x20F3A0u;
    {
        const bool branch_taken_0x20f3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3A0u;
        // 0x20f3a4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3a0) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F3A8u;
label_20f3a8:
    // 0x20f3a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20F3A8u;
    {
        const bool branch_taken_0x20f3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3A8u;
        // 0x20f3ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3a8) {
            ctx->pc = 0x20F3D4u;
            goto label_20f3d4;
        }
    }
    ctx->pc = 0x20F3B0u;
label_20f3b0:
    // 0x20f3b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20F3B0u;
    {
        const bool branch_taken_0x20f3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3B0u;
        // 0x20f3b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3b0) {
            ctx->pc = 0x20F3D4u;
            goto label_20f3d4;
        }
    }
    ctx->pc = 0x20F3B8u;
label_20f3b8:
    // 0x20f3b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20F3B8u;
    {
        const bool branch_taken_0x20f3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3B8u;
        // 0x20f3bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3b8) {
            ctx->pc = 0x20F3D4u;
            goto label_20f3d4;
        }
    }
    ctx->pc = 0x20F3C0u;
label_20f3c0:
    // 0x20f3c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20F3C0u;
    {
        const bool branch_taken_0x20f3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3C0u;
        // 0x20f3c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3c0) {
            ctx->pc = 0x20F3D4u;
            goto label_20f3d4;
        }
    }
    ctx->pc = 0x20F3C8u;
label_20f3c8:
    // 0x20f3c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20F3C8u;
    {
        const bool branch_taken_0x20f3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3C8u;
        // 0x20f3cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3c8) {
            ctx->pc = 0x20F3D4u;
            goto label_20f3d4;
        }
    }
    ctx->pc = 0x20F3D0u;
label_20f3d0:
    // 0x20f3d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x20f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20f3d4:
    // 0x20f3d4: 0xa630021a  sh          $s0, 0x21A($s1)
    ctx->pc = 0x20f3d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 538), (uint16_t)GPR_U32(ctx, 16));
    // 0x20f3d8: 0x10000448  b           . + 4 + (0x448 << 2)
    ctx->pc = 0x20F3D8u;
    {
        const bool branch_taken_0x20f3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3D8u;
        // 0x20f3dc: 0xa2220202  sb          $v0, 0x202($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 514), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3d8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F3E0u;
label_20f3e0:
    // 0x20f3e0: 0x10000446  b           . + 4 + (0x446 << 2)
    ctx->pc = 0x20F3E0u;
    {
        const bool branch_taken_0x20f3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3E0u;
        // 0x20f3e4: 0xa63002c8  sh          $s0, 0x2C8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 712), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3e0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F3E8u;
label_20f3e8:
    // 0x20f3e8: 0x10000444  b           . + 4 + (0x444 << 2)
    ctx->pc = 0x20F3E8u;
    {
        const bool branch_taken_0x20f3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3E8u;
        // 0x20f3ec: 0xa63002ca  sh          $s0, 0x2CA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 714), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3e8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F3F0u;
label_20f3f0:
    // 0x20f3f0: 0x10000442  b           . + 4 + (0x442 << 2)
    ctx->pc = 0x20F3F0u;
    {
        const bool branch_taken_0x20f3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3F0u;
        // 0x20f3f4: 0xa63002cc  sh          $s0, 0x2CC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 716), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3f0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F3F8u;
label_20f3f8:
    // 0x20f3f8: 0x10000440  b           . + 4 + (0x440 << 2)
    ctx->pc = 0x20F3F8u;
    {
        const bool branch_taken_0x20f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3F8u;
        // 0x20f3fc: 0xa65002c8  sh          $s0, 0x2C8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 712), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3f8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F400u;
label_20f400:
    // 0x20f400: 0x1000043e  b           . + 4 + (0x43E << 2)
    ctx->pc = 0x20F400u;
    {
        const bool branch_taken_0x20f400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F400u;
        // 0x20f404: 0xa65002ca  sh          $s0, 0x2CA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 714), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f400) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F408u;
label_20f408:
    // 0x20f408: 0x1000043c  b           . + 4 + (0x43C << 2)
    ctx->pc = 0x20F408u;
    {
        const bool branch_taken_0x20f408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F408u;
        // 0x20f40c: 0xa65002cc  sh          $s0, 0x2CC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 716), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f408) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F410u;
label_20f410:
    // 0x20f410: 0x1000043a  b           . + 4 + (0x43A << 2)
    ctx->pc = 0x20F410u;
    {
        const bool branch_taken_0x20f410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F410u;
        // 0x20f414: 0xa63002ce  sh          $s0, 0x2CE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 718), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f410) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F418u;
label_20f418:
    // 0x20f418: 0x962202ce  lhu         $v0, 0x2CE($s1)
    ctx->pc = 0x20f418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 718)));
    // 0x20f41c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20f420: 0x10000436  b           . + 4 + (0x436 << 2)
    ctx->pc = 0x20F420u;
    {
        const bool branch_taken_0x20f420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F420u;
        // 0x20f424: 0xa62202ce  sh          $v0, 0x2CE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 718), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f420) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F428u;
label_20f428:
    // 0x20f428: 0x962202ce  lhu         $v0, 0x2CE($s1)
    ctx->pc = 0x20f428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 718)));
    // 0x20f42c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x20f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f430: 0x10000432  b           . + 4 + (0x432 << 2)
    ctx->pc = 0x20F430u;
    {
        const bool branch_taken_0x20f430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F430u;
        // 0x20f434: 0xa62202ce  sh          $v0, 0x2CE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 718), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f430) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F438u;
label_20f438:
    // 0x20f438: 0x10000430  b           . + 4 + (0x430 << 2)
    ctx->pc = 0x20F438u;
    {
        const bool branch_taken_0x20f438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F438u;
        // 0x20f43c: 0xa6300168  sh          $s0, 0x168($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 360), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f438) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F440u;
label_20f440:
    // 0x20f440: 0x96220168  lhu         $v0, 0x168($s1)
    ctx->pc = 0x20f440u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x20f444: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20f444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20f448: 0x1000042c  b           . + 4 + (0x42C << 2)
    ctx->pc = 0x20F448u;
    {
        const bool branch_taken_0x20f448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F448u;
        // 0x20f44c: 0xa6220168  sh          $v0, 0x168($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 360), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f448) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F450u;
label_20f450:
    // 0x20f450: 0x96220168  lhu         $v0, 0x168($s1)
    ctx->pc = 0x20f450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x20f454: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x20f454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f458: 0x10000428  b           . + 4 + (0x428 << 2)
    ctx->pc = 0x20F458u;
    {
        const bool branch_taken_0x20f458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F458u;
        // 0x20f45c: 0xa6220168  sh          $v0, 0x168($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 360), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f458) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F460u;
label_20f460:
    // 0x20f460: 0x10000426  b           . + 4 + (0x426 << 2)
    ctx->pc = 0x20F460u;
    {
        const bool branch_taken_0x20f460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F460u;
        // 0x20f464: 0xa65002ce  sh          $s0, 0x2CE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 718), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f460) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F468u;
label_20f468:
    // 0x20f468: 0x964202ce  lhu         $v0, 0x2CE($s2)
    ctx->pc = 0x20f468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 718)));
    // 0x20f46c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20f470: 0x10000422  b           . + 4 + (0x422 << 2)
    ctx->pc = 0x20F470u;
    {
        const bool branch_taken_0x20f470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F470u;
        // 0x20f474: 0xa64202ce  sh          $v0, 0x2CE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 718), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f470) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F478u;
label_20f478:
    // 0x20f478: 0x964202ce  lhu         $v0, 0x2CE($s2)
    ctx->pc = 0x20f478u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 718)));
    // 0x20f47c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x20f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f480: 0x1000041e  b           . + 4 + (0x41E << 2)
    ctx->pc = 0x20F480u;
    {
        const bool branch_taken_0x20f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F480u;
        // 0x20f484: 0xa64202ce  sh          $v0, 0x2CE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 718), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f480) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F488u;
label_20f488:
    // 0x20f488: 0x1000041c  b           . + 4 + (0x41C << 2)
    ctx->pc = 0x20F488u;
    {
        const bool branch_taken_0x20f488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F488u;
        // 0x20f48c: 0xa63002d0  sh          $s0, 0x2D0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 720), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f488) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F490u;
label_20f490:
    // 0x20f490: 0x962202d0  lhu         $v0, 0x2D0($s1)
    ctx->pc = 0x20f490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x20f494: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20f498: 0x10000418  b           . + 4 + (0x418 << 2)
    ctx->pc = 0x20F498u;
    {
        const bool branch_taken_0x20f498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F498u;
        // 0x20f49c: 0xa62202d0  sh          $v0, 0x2D0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 720), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f498) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F4A0u;
label_20f4a0:
    // 0x20f4a0: 0x962202d0  lhu         $v0, 0x2D0($s1)
    ctx->pc = 0x20f4a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x20f4a4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x20f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f4a8: 0x10000414  b           . + 4 + (0x414 << 2)
    ctx->pc = 0x20F4A8u;
    {
        const bool branch_taken_0x20f4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4A8u;
        // 0x20f4ac: 0xa62202d0  sh          $v0, 0x2D0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 720), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4a8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F4B0u;
label_20f4b0:
    // 0x20f4b0: 0x962202d0  lhu         $v0, 0x2D0($s1)
    ctx->pc = 0x20f4b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x20f4b4: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x20f4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x20f4b8: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x20F4B8u;
    {
        const bool branch_taken_0x20f4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4B8u;
        // 0x20f4bc: 0xa62202d0  sh          $v0, 0x2D0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 720), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4b8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F4C0u;
label_20f4c0:
    // 0x20f4c0: 0x962202d0  lhu         $v0, 0x2D0($s1)
    ctx->pc = 0x20f4c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x20f4c4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x20f4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x20f4c8: 0x1000040c  b           . + 4 + (0x40C << 2)
    ctx->pc = 0x20F4C8u;
    {
        const bool branch_taken_0x20f4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4C8u;
        // 0x20f4cc: 0xa62202d0  sh          $v0, 0x2D0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 720), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4c8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F4D0u;
label_20f4d0:
    // 0x20f4d0: 0x1000040a  b           . + 4 + (0x40A << 2)
    ctx->pc = 0x20F4D0u;
    {
        const bool branch_taken_0x20f4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4D0u;
        // 0x20f4d4: 0xa63002d2  sh          $s0, 0x2D2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 722), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4d0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F4D8u;
label_20f4d8:
    // 0x20f4d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20F4D8u;
    {
        const bool branch_taken_0x20f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4D8u;
        // 0x20f4dc: 0x962202d2  lhu         $v0, 0x2D2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 722)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4d8) {
            ctx->pc = 0x20F504u;
            goto label_20f504;
        }
    }
    ctx->pc = 0x20F4E0u;
label_20f4e0:
    // 0x20f4e0: 0x962202d2  lhu         $v0, 0x2D2($s1)
    ctx->pc = 0x20f4e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 722)));
    // 0x20f4e4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x20f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f4e8: 0x10000404  b           . + 4 + (0x404 << 2)
    ctx->pc = 0x20F4E8u;
    {
        const bool branch_taken_0x20f4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4E8u;
        // 0x20f4ec: 0xa62202d2  sh          $v0, 0x2D2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 722), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4e8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F4F0u;
label_20f4f0:
    // 0x20f4f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20F4F0u;
    {
        const bool branch_taken_0x20f4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4F0u;
        // 0x20f4f4: 0x9622009e  lhu         $v0, 0x9E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 158)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4f0) {
            ctx->pc = 0x20F504u;
            goto label_20f504;
        }
    }
    ctx->pc = 0x20F4F8u;
label_20f4f8:
    // 0x20f4f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20F4F8u;
    {
        const bool branch_taken_0x20f4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4F8u;
        // 0x20f4fc: 0x9622009e  lhu         $v0, 0x9E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 158)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4f8) {
            ctx->pc = 0x20F514u;
            goto label_20f514;
        }
    }
    ctx->pc = 0x20F500u;
label_20f500:
    // 0x20f500: 0x96220096  lhu         $v0, 0x96($s1)
    ctx->pc = 0x20f500u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
label_20f504:
    // 0x20f504: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20f504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20f508: 0x100003fc  b           . + 4 + (0x3FC << 2)
    ctx->pc = 0x20F508u;
    {
        const bool branch_taken_0x20f508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F508u;
        // 0x20f50c: 0xa62202d2  sh          $v0, 0x2D2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 722), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f508) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F510u;
label_20f510:
    // 0x20f510: 0x96220096  lhu         $v0, 0x96($s1)
    ctx->pc = 0x20f510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
label_20f514:
    // 0x20f514: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x20f514u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20f518: 0x100003f8  b           . + 4 + (0x3F8 << 2)
    ctx->pc = 0x20F518u;
    {
        const bool branch_taken_0x20f518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F518u;
        // 0x20f51c: 0xa62202d2  sh          $v0, 0x2D2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 722), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f518) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F520u;
label_20f520:
    // 0x20f520: 0x100003f6  b           . + 4 + (0x3F6 << 2)
    ctx->pc = 0x20F520u;
    {
        const bool branch_taken_0x20f520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F520u;
        // 0x20f524: 0xa63002d4  sh          $s0, 0x2D4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 724), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f520) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F528u;
label_20f528:
    // 0x20f528: 0x962202d4  lhu         $v0, 0x2D4($s1)
    ctx->pc = 0x20f528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 724)));
    // 0x20f52c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20f530: 0x100003f2  b           . + 4 + (0x3F2 << 2)
    ctx->pc = 0x20F530u;
    {
        const bool branch_taken_0x20f530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F530u;
        // 0x20f534: 0xa62202d4  sh          $v0, 0x2D4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 724), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f530) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F538u;
label_20f538:
    // 0x20f538: 0x962202d4  lhu         $v0, 0x2D4($s1)
    ctx->pc = 0x20f538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 724)));
    // 0x20f53c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x20f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f540: 0x100003ee  b           . + 4 + (0x3EE << 2)
    ctx->pc = 0x20F540u;
    {
        const bool branch_taken_0x20f540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F540u;
        // 0x20f544: 0xa62202d4  sh          $v0, 0x2D4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 724), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f540) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F548u;
label_20f548:
    // 0x20f548: 0x100003ec  b           . + 4 + (0x3EC << 2)
    ctx->pc = 0x20F548u;
    {
        const bool branch_taken_0x20f548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F548u;
        // 0x20f54c: 0xa65002d0  sh          $s0, 0x2D0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 720), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f548) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F550u;
label_20f550:
    // 0x20f550: 0x964202d0  lhu         $v0, 0x2D0($s2)
    ctx->pc = 0x20f550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x20f554: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20f554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20f558: 0x100003e8  b           . + 4 + (0x3E8 << 2)
    ctx->pc = 0x20F558u;
    {
        const bool branch_taken_0x20f558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F558u;
        // 0x20f55c: 0xa64202d0  sh          $v0, 0x2D0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 720), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f558) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F560u;
label_20f560:
    // 0x20f560: 0x964202d0  lhu         $v0, 0x2D0($s2)
    ctx->pc = 0x20f560u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x20f564: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x20f564u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f568: 0x100003e4  b           . + 4 + (0x3E4 << 2)
    ctx->pc = 0x20F568u;
    {
        const bool branch_taken_0x20f568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F568u;
        // 0x20f56c: 0xa64202d0  sh          $v0, 0x2D0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 720), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f568) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F570u;
label_20f570:
    // 0x20f570: 0x964202d0  lhu         $v0, 0x2D0($s2)
    ctx->pc = 0x20f570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x20f574: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x20f574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x20f578: 0x100003e0  b           . + 4 + (0x3E0 << 2)
    ctx->pc = 0x20F578u;
    {
        const bool branch_taken_0x20f578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F578u;
        // 0x20f57c: 0xa64202d0  sh          $v0, 0x2D0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 720), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f578) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F580u;
label_20f580:
    // 0x20f580: 0x964202d0  lhu         $v0, 0x2D0($s2)
    ctx->pc = 0x20f580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x20f584: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x20f584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x20f588: 0x100003dc  b           . + 4 + (0x3DC << 2)
    ctx->pc = 0x20F588u;
    {
        const bool branch_taken_0x20f588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F588u;
        // 0x20f58c: 0xa64202d0  sh          $v0, 0x2D0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 720), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f588) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F590u;
label_20f590:
    // 0x20f590: 0x100003da  b           . + 4 + (0x3DA << 2)
    ctx->pc = 0x20F590u;
    {
        const bool branch_taken_0x20f590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F590u;
        // 0x20f594: 0xa2300198  sb          $s0, 0x198($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 408), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f590) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F598u;
label_20f598:
    // 0x20f598: 0x100003d8  b           . + 4 + (0x3D8 << 2)
    ctx->pc = 0x20F598u;
    {
        const bool branch_taken_0x20f598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F598u;
        // 0x20f59c: 0xa63002bc  sh          $s0, 0x2BC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 700), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f598) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F5A0u;
label_20f5a0:
    // 0x20f5a0: 0x100003d6  b           . + 4 + (0x3D6 << 2)
    ctx->pc = 0x20F5A0u;
    {
        const bool branch_taken_0x20f5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5A0u;
        // 0x20f5a4: 0xa63002ba  sh          $s0, 0x2BA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 698), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5a0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F5A8u;
label_20f5a8:
    // 0x20f5a8: 0xa62002b4  sh          $zero, 0x2B4($s1)
    ctx->pc = 0x20f5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 692), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f5ac: 0x100003d3  b           . + 4 + (0x3D3 << 2)
    ctx->pc = 0x20F5ACu;
    {
        const bool branch_taken_0x20f5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5ACu;
        // 0x20f5b0: 0xa62002b2  sh          $zero, 0x2B2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5ac) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F5B4u;
    // 0x20f5b4: 0x0  nop
    ctx->pc = 0x20f5b4u;
    // NOP
label_20f5b8:
    // 0x20f5b8: 0x100003d0  b           . + 4 + (0x3D0 << 2)
    ctx->pc = 0x20F5B8u;
    {
        const bool branch_taken_0x20f5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5B8u;
        // 0x20f5bc: 0xa6300144  sh          $s0, 0x144($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 324), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5b8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F5C0u;
label_20f5c0:
    // 0x20f5c0: 0x100003ce  b           . + 4 + (0x3CE << 2)
    ctx->pc = 0x20F5C0u;
    {
        const bool branch_taken_0x20f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5C0u;
        // 0x20f5c4: 0xa23001a1  sb          $s0, 0x1A1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5c0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F5C8u;
label_20f5c8:
    // 0x20f5c8: 0x100003cc  b           . + 4 + (0x3CC << 2)
    ctx->pc = 0x20F5C8u;
    {
        const bool branch_taken_0x20f5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5C8u;
        // 0x20f5cc: 0xa23001ad  sb          $s0, 0x1AD($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 429), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5c8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F5D0u;
label_20f5d0:
    // 0x20f5d0: 0x100003ca  b           . + 4 + (0x3CA << 2)
    ctx->pc = 0x20F5D0u;
    {
        const bool branch_taken_0x20f5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5D0u;
        // 0x20f5d4: 0xa23001af  sb          $s0, 0x1AF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 431), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5d0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F5D8u;
label_20f5d8:
    // 0x20f5d8: 0x100003c8  b           . + 4 + (0x3C8 << 2)
    ctx->pc = 0x20F5D8u;
    {
        const bool branch_taken_0x20f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5D8u;
        // 0x20f5dc: 0xa23001a2  sb          $s0, 0x1A2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 418), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5d8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F5E0u;
label_20f5e0:
    // 0x20f5e0: 0x1012c2  srl         $v0, $s0, 11
    ctx->pc = 0x20f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 11));
    // 0x20f5e4: 0xae3000cc  sw          $s0, 0xCC($s1)
    ctx->pc = 0x20f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 16));
    // 0x20f5e8: 0x100003c4  b           . + 4 + (0x3C4 << 2)
    ctx->pc = 0x20F5E8u;
    {
        const bool branch_taken_0x20f5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5E8u;
        // 0x20f5ec: 0xa2220185  sb          $v0, 0x185($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 389), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5e8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F5F0u;
label_20f5f0:
    // 0x20f5f0: 0x100003c2  b           . + 4 + (0x3C2 << 2)
    ctx->pc = 0x20F5F0u;
    {
        const bool branch_taken_0x20f5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5F0u;
        // 0x20f5f4: 0xa6300150  sh          $s0, 0x150($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 336), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5f0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F5F8u;
label_20f5f8:
    // 0x20f5f8: 0x100003c0  b           . + 4 + (0x3C0 << 2)
    ctx->pc = 0x20F5F8u;
    {
        const bool branch_taken_0x20f5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5F8u;
        // 0x20f5fc: 0xa628015c  sh          $t0, 0x15C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 348), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5f8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F600u;
label_20f600:
    // 0x20f600: 0x2e020001  sltiu       $v0, $s0, 0x1
    ctx->pc = 0x20f600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x20f604: 0xa24201f6  sb          $v0, 0x1F6($s2)
    ctx->pc = 0x20f604u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 502), (uint8_t)GPR_U32(ctx, 2));
    // 0x20f608: 0x100003bc  b           . + 4 + (0x3BC << 2)
    ctx->pc = 0x20F608u;
    {
        const bool branch_taken_0x20f608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F608u;
        // 0x20f60c: 0xa22201f6  sb          $v0, 0x1F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 502), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f608) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F610u;
label_20f610:
    // 0x20f610: 0x100003ba  b           . + 4 + (0x3BA << 2)
    ctx->pc = 0x20F610u;
    {
        const bool branch_taken_0x20f610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F610u;
        // 0x20f614: 0xa6300174  sh          $s0, 0x174($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 372), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f610) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F618u;
label_20f618:
    // 0x20f618: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F618u;
    {
        const bool branch_taken_0x20f618 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F618u;
        // 0x20f61c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f618) {
            ctx->pc = 0x20F628u;
            goto label_20f628;
        }
    }
    ctx->pc = 0x20F620u;
    // 0x20f620: 0x100003b6  b           . + 4 + (0x3B6 << 2)
    ctx->pc = 0x20F620u;
    {
        const bool branch_taken_0x20f620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F620u;
        // 0x20f624: 0xa22201a4  sb          $v0, 0x1A4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 420), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f620) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F628u;
label_20f628:
    // 0x20f628: 0x100003b4  b           . + 4 + (0x3B4 << 2)
    ctx->pc = 0x20F628u;
    {
        const bool branch_taken_0x20f628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F628u;
        // 0x20f62c: 0xa22001a4  sb          $zero, 0x1A4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 420), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f628) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F630u;
label_20f630:
    // 0x20f630: 0x100003b2  b           . + 4 + (0x3B2 << 2)
    ctx->pc = 0x20F630u;
    {
        const bool branch_taken_0x20f630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F630u;
        // 0x20f634: 0xa23001a3  sb          $s0, 0x1A3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 419), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f630) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F638u;
label_20f638:
    // 0x20f638: 0x100003b0  b           . + 4 + (0x3B0 << 2)
    ctx->pc = 0x20F638u;
    {
        const bool branch_taken_0x20f638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F638u;
        // 0x20f63c: 0xa230019b  sb          $s0, 0x19B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f638) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F640u;
label_20f640:
    // 0x20f640: 0x100003ae  b           . + 4 + (0x3AE << 2)
    ctx->pc = 0x20F640u;
    {
        const bool branch_taken_0x20f640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F640u;
        // 0x20f644: 0xa250019b  sb          $s0, 0x19B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 411), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f640) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F648u;
label_20f648:
    // 0x20f648: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x20f648u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f64c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20f64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20f650: 0xc7818408  lwc1        $f1, -0x7BF8($gp)
    ctx->pc = 0x20f650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f654: 0xc782840c  lwc1        $f2, -0x7BF4($gp)
    ctx->pc = 0x20f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20f658: 0x9622007a  lhu         $v0, 0x7A($s1)
    ctx->pc = 0x20f658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x20f65c: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x20f65cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x20f660: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20f660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x20f664: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x20f664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20f668: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x20f668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x20f66c: 0xa622007a  sh          $v0, 0x7A($s1)
    ctx->pc = 0x20f66cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x20f670: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20f670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20f674: 0x0  nop
    ctx->pc = 0x20f674u;
    // NOP
    // 0x20f678: 0x0  nop
    ctx->pc = 0x20f678u;
    // NOP
    // 0x20f67c: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x20f67cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x20f680: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x20f680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f684: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20F684u;
    {
        const bool branch_taken_0x20f684 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F684u;
        // 0x20f688: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f684) {
            ctx->pc = 0x20F698u;
            goto label_20f698;
        }
    }
    ctx->pc = 0x20F68Cu;
    // 0x20f68c: 0xc7808410  lwc1        $f0, -0x7BF0($gp)
    ctx->pc = 0x20f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f690: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20F690u;
    {
        const bool branch_taken_0x20f690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F690u;
        // 0x20f694: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f690) {
            ctx->pc = 0x20F6B0u;
            goto label_20f6b0;
        }
    }
    ctx->pc = 0x20F698u;
label_20f698:
    // 0x20f698: 0xc7808414  lwc1        $f0, -0x7BEC($gp)
    ctx->pc = 0x20f698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f69c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20f69cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f6a0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x20F6A0u;
    {
        const bool branch_taken_0x20f6a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f6a0) {
            ctx->pc = 0x20F6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F6A0u;
            // 0x20f6a4: 0xc6200020  lwc1        $f0, 0x20($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F6B4u;
            goto label_20f6b4;
        }
    }
    ctx->pc = 0x20F6A8u;
    // 0x20f6a8: 0xc7808418  lwc1        $f0, -0x7BE8($gp)
    ctx->pc = 0x20f6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f6ac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x20f6acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20f6b0:
    // 0x20f6b0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x20f6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f6b4:
    // 0x20f6b4: 0xc781841c  lwc1        $f1, -0x7BE4($gp)
    ctx->pc = 0x20f6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f6b8: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x20f6b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20f6bc: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x20f6bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f6c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20F6C0u;
    {
        const bool branch_taken_0x20f6c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f6c0) {
            ctx->pc = 0x20F6D8u;
            goto label_20f6d8;
        }
    }
    ctx->pc = 0x20F6C8u;
    // 0x20f6c8: 0xc7808420  lwc1        $f0, -0x7BE0($gp)
    ctx->pc = 0x20f6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f6cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20F6CCu;
    {
        const bool branch_taken_0x20f6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6CCu;
        // 0x20f6d0: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f6cc) {
            ctx->pc = 0x20F6F0u;
            goto label_20f6f0;
        }
    }
    ctx->pc = 0x20F6D4u;
    // 0x20f6d4: 0x0  nop
    ctx->pc = 0x20f6d4u;
    // NOP
label_20f6d8:
    // 0x20f6d8: 0xc7808424  lwc1        $f0, -0x7BDC($gp)
    ctx->pc = 0x20f6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f6dc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20f6dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f6e0: 0x45020386  bc1fl       . + 4 + (0x386 << 2)
    ctx->pc = 0x20F6E0u;
    {
        const bool branch_taken_0x20f6e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f6e0) {
            ctx->pc = 0x20F6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F6E0u;
            // 0x20f6e4: 0xe6220020  swc1        $f2, 0x20($s1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F6E8u;
    // 0x20f6e8: 0xc7808428  lwc1        $f0, -0x7BD8($gp)
    ctx->pc = 0x20f6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f6ec: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x20f6ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20f6f0:
    // 0x20f6f0: 0x10000382  b           . + 4 + (0x382 << 2)
    ctx->pc = 0x20F6F0u;
    {
        const bool branch_taken_0x20f6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6F0u;
        // 0x20f6f4: 0xe6220020  swc1        $f2, 0x20($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f6f0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F6F8u;
label_20f6f8:
    // 0x20f6f8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x20f6f8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f6fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20f6fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20f700: 0xc781842c  lwc1        $f1, -0x7BD4($gp)
    ctx->pc = 0x20f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f704: 0xc7828430  lwc1        $f2, -0x7BD0($gp)
    ctx->pc = 0x20f704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20f708: 0x9642007a  lhu         $v0, 0x7A($s2)
    ctx->pc = 0x20f708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x20f70c: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x20f70cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x20f710: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20f710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x20f714: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x20f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20f718: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x20f718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x20f71c: 0xa642007a  sh          $v0, 0x7A($s2)
    ctx->pc = 0x20f71cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x20f720: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20f720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20f724: 0x0  nop
    ctx->pc = 0x20f724u;
    // NOP
    // 0x20f728: 0x0  nop
    ctx->pc = 0x20f728u;
    // NOP
    // 0x20f72c: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x20f72cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x20f730: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x20f730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f734: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20F734u;
    {
        const bool branch_taken_0x20f734 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F734u;
        // 0x20f738: 0xa643000e  sh          $v1, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f734) {
            ctx->pc = 0x20F748u;
            goto label_20f748;
        }
    }
    ctx->pc = 0x20F73Cu;
    // 0x20f73c: 0xc7808434  lwc1        $f0, -0x7BCC($gp)
    ctx->pc = 0x20f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f740: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20F740u;
    {
        const bool branch_taken_0x20f740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F740u;
        // 0x20f744: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f740) {
            ctx->pc = 0x20F760u;
            goto label_20f760;
        }
    }
    ctx->pc = 0x20F748u;
label_20f748:
    // 0x20f748: 0xc7808438  lwc1        $f0, -0x7BC8($gp)
    ctx->pc = 0x20f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f74c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20f74cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f750: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x20F750u;
    {
        const bool branch_taken_0x20f750 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f750) {
            ctx->pc = 0x20F754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F750u;
            // 0x20f754: 0xc6400020  lwc1        $f0, 0x20($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F764u;
            goto label_20f764;
        }
    }
    ctx->pc = 0x20F758u;
    // 0x20f758: 0xc780843c  lwc1        $f0, -0x7BC4($gp)
    ctx->pc = 0x20f758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f75c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x20f75cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20f760:
    // 0x20f760: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x20f760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f764:
    // 0x20f764: 0xc7818440  lwc1        $f1, -0x7BC0($gp)
    ctx->pc = 0x20f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f768: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x20f768u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20f76c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x20f76cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f770: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20F770u;
    {
        const bool branch_taken_0x20f770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f770) {
            ctx->pc = 0x20F788u;
            goto label_20f788;
        }
    }
    ctx->pc = 0x20F778u;
    // 0x20f778: 0xc7808444  lwc1        $f0, -0x7BBC($gp)
    ctx->pc = 0x20f778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f77c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20F77Cu;
    {
        const bool branch_taken_0x20f77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F77Cu;
        // 0x20f780: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f77c) {
            ctx->pc = 0x20F7A0u;
            goto label_20f7a0;
        }
    }
    ctx->pc = 0x20F784u;
    // 0x20f784: 0x0  nop
    ctx->pc = 0x20f784u;
    // NOP
label_20f788:
    // 0x20f788: 0xc7808448  lwc1        $f0, -0x7BB8($gp)
    ctx->pc = 0x20f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f78c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20f78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f790: 0x4502035a  bc1fl       . + 4 + (0x35A << 2)
    ctx->pc = 0x20F790u;
    {
        const bool branch_taken_0x20f790 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f790) {
            ctx->pc = 0x20F794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F790u;
            // 0x20f794: 0xe6420020  swc1        $f2, 0x20($s2) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F798u;
    // 0x20f798: 0xc780844c  lwc1        $f0, -0x7BB4($gp)
    ctx->pc = 0x20f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f79c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x20f79cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20f7a0:
    // 0x20f7a0: 0x10000356  b           . + 4 + (0x356 << 2)
    ctx->pc = 0x20F7A0u;
    {
        const bool branch_taken_0x20f7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7A0u;
        // 0x20f7a4: 0xe6420020  swc1        $f2, 0x20($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7a0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F7A8u;
label_20f7a8:
    // 0x20f7a8: 0x10000354  b           . + 4 + (0x354 << 2)
    ctx->pc = 0x20F7A8u;
    {
        const bool branch_taken_0x20f7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7A8u;
        // 0x20f7ac: 0xa630016a  sh          $s0, 0x16A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 362), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7a8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F7B0u;
label_20f7b0:
    // 0x20f7b0: 0x10000352  b           . + 4 + (0x352 << 2)
    ctx->pc = 0x20F7B0u;
    {
        const bool branch_taken_0x20f7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7B0u;
        // 0x20f7b4: 0xa628016c  sh          $t0, 0x16C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 364), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7b0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F7B8u;
label_20f7b8:
    // 0x20f7b8: 0x10000350  b           . + 4 + (0x350 << 2)
    ctx->pc = 0x20F7B8u;
    {
        const bool branch_taken_0x20f7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7B8u;
        // 0x20f7bc: 0xa23001a7  sb          $s0, 0x1A7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 423), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7b8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F7C0u;
label_20f7c0:
    // 0x20f7c0: 0x1000034e  b           . + 4 + (0x34E << 2)
    ctx->pc = 0x20F7C0u;
    {
        const bool branch_taken_0x20f7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7C0u;
        // 0x20f7c4: 0xa23001a8  sb          $s0, 0x1A8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 424), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7c0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F7C8u;
label_20f7c8:
    // 0x20f7c8: 0x1000034c  b           . + 4 + (0x34C << 2)
    ctx->pc = 0x20F7C8u;
    {
        const bool branch_taken_0x20f7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7C8u;
        // 0x20f7cc: 0xa23001a9  sb          $s0, 0x1A9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 425), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7c8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F7D0u;
label_20f7d0:
    // 0x20f7d0: 0x1000034a  b           . + 4 + (0x34A << 2)
    ctx->pc = 0x20F7D0u;
    {
        const bool branch_taken_0x20f7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7D0u;
        // 0x20f7d4: 0xa23001aa  sb          $s0, 0x1AA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 426), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7d0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F7D8u;
label_20f7d8:
    // 0x20f7d8: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x20f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20f7dc: 0xc7808450  lwc1        $f0, -0x7BB0($gp)
    ctx->pc = 0x20f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f7e0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20f7e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f7e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20F7E4u;
    {
        const bool branch_taken_0x20f7e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7E4u;
        // 0x20f7e8: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7e4) {
            ctx->pc = 0x20F7F8u;
            goto label_20f7f8;
        }
    }
    ctx->pc = 0x20F7ECu;
    // 0x20f7ec: 0xc7808454  lwc1        $f0, -0x7BAC($gp)
    ctx->pc = 0x20f7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f7f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20F7F0u;
    {
        const bool branch_taken_0x20f7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7F0u;
        // 0x20f7f4: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7f0) {
            ctx->pc = 0x20F810u;
            goto label_20f810;
        }
    }
    ctx->pc = 0x20F7F8u;
label_20f7f8:
    // 0x20f7f8: 0xc7808458  lwc1        $f0, -0x7BA8($gp)
    ctx->pc = 0x20f7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f7fc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20f7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f800: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20F800u;
    {
        const bool branch_taken_0x20f800 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f800) {
            ctx->pc = 0x20F810u;
            goto label_20f810;
        }
    }
    ctx->pc = 0x20F808u;
    // 0x20f808: 0xc780845c  lwc1        $f0, -0x7BA4($gp)
    ctx->pc = 0x20f808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f80c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x20f80cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20f810:
    // 0x20f810: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f814: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x20f814u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x20f818: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20f818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f81c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20F81Cu;
    {
        const bool branch_taken_0x20f81c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f81c) {
            ctx->pc = 0x20F82Cu;
            goto label_20f82c;
        }
    }
    ctx->pc = 0x20F824u;
    // 0x20f824: 0xc7808460  lwc1        $f0, -0x7BA0($gp)
    ctx->pc = 0x20f824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f828: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x20f828u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20f82c:
    // 0x20f82c: 0xc7808464  lwc1        $f0, -0x7B9C($gp)
    ctx->pc = 0x20f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f830: 0xc7818468  lwc1        $f1, -0x7B98($gp)
    ctx->pc = 0x20f830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f834: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x20f834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x20f838: 0x0  nop
    ctx->pc = 0x20f838u;
    // NOP
    // 0x20f83c: 0x0  nop
    ctx->pc = 0x20f83cu;
    // NOP
    // 0x20f840: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x20f840u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x20f844: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20f844u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20f848: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x20f848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20f84c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x20f850: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x20f850u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20f854: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20f854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f858: 0x10000328  b           . + 4 + (0x328 << 2)
    ctx->pc = 0x20F858u;
    {
        const bool branch_taken_0x20f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F858u;
        // 0x20f85c: 0xa62202aa  sh          $v0, 0x2AA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 682), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f858) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F860u;
label_20f860:
    // 0x20f860: 0x10000326  b           . + 4 + (0x326 << 2)
    ctx->pc = 0x20F860u;
    {
        const bool branch_taken_0x20f860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F860u;
        // 0x20f864: 0xa23001ac  sb          $s0, 0x1AC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 428), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f860) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F868u;
label_20f868:
    // 0x20f868: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F868u;
    {
        const bool branch_taken_0x20f868 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F868u;
        // 0x20f86c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f868) {
            ctx->pc = 0x20F880u;
            goto label_20f880;
        }
    }
    ctx->pc = 0x20F870u;
    // 0x20f870: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x20f870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x20f874: 0x10000321  b           . + 4 + (0x321 << 2)
    ctx->pc = 0x20F874u;
    {
        const bool branch_taken_0x20f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F874u;
        // 0x20f878: 0xa6220164  sh          $v0, 0x164($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 356), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f874) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F87Cu;
    // 0x20f87c: 0x0  nop
    ctx->pc = 0x20f87cu;
    // NOP
label_20f880:
    // 0x20f880: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F880u;
    {
        const bool branch_taken_0x20f880 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F880u;
        // 0x20f884: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f880) {
            ctx->pc = 0x20F898u;
            goto label_20f898;
        }
    }
    ctx->pc = 0x20F888u;
    // 0x20f888: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x20f888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x20f88c: 0x1000031b  b           . + 4 + (0x31B << 2)
    ctx->pc = 0x20F88Cu;
    {
        const bool branch_taken_0x20f88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F88Cu;
        // 0x20f890: 0xa6220164  sh          $v0, 0x164($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 356), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f88c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F894u;
    // 0x20f894: 0x0  nop
    ctx->pc = 0x20f894u;
    // NOP
label_20f898:
    // 0x20f898: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F898u;
    {
        const bool branch_taken_0x20f898 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F898u;
        // 0x20f89c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f898) {
            ctx->pc = 0x20F8B0u;
            goto label_20f8b0;
        }
    }
    ctx->pc = 0x20F8A0u;
    // 0x20f8a0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x20f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20f8a4: 0x10000315  b           . + 4 + (0x315 << 2)
    ctx->pc = 0x20F8A4u;
    {
        const bool branch_taken_0x20f8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8A4u;
        // 0x20f8a8: 0xa6220164  sh          $v0, 0x164($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 356), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8a4) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F8ACu;
    // 0x20f8ac: 0x0  nop
    ctx->pc = 0x20f8acu;
    // NOP
label_20f8b0:
    // 0x20f8b0: 0x52020312  beql        $s0, $v0, . + 4 + (0x312 << 2)
    ctx->pc = 0x20F8B0u;
    {
        const bool branch_taken_0x20f8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x20f8b0) {
            ctx->pc = 0x20F8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F8B0u;
            // 0x20f8b4: 0xa6200164  sh          $zero, 0x164($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 356), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F8B8u;
    // 0x20f8b8: 0x10000311  b           . + 4 + (0x311 << 2)
    ctx->pc = 0x20F8B8u;
    {
        const bool branch_taken_0x20f8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8B8u;
        // 0x20f8bc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8b8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F8C0u;
label_20f8c0:
    // 0x20f8c0: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x20F8C0u;
    {
        const bool branch_taken_0x20f8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8C0u;
        // 0x20f8c4: 0xa6300302  sh          $s0, 0x302($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 770), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8c0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F8C8u;
label_20f8c8:
    // 0x20f8c8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20F8C8u;
    {
        const bool branch_taken_0x20f8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8C8u;
        // 0x20f8cc: 0x96220096  lhu         $v0, 0x96($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8c8) {
            ctx->pc = 0x20F93Cu;
            goto label_20f93c;
        }
    }
    ctx->pc = 0x20F8D0u;
label_20f8d0:
    // 0x20f8d0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20F8D0u;
    {
        const bool branch_taken_0x20f8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8D0u;
        // 0x20f8d4: 0x96220096  lhu         $v0, 0x96($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8d0) {
            ctx->pc = 0x20F94Cu;
            goto label_20f94c;
        }
    }
    ctx->pc = 0x20F8D8u;
label_20f8d8:
    // 0x20f8d8: 0x26021000  addiu       $v0, $s0, 0x1000
    ctx->pc = 0x20f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
    // 0x20f8dc: 0x10000307  b           . + 4 + (0x307 << 2)
    ctx->pc = 0x20F8DCu;
    {
        const bool branch_taken_0x20f8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8DCu;
        // 0x20f8e0: 0xa6220302  sh          $v0, 0x302($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 770), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8dc) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F8E4u;
    // 0x20f8e4: 0x0  nop
    ctx->pc = 0x20f8e4u;
    // NOP
label_20f8e8:
    // 0x20f8e8: 0x26022000  addiu       $v0, $s0, 0x2000
    ctx->pc = 0x20f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x20f8ec: 0x10000303  b           . + 4 + (0x303 << 2)
    ctx->pc = 0x20F8ECu;
    {
        const bool branch_taken_0x20f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8ECu;
        // 0x20f8f0: 0xa6220302  sh          $v0, 0x302($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 770), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8ec) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F8F4u;
    // 0x20f8f4: 0x0  nop
    ctx->pc = 0x20f8f4u;
    // NOP
label_20f8f8:
    // 0x20f8f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f8fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f900: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20f900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f904: 0xc09ee1c  jal         func_27B870
    ctx->pc = 0x20F904u;
    SET_GPR_U32(ctx, 31, 0x20F90Cu);
    ctx->pc = 0x20F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F904u;
    // 0x20f908: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B870u, 0x20F904u, 0x20F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F90Cu;
label_20f90c:
    // 0x20f90c: 0x100002fc  b           . + 4 + (0x2FC << 2)
    ctx->pc = 0x20F90Cu;
    {
        const bool branch_taken_0x20f90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F90Cu;
        // 0x20f910: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f90c) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F914u;
    // 0x20f914: 0x0  nop
    ctx->pc = 0x20f914u;
    // NOP
label_20f918:
    // 0x20f918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f91c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f920: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20f920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f924: 0xc09ee1c  jal         func_27B870
    ctx->pc = 0x20F924u;
    SET_GPR_U32(ctx, 31, 0x20F92Cu);
    ctx->pc = 0x20F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F924u;
    // 0x20f928: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B870u, 0x20F924u, 0x20F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F92Cu;
label_20f92c:
    // 0x20f92c: 0x100002f4  b           . + 4 + (0x2F4 << 2)
    ctx->pc = 0x20F92Cu;
    {
        const bool branch_taken_0x20f92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F92Cu;
        // 0x20f930: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f92c) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20F934u;
    // 0x20f934: 0x0  nop
    ctx->pc = 0x20f934u;
    // NOP
label_20f938:
    // 0x20f938: 0x9622009e  lhu         $v0, 0x9E($s1)
    ctx->pc = 0x20f938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 158)));
label_20f93c:
    // 0x20f93c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20f940: 0x100002ee  b           . + 4 + (0x2EE << 2)
    ctx->pc = 0x20F940u;
    {
        const bool branch_taken_0x20f940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F940u;
        // 0x20f944: 0xa6220302  sh          $v0, 0x302($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 770), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f940) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F948u;
label_20f948:
    // 0x20f948: 0x9622009e  lhu         $v0, 0x9E($s1)
    ctx->pc = 0x20f948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 158)));
label_20f94c:
    // 0x20f94c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x20f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f950: 0x100002ea  b           . + 4 + (0x2EA << 2)
    ctx->pc = 0x20F950u;
    {
        const bool branch_taken_0x20f950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F950u;
        // 0x20f954: 0xa6220302  sh          $v0, 0x302($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 770), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f950) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F958u;
label_20f958:
    // 0x20f958: 0x26024000  addiu       $v0, $s0, 0x4000
    ctx->pc = 0x20f958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16384));
    // 0x20f95c: 0x100002e7  b           . + 4 + (0x2E7 << 2)
    ctx->pc = 0x20F95Cu;
    {
        const bool branch_taken_0x20f95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F95Cu;
        // 0x20f960: 0xa6220302  sh          $v0, 0x302($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 770), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f95c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F964u;
    // 0x20f964: 0x0  nop
    ctx->pc = 0x20f964u;
    // NOP
label_20f968:
    // 0x20f968: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x20f968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x20f96c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f970: 0x100002e2  b           . + 4 + (0x2E2 << 2)
    ctx->pc = 0x20F970u;
    {
        const bool branch_taken_0x20f970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F970u;
        // 0x20f974: 0xa6220302  sh          $v0, 0x302($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 770), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f970) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F978u;
label_20f978:
    // 0x20f978: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x20F978u;
    SET_GPR_U32(ctx, 31, 0x20F980u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x20F978u, 0x20F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F980u;
label_20f980:
    // 0x20f980: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x20f980u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20f984: 0x1810  mfhi        $v1
    ctx->pc = 0x20f984u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20f988: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x20f988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x20f98c: 0x144002db  bnez        $v0, . + 4 + (0x2DB << 2)
    ctx->pc = 0x20F98Cu;
    {
        const bool branch_taken_0x20f98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F98Cu;
        // 0x20f990: 0xa6230302  sh          $v1, 0x302($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 770), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f98c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F994u;
    // 0x20f994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f998: 0x100002d8  b           . + 4 + (0x2D8 << 2)
    ctx->pc = 0x20F998u;
    {
        const bool branch_taken_0x20f998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F998u;
        // 0x20f99c: 0xa6220302  sh          $v0, 0x302($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 770), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f998) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F9A0u;
label_20f9a0:
    // 0x20f9a0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x20F9A0u;
    SET_GPR_U32(ctx, 31, 0x20F9A8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x20F9A0u, 0x20F9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9A8u;
label_20f9a8:
    // 0x20f9a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20F9A8u;
    {
        const bool branch_taken_0x20f9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9A8u;
        // 0x20f9ac: 0x96230096  lhu         $v1, 0x96($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f9a8) {
            ctx->pc = 0x20F9BCu;
            goto label_20f9bc;
        }
    }
    ctx->pc = 0x20F9B0u;
label_20f9b0:
    // 0x20f9b0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x20F9B0u;
    SET_GPR_U32(ctx, 31, 0x20F9B8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x20F9B0u, 0x20F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9B8u;
label_20f9b8:
    // 0x20f9b8: 0x9623009e  lhu         $v1, 0x9E($s1)
    ctx->pc = 0x20f9b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 158)));
label_20f9bc:
    // 0x20f9bc: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x20f9bcu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20f9c0: 0x2010  mfhi        $a0
    ctx->pc = 0x20f9c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20f9c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20f9c8: 0x100002cc  b           . + 4 + (0x2CC << 2)
    ctx->pc = 0x20F9C8u;
    {
        const bool branch_taken_0x20f9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9C8u;
        // 0x20f9cc: 0xa6230302  sh          $v1, 0x302($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 770), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f9c8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20F9D0u;
label_20f9d0:
    // 0x20f9d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20f9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9d4: 0xc09905e  jal         func_264178
    ctx->pc = 0x20F9D4u;
    SET_GPR_U32(ctx, 31, 0x20F9DCu);
    ctx->pc = 0x20F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F9D4u;
    // 0x20f9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x20F9D4u, 0x20F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9DCu;
label_20f9dc:
    // 0x20f9dc: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x20f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x20f9e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20f9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9e4: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x20f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20f9e8: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x20f9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x20f9ec: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20f9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20f9f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20f9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9f4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20F9F4u;
    {
        const bool branch_taken_0x20f9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9F4u;
        // 0x20f9f8: 0x8ca60004  lw          $a2, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f9f4) {
            ctx->pc = 0x20FA60u;
            goto label_20fa60;
        }
    }
    ctx->pc = 0x20F9FCu;
    // 0x20f9fc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x20f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_20fa00:
    // 0x20fa00: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x20fa00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x20fa04: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x20fa04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x20fa08: 0x6869000f  ldl         $t1, 0xF($v1)
    ctx->pc = 0x20fa08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x20fa0c: 0x6c690008  ldr         $t1, 0x8($v1)
    ctx->pc = 0x20fa0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x20fa10: 0x686a0017  ldl         $t2, 0x17($v1)
    ctx->pc = 0x20fa10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x20fa14: 0x6c6a0010  ldr         $t2, 0x10($v1)
    ctx->pc = 0x20fa14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x20fa18: 0x686b001f  ldl         $t3, 0x1F($v1)
    ctx->pc = 0x20fa18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x20fa1c: 0x6c6b0018  ldr         $t3, 0x18($v1)
    ctx->pc = 0x20fa1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x20fa20: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x20fa20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20fa24: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x20fa24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20fa28: 0xb089000f  sdl         $t1, 0xF($a0)
    ctx->pc = 0x20fa28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20fa2c: 0xb4890008  sdr         $t1, 0x8($a0)
    ctx->pc = 0x20fa2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20fa30: 0xb08a0017  sdl         $t2, 0x17($a0)
    ctx->pc = 0x20fa30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20fa34: 0xb48a0010  sdr         $t2, 0x10($a0)
    ctx->pc = 0x20fa34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20fa38: 0xb08b001f  sdl         $t3, 0x1F($a0)
    ctx->pc = 0x20fa38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20fa3c: 0xb48b0018  sdr         $t3, 0x18($a0)
    ctx->pc = 0x20fa3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20fa40: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20fa44: 0x0  nop
    ctx->pc = 0x20fa44u;
    // NOP
    // 0x20fa48: 0x0  nop
    ctx->pc = 0x20fa48u;
    // NOP
    // 0x20fa4c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x20FA4Cu;
    {
        const bool branch_taken_0x20fa4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA4Cu;
        // 0x20fa50: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa4c) {
            ctx->pc = 0x20FA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fa00;
        }
    }
    ctx->pc = 0x20FA54u;
    // 0x20fa54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20FA54u;
    {
        const bool branch_taken_0x20fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fa54) {
            ctx->pc = 0x20FA98u;
            goto label_20fa98;
        }
    }
    ctx->pc = 0x20FA5Cu;
    // 0x20fa5c: 0x0  nop
    ctx->pc = 0x20fa5cu;
    // NOP
label_20fa60:
    // 0x20fa60: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x20fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_20fa64:
    // 0x20fa64: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x20fa64u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fa68: 0xdc690008  ld          $t1, 0x8($v1)
    ctx->pc = 0x20fa68u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20fa6c: 0xdc6a0010  ld          $t2, 0x10($v1)
    ctx->pc = 0x20fa6cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20fa70: 0xdc6b0018  ld          $t3, 0x18($v1)
    ctx->pc = 0x20fa70u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x20fa74: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x20fa74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x20fa78: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x20fa78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x20fa7c: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x20fa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x20fa80: 0xfc8b0018  sd          $t3, 0x18($a0)
    ctx->pc = 0x20fa80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 11));
    // 0x20fa84: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20fa88: 0x0  nop
    ctx->pc = 0x20fa88u;
    // NOP
    // 0x20fa8c: 0x0  nop
    ctx->pc = 0x20fa8cu;
    // NOP
    // 0x20fa90: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20FA90u;
    {
        const bool branch_taken_0x20fa90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA90u;
        // 0x20fa94: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa90) {
            ctx->pc = 0x20FA64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fa64;
        }
    }
    ctx->pc = 0x20FA98u;
label_20fa98:
    // 0x20fa98: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x20fa98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x20fa9c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x20fa9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x20faa0: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x20faa0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20faa4: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x20faa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20faa8: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x20faa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20faac: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x20faacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x20fab0: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x20fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x20fab4: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x20fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x20fab8: 0xae2500c0  sw          $a1, 0xC0($s1)
    ctx->pc = 0x20fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 5));
    // 0x20fabc: 0x1000028f  b           . + 4 + (0x28F << 2)
    ctx->pc = 0x20FABCu;
    {
        const bool branch_taken_0x20fabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FABCu;
        // 0x20fac0: 0xae2500c4  sw          $a1, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fabc) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FAC4u;
    // 0x20fac4: 0x0  nop
    ctx->pc = 0x20fac4u;
    // NOP
label_20fac8:
    // 0x20fac8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20fac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20facc: 0xc09905e  jal         func_264178
    ctx->pc = 0x20FACCu;
    SET_GPR_U32(ctx, 31, 0x20FAD4u);
    ctx->pc = 0x20FAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FACCu;
    // 0x20fad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x20FACCu, 0x20FAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FAD4u;
label_20fad4:
    // 0x20fad4: 0x92230096  lbu         $v1, 0x96($s1)
    ctx->pc = 0x20fad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x20fad8: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x20fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
    // 0x20fadc: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x20FADCu;
    {
        const bool branch_taken_0x20fadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FADCu;
        // 0x20fae0: 0xa2230195  sb          $v1, 0x195($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 405), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fadc) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FAE4u;
    // 0x20fae4: 0x0  nop
    ctx->pc = 0x20fae4u;
    // NOP
label_20fae8:
    // 0x20fae8: 0x10000284  b           . + 4 + (0x284 << 2)
    ctx->pc = 0x20FAE8u;
    {
        const bool branch_taken_0x20fae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAE8u;
        // 0x20faec: 0xa2300193  sb          $s0, 0x193($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 403), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fae8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FAF0u;
label_20faf0:
    // 0x20faf0: 0x10000282  b           . + 4 + (0x282 << 2)
    ctx->pc = 0x20FAF0u;
    {
        const bool branch_taken_0x20faf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAF0u;
        // 0x20faf4: 0xa2300194  sb          $s0, 0x194($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 404), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20faf0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FAF8u;
label_20faf8:
    // 0x20faf8: 0x10000280  b           . + 4 + (0x280 << 2)
    ctx->pc = 0x20FAF8u;
    {
        const bool branch_taken_0x20faf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAF8u;
        // 0x20fafc: 0xa630016e  sh          $s0, 0x16E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 366), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20faf8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FB00u;
label_20fb00:
    // 0x20fb00: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x20fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x20fb04: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x20fb04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x20fb08: 0x5440027c  bnel        $v0, $zero, . + 4 + (0x27C << 2)
    ctx->pc = 0x20FB08u;
    {
        const bool branch_taken_0x20fb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fb08) {
            ctx->pc = 0x20FB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FB08u;
            // 0x20fb0c: 0xae2300d0  sw          $v1, 0xD0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FB10u;
    // 0x20fb10: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x20fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x20fb14: 0x102182a  slt         $v1, $t0, $v0
    ctx->pc = 0x20fb14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20fb18: 0x103100a  movz        $v0, $t0, $v1
    ctx->pc = 0x20fb18u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x20fb1c: 0x10000277  b           . + 4 + (0x277 << 2)
    ctx->pc = 0x20FB1Cu;
    {
        const bool branch_taken_0x20fb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB1Cu;
        // 0x20fb20: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb1c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FB24u;
    // 0x20fb24: 0x0  nop
    ctx->pc = 0x20fb24u;
    // NOP
label_20fb28:
    // 0x20fb28: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x20fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x20fb2c: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x20fb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x20fb30: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x20fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20fb34: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x20fb34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20fb38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20FB38u;
    {
        const bool branch_taken_0x20fb38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB38u;
        // 0x20fb3c: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb38) {
            ctx->pc = 0x20FB48u;
            goto label_20fb48;
        }
    }
    ctx->pc = 0x20FB40u;
    // 0x20fb40: 0x1000026e  b           . + 4 + (0x26E << 2)
    ctx->pc = 0x20FB40u;
    {
        const bool branch_taken_0x20fb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB40u;
        // 0x20fb44: 0xae2400d0  sw          $a0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb40) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FB48u;
label_20fb48:
    // 0x20fb48: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x20fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x20fb4c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20fb4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20fb50: 0x1040026b  beqz        $v0, . + 4 + (0x26B << 2)
    ctx->pc = 0x20FB50u;
    {
        const bool branch_taken_0x20fb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB50u;
        // 0x20fb54: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb50) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20FB58u;
    // 0x20fb58: 0x10000269  b           . + 4 + (0x269 << 2)
    ctx->pc = 0x20FB58u;
    {
        const bool branch_taken_0x20fb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB58u;
        // 0x20fb5c: 0xae2300d0  sw          $v1, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb58) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20FB60u;
label_20fb60:
    // 0x20fb60: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x20fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x20fb64: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x20fb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x20fb68: 0x54400264  bnel        $v0, $zero, . + 4 + (0x264 << 2)
    ctx->pc = 0x20FB68u;
    {
        const bool branch_taken_0x20fb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fb68) {
            ctx->pc = 0x20FB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FB68u;
            // 0x20fb6c: 0xae4300d0  sw          $v1, 0xD0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FB70u;
    // 0x20fb70: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x20fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x20fb74: 0x102182a  slt         $v1, $t0, $v0
    ctx->pc = 0x20fb74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20fb78: 0x103100a  movz        $v0, $t0, $v1
    ctx->pc = 0x20fb78u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x20fb7c: 0x1000025f  b           . + 4 + (0x25F << 2)
    ctx->pc = 0x20FB7Cu;
    {
        const bool branch_taken_0x20fb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB7Cu;
        // 0x20fb80: 0xae4200d0  sw          $v0, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb7c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FB84u;
    // 0x20fb84: 0x0  nop
    ctx->pc = 0x20fb84u;
    // NOP
label_20fb88:
    // 0x20fb88: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x20fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x20fb8c: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x20fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x20fb90: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x20fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20fb94: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x20fb94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20fb98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20FB98u;
    {
        const bool branch_taken_0x20fb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB98u;
        // 0x20fb9c: 0xae4200d0  sw          $v0, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb98) {
            ctx->pc = 0x20FBA8u;
            goto label_20fba8;
        }
    }
    ctx->pc = 0x20FBA0u;
    // 0x20fba0: 0x10000256  b           . + 4 + (0x256 << 2)
    ctx->pc = 0x20FBA0u;
    {
        const bool branch_taken_0x20fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBA0u;
        // 0x20fba4: 0xae4400d0  sw          $a0, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fba0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FBA8u;
label_20fba8:
    // 0x20fba8: 0x8e4300d8  lw          $v1, 0xD8($s2)
    ctx->pc = 0x20fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x20fbac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20fbacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20fbb0: 0x10400253  beqz        $v0, . + 4 + (0x253 << 2)
    ctx->pc = 0x20FBB0u;
    {
        const bool branch_taken_0x20fbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBB0u;
        // 0x20fbb4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbb0) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20FBB8u;
    // 0x20fbb8: 0x10000251  b           . + 4 + (0x251 << 2)
    ctx->pc = 0x20FBB8u;
    {
        const bool branch_taken_0x20fbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBB8u;
        // 0x20fbbc: 0xae4300d0  sw          $v1, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbb8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20FBC0u;
label_20fbc0:
    // 0x20fbc0: 0x1000024e  b           . + 4 + (0x24E << 2)
    ctx->pc = 0x20FBC0u;
    {
        const bool branch_taken_0x20fbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBC0u;
        // 0x20fbc4: 0xae2800d4  sw          $t0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbc0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FBC8u;
label_20fbc8:
    // 0x20fbc8: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x20FBC8u;
    {
        const bool branch_taken_0x20fbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBC8u;
        // 0x20fbcc: 0xae2800d8  sw          $t0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbc8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FBD0u;
label_20fbd0:
    // 0x20fbd0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x20fbd0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fbd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20fbd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20fbd8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x20fbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x20fbdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20fbdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20fbe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20fbe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20fbe4: 0x10000245  b           . + 4 + (0x245 << 2)
    ctx->pc = 0x20FBE4u;
    {
        const bool branch_taken_0x20fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBE4u;
        // 0x20fbe8: 0xe6200118  swc1        $f0, 0x118($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbe4) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FBECu;
    // 0x20fbec: 0x0  nop
    ctx->pc = 0x20fbecu;
    // NOP
label_20fbf0:
    // 0x20fbf0: 0x10000242  b           . + 4 + (0x242 << 2)
    ctx->pc = 0x20FBF0u;
    {
        const bool branch_taken_0x20fbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBF0u;
        // 0x20fbf4: 0xa22001b4  sb          $zero, 0x1B4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 436), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbf0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FBF8u;
label_20fbf8:
    // 0x20fbf8: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x20fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x20fbfc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x20fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x20fc00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20fc04: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x20fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x20fc08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fc0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20fc10: 0xae2302f0  sw          $v1, 0x2F0($s1)
    ctx->pc = 0x20fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 3));
    // 0x20fc14: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20fc18: 0xae2202ac  sw          $v0, 0x2AC($s1)
    ctx->pc = 0x20fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 2));
    // 0x20fc1c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x20fc1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fc20: 0xa62402a4  sh          $a0, 0x2A4($s1)
    ctx->pc = 0x20fc20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 676), (uint16_t)GPR_U32(ctx, 4));
    // 0x20fc24: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x20fc24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20fc28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20fc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fc2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20fc2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20fc30: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x20fc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x20fc34: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x20fc34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20fc38: 0x10000230  b           . + 4 + (0x230 << 2)
    ctx->pc = 0x20FC38u;
    {
        const bool branch_taken_0x20fc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC38u;
        // 0x20fc3c: 0xa62202a6  sh          $v0, 0x2A6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 678), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc38) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FC40u;
label_20fc40:
    // 0x20fc40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20FC40u;
    {
        const bool branch_taken_0x20fc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC40u;
        // 0x20fc44: 0x96220220  lhu         $v0, 0x220($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc40) {
            ctx->pc = 0x20FC64u;
            goto label_20fc64;
        }
    }
    ctx->pc = 0x20FC48u;
label_20fc48:
    // 0x20fc48: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x20fc48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x20fc4c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20fc50: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x20fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x20fc54: 0x10000229  b           . + 4 + (0x229 << 2)
    ctx->pc = 0x20FC54u;
    {
        const bool branch_taken_0x20fc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC54u;
        // 0x20fc58: 0xa62202a8  sh          $v0, 0x2A8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 680), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc54) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FC5Cu;
    // 0x20fc5c: 0x0  nop
    ctx->pc = 0x20fc5cu;
    // NOP
label_20fc60:
    // 0x20fc60: 0x9622007a  lhu         $v0, 0x7A($s1)
    ctx->pc = 0x20fc60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
label_20fc64:
    // 0x20fc64: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20fc68: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x20FC68u;
    {
        const bool branch_taken_0x20fc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC68u;
        // 0x20fc6c: 0xa62202a8  sh          $v0, 0x2A8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 680), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc68) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FC70u;
label_20fc70:
    // 0x20fc70: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x20fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x20fc74: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x20fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x20fc78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20fc7c: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x20fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x20fc80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fc84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20fc88: 0xae4302f0  sw          $v1, 0x2F0($s2)
    ctx->pc = 0x20fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 752), GPR_U32(ctx, 3));
    // 0x20fc8c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20fc90: 0xae4202ac  sw          $v0, 0x2AC($s2)
    ctx->pc = 0x20fc90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 2));
    // 0x20fc94: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x20fc94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fc98: 0xa64402a4  sh          $a0, 0x2A4($s2)
    ctx->pc = 0x20fc98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 676), (uint16_t)GPR_U32(ctx, 4));
    // 0x20fc9c: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x20fc9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20fca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20fca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20fca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20fca8: 0xe64002dc  swc1        $f0, 0x2DC($s2)
    ctx->pc = 0x20fca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 732), bits); }
    // 0x20fcac: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x20fcacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20fcb0: 0x10000212  b           . + 4 + (0x212 << 2)
    ctx->pc = 0x20FCB0u;
    {
        const bool branch_taken_0x20fcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCB0u;
        // 0x20fcb4: 0xa64202a6  sh          $v0, 0x2A6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 678), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcb0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FCB8u;
label_20fcb8:
    // 0x20fcb8: 0x8e2402f0  lw          $a0, 0x2F0($s1)
    ctx->pc = 0x20fcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x20fcbc: 0x10800210  beqz        $a0, . + 4 + (0x210 << 2)
    ctx->pc = 0x20FCBCu;
    {
        const bool branch_taken_0x20fcbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCBCu;
        // 0x20fcc0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcbc) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20FCC4u;
    // 0x20fcc4: 0xae4402f0  sw          $a0, 0x2F0($s2)
    ctx->pc = 0x20fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 752), GPR_U32(ctx, 4));
    // 0x20fcc8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x20fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20fccc: 0xae4202ac  sw          $v0, 0x2AC($s2)
    ctx->pc = 0x20fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 2));
    // 0x20fcd0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x20fcd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20fcd4: 0xa64302a4  sh          $v1, 0x2A4($s2)
    ctx->pc = 0x20fcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 676), (uint16_t)GPR_U32(ctx, 3));
    // 0x20fcd8: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x20fcd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20fcdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20fcdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fce0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20fce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20fce4: 0xe64002dc  swc1        $f0, 0x2DC($s2)
    ctx->pc = 0x20fce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 732), bits); }
    // 0x20fce8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x20fce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20fcec: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x20FCECu;
    {
        const bool branch_taken_0x20fcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCECu;
        // 0x20fcf0: 0xa64202a6  sh          $v0, 0x2A6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 678), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcec) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20FCF4u;
    // 0x20fcf4: 0x0  nop
    ctx->pc = 0x20fcf4u;
    // NOP
label_20fcf8:
    // 0x20fcf8: 0x8e2202ac  lw          $v0, 0x2AC($s1)
    ctx->pc = 0x20fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x20fcfc: 0xae4202ac  sw          $v0, 0x2AC($s2)
    ctx->pc = 0x20fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 2));
    // 0x20fd00: 0x962302a4  lhu         $v1, 0x2A4($s1)
    ctx->pc = 0x20fd00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 676)));
    // 0x20fd04: 0xa64302a4  sh          $v1, 0x2A4($s2)
    ctx->pc = 0x20fd04u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 676), (uint16_t)GPR_U32(ctx, 3));
    // 0x20fd08: 0xc62002dc  lwc1        $f0, 0x2DC($s1)
    ctx->pc = 0x20fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fd0c: 0xe64002dc  swc1        $f0, 0x2DC($s2)
    ctx->pc = 0x20fd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 732), bits); }
    // 0x20fd10: 0x962202a6  lhu         $v0, 0x2A6($s1)
    ctx->pc = 0x20fd10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 678)));
    // 0x20fd14: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x20FD14u;
    {
        const bool branch_taken_0x20fd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD14u;
        // 0x20fd18: 0xa64202a6  sh          $v0, 0x2A6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 678), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd14) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FD1Cu;
    // 0x20fd1c: 0x0  nop
    ctx->pc = 0x20fd1cu;
    // NOP
label_20fd20:
    // 0x20fd20: 0x96220220  lhu         $v0, 0x220($s1)
    ctx->pc = 0x20fd20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x20fd24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20fd28: 0x100001f4  b           . + 4 + (0x1F4 << 2)
    ctx->pc = 0x20FD28u;
    {
        const bool branch_taken_0x20fd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD28u;
        // 0x20fd2c: 0xa64202a8  sh          $v0, 0x2A8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 680), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd28) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FD30u;
label_20fd30:
    // 0x20fd30: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x20fd30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x20fd34: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20fd38: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x20fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x20fd3c: 0x100001ef  b           . + 4 + (0x1EF << 2)
    ctx->pc = 0x20FD3Cu;
    {
        const bool branch_taken_0x20fd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD3Cu;
        // 0x20fd40: 0xa64202a8  sh          $v0, 0x2A8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 680), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd3c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FD44u;
    // 0x20fd44: 0x0  nop
    ctx->pc = 0x20fd44u;
    // NOP
label_20fd48:
    // 0x20fd48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20FD48u;
    {
        const bool branch_taken_0x20fd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD48u;
        // 0x20fd4c: 0x2e020001  sltiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd48) {
            ctx->pc = 0x20FD64u;
            goto label_20fd64;
        }
    }
    ctx->pc = 0x20FD50u;
label_20fd50:
    // 0x20fd50: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x20fd50u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fd54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20fd54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20fd58: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x20FD58u;
    {
        const bool branch_taken_0x20fd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD58u;
        // 0x20fd5c: 0xe6200120  swc1        $f0, 0x120($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd58) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FD60u;
label_20fd60:
    // 0x20fd60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fd64:
    // 0x20fd64: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x20fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
    // 0x20fd68: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x20FD68u;
    {
        const bool branch_taken_0x20fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD68u;
        // 0x20fd6c: 0xa22201b3  sb          $v0, 0x1B3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 435), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd68) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FD70u;
label_20fd70:
    // 0x20fd70: 0x9623003c  lhu         $v1, 0x3C($s1)
    ctx->pc = 0x20fd70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x20fd74: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x20fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x20fd78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20fd7c: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x20fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x20fd80: 0x380c0  sll         $s0, $v1, 3
    ctx->pc = 0x20fd80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20fd84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fd88: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x20fd88u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x20fd8c: 0x8c860198  lw          $a2, 0x198($a0)
    ctx->pc = 0x20fd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x20fd90: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x20fd90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20fd94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20fd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd98: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x20fd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x20fd9c: 0x2421a540  addiu       $at, $at, -0x5AC0
    ctx->pc = 0x20fd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294944064));
    // 0x20fda0: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x20fda0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x20fda4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x20fda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20fda8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x20fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x20fdac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x20fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20fdb0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x20fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x20fdb4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x20fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x20fdb8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x20fdb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20fdbc: 0xa6030044  sh          $v1, 0x44($s0)
    ctx->pc = 0x20fdbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x20fdc0: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x20fdc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x20fdc4: 0xa6020048  sh          $v0, 0x48($s0)
    ctx->pc = 0x20fdc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x20fdc8: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x20fdc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x20fdcc: 0xa600004a  sh          $zero, 0x4A($s0)
    ctx->pc = 0x20fdccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x20fdd0: 0xc080a1a  jal         func_202868
    ctx->pc = 0x20FDD0u;
    SET_GPR_U32(ctx, 31, 0x20FDD8u);
    ctx->pc = 0x20FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FDD0u;
    // 0x20fdd4: 0xa6030046  sh          $v1, 0x46($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202868u, 0x20FDD0u, 0x20FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FDD8u;
label_20fdd8:
    // 0x20fdd8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x20fdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fddc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20fddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fde0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x20fde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fde4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x20fde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20fde8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x20fde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x20fdec: 0xe6020028  swc1        $f2, 0x28($s0)
    ctx->pc = 0x20fdecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x20fdf0: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x20fdf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x20fdf4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x20fdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20fdf8: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x20fdf8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x20fdfc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x20fdfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20fe00: 0xc08bfac  jal         func_22FEB0
    ctx->pc = 0x20FE00u;
    SET_GPR_U32(ctx, 31, 0x20FE08u);
    ctx->pc = 0x20FE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FE00u;
    // 0x20fe04: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEB0u, 0x20FE00u, 0x20FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE08u;
label_20fe08:
    // 0x20fe08: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x20FE08u;
    {
        const bool branch_taken_0x20fe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE08u;
        // 0x20fe0c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe08) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20FE10u;
label_20fe10:
    // 0x20fe10: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x20fe10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x20fe14: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x20fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20fe18: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x20fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x20fe1c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x20fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20fe20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20fe24: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x20fe24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x20fe28: 0x2421a540  addiu       $at, $at, -0x5AC0
    ctx->pc = 0x20fe28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294944064));
    // 0x20fe2c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x20fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x20fe30: 0xa464004a  sh          $a0, 0x4A($v1)
    ctx->pc = 0x20fe30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 74), (uint16_t)GPR_U32(ctx, 4));
    // 0x20fe34: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x20fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x20fe38: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x20fe38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x20fe3c: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x20FE3Cu;
    {
        const bool branch_taken_0x20fe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE3Cu;
        // 0x20fe40: 0xa4600046  sh          $zero, 0x46($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe3c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FE44u;
    // 0x20fe44: 0x0  nop
    ctx->pc = 0x20fe44u;
    // NOP
label_20fe48:
    // 0x20fe48: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x20fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x20fe4c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x20fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x20fe50: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x20fe50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x20fe54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20fe58: 0x8c670198  lw          $a3, 0x198($v1)
    ctx->pc = 0x20fe58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x20fe5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fe60: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x20fe60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x20fe64: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x20fe64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20fe68: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x20fe68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20fe6c: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x20fe6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x20fe70: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x20fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x20fe74: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x20fe74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20fe78: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x20fe78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x20fe7c: 0x2421a540  addiu       $at, $at, -0x5AC0
    ctx->pc = 0x20fe7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294944064));
    // 0x20fe80: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x20fe80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x20fe84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20fe84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe88: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x20fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x20fe8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20fe8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe90: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x20fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20fe94: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x20fe94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20fe98: 0xa6020064  sh          $v0, 0x64($s0)
    ctx->pc = 0x20fe98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 2));
    // 0x20fe9c: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x20fe9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x20fea0: 0xa6030068  sh          $v1, 0x68($s0)
    ctx->pc = 0x20fea0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x20fea4: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x20fea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x20fea8: 0xa608006a  sh          $t0, 0x6A($s0)
    ctx->pc = 0x20fea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 8));
    // 0x20feac: 0xc080a2a  jal         func_2028A8
    ctx->pc = 0x20FEACu;
    SET_GPR_U32(ctx, 31, 0x20FEB4u);
    ctx->pc = 0x20FEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FEACu;
    // 0x20feb0: 0xa6020066  sh          $v0, 0x66($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2028A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2028A8u, 0x20FEACu, 0x20FEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FEB4u;
label_20feb4:
    // 0x20feb4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x20feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20feb8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x20feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20febc: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x20febcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20fec0: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x20fec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20fec4: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x20fec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20fec8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x20fec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fecc: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x20feccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x20fed0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x20fed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x20fed4: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x20fed4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x20fed8: 0xe6030028  swc1        $f3, 0x28($s0)
    ctx->pc = 0x20fed8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x20fedc: 0xe6040030  swc1        $f4, 0x30($s0)
    ctx->pc = 0x20fedcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x20fee0: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x20FEE0u;
    {
        const bool branch_taken_0x20fee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FEE0u;
        // 0x20fee4: 0xe6050034  swc1        $f5, 0x34($s0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fee0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FEE8u;
label_20fee8:
    // 0x20fee8: 0x9623003c  lhu         $v1, 0x3C($s1)
    ctx->pc = 0x20fee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x20feec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20feecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20fef0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20fef4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20fef8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x20fef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x20fefc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x20fefcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x20ff00: 0xa430a5aa  sh          $s0, -0x5A56($at)
    ctx->pc = 0x20ff00u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944170), (uint16_t)GPR_U32(ctx, 16));
    // 0x20ff04: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x20FF04u;
    {
        const bool branch_taken_0x20ff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF04u;
        // 0x20ff08: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff04) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20FF0Cu;
    // 0x20ff0c: 0x0  nop
    ctx->pc = 0x20ff0cu;
    // NOP
label_20ff10:
    // 0x20ff10: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20ff14: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20ff14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20ff18: 0xc080a2a  jal         func_2028A8
    ctx->pc = 0x20FF18u;
    SET_GPR_U32(ctx, 31, 0x20FF20u);
    ctx->pc = 0x20FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF18u;
    // 0x20ff1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2028A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2028A8u, 0x20FF18u, 0x20FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF20u;
label_20ff20:
    // 0x20ff20: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x20ff20u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x20ff24: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x20ff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20ff28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20ff28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff2c: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x20ff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20ff30: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x20ff30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20ff34: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x20ff34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ff38: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x20ff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ff3c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x20ff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ff40: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x20ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20ff44: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x20ff44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20ff48: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x20ff48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20ff4c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x20ff4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20ff50: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x20ff50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20ff54: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x20ff54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20ff58: 0xc08e438  jal         func_2390E0
    ctx->pc = 0x20FF58u;
    SET_GPR_U32(ctx, 31, 0x20FF60u);
    ctx->pc = 0x20FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF58u;
    // 0x20ff5c: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2390E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2390E0u, 0x20FF58u, 0x20FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF60u;
label_20ff60:
    // 0x20ff60: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x20FF60u;
    {
        const bool branch_taken_0x20ff60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF60u;
        // 0x20ff64: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff60) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x20FF68u;
label_20ff68:
    // 0x20ff68: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x20ff68u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ff6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20ff6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20ff70: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x20FF70u;
    {
        const bool branch_taken_0x20ff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF70u;
        // 0x20ff74: 0xe6200114  swc1        $f0, 0x114($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff70) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FF78u;
label_20ff78:
    // 0x20ff78: 0xa630015e  sh          $s0, 0x15E($s1)
    ctx->pc = 0x20ff78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 16));
    // 0x20ff7c: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x20FF7Cu;
    {
        const bool branch_taken_0x20ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF7Cu;
        // 0x20ff80: 0xa22001a6  sb          $zero, 0x1A6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 422), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff7c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FF84u;
    // 0x20ff84: 0x0  nop
    ctx->pc = 0x20ff84u;
    // NOP
label_20ff88:
    // 0x20ff88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ff8c: 0xa630015e  sh          $s0, 0x15E($s1)
    ctx->pc = 0x20ff8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 16));
    // 0x20ff90: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x20FF90u;
    {
        const bool branch_taken_0x20ff90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF90u;
        // 0x20ff94: 0xa22201a6  sb          $v0, 0x1A6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 422), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff90) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FF98u;
label_20ff98:
    // 0x20ff98: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x20ff98u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ff9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20ff9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20ffa0: 0xe6200754  swc1        $f0, 0x754($s1)
    ctx->pc = 0x20ffa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1876), bits); }
    // 0x20ffa4: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x20FFA4u;
    {
        const bool branch_taken_0x20ffa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFA4u;
        // 0x20ffa8: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffa4) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FFACu;
    // 0x20ffac: 0x0  nop
    ctx->pc = 0x20ffacu;
    // NOP
label_20ffb0:
    // 0x20ffb0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x20ffb0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ffb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20ffb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20ffb8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x20ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ffbc: 0xc6220754  lwc1        $f2, 0x754($s1)
    ctx->pc = 0x20ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ffc0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x20ffc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20ffc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20ffc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20ffc8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x20ffc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x20ffcc: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x20ffccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ffd0: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x20ffd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x20ffd4: 0x45000149  bc1f        . + 4 + (0x149 << 2)
    ctx->pc = 0x20FFD4u;
    {
        const bool branch_taken_0x20ffd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFD4u;
        // 0x20ffd8: 0xe6220754  swc1        $f2, 0x754($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffd4) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FFDCu;
    // 0x20ffdc: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x20FFDCu;
    {
        const bool branch_taken_0x20ffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFDCu;
        // 0x20ffe0: 0xe6230004  swc1        $f3, 0x4($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffdc) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x20FFE4u;
    // 0x20ffe4: 0x0  nop
    ctx->pc = 0x20ffe4u;
    // NOP
label_20ffe8:
    // 0x20ffe8: 0x26240750  addiu       $a0, $s1, 0x750
    ctx->pc = 0x20ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1872));
    // 0x20ffec: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x20FFECu;
    SET_GPR_U32(ctx, 31, 0x20FFF4u);
    ctx->pc = 0x20FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFECu;
    // 0x20fff0: 0xc6340004  lwc1        $f20, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x20FFECu, 0x20FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFF4u;
label_20fff4:
    // 0x20fff4: 0xc6210754  lwc1        $f1, 0x754($s1)
    ctx->pc = 0x20fff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fff8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x20fff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x20fffc: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x20fffcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x210000: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x210000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x210004: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x210004u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x210008: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x210008u;
    {
        const bool branch_taken_0x210008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210008u;
        // 0x21000c: 0xe6210754  swc1        $f1, 0x754($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x210008) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210010u;
label_210010:
    // 0x210010: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x210010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x210014: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210018: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x210018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x21001c: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x21001Cu;
    {
        const bool branch_taken_0x21001c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21001Cu;
        // 0x210020: 0xe6200670  swc1        $f0, 0x670($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1648), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21001c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210024u;
    // 0x210024: 0x0  nop
    ctx->pc = 0x210024u;
    // NOP
label_210028:
    // 0x210028: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x210028u;
    {
        const bool branch_taken_0x210028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210028u;
        // 0x21002c: 0xa23001ab  sb          $s0, 0x1AB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 427), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210028) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210030u;
label_210030:
    // 0x210030: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x210030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x210034: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x210034u;
    {
        const bool branch_taken_0x210034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210034u;
        // 0x210038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210034) {
            ctx->pc = 0x210058u;
            goto label_210058;
        }
    }
    ctx->pc = 0x21003Cu;
    // 0x21003c: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x21003cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x210040: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x210040u;
    {
        const bool branch_taken_0x210040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210040u;
        // 0x210044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210040) {
            ctx->pc = 0x210058u;
            goto label_210058;
        }
    }
    ctx->pc = 0x210048u;
    // 0x210048: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x210048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x21004c: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21004Cu;
    {
        const bool branch_taken_0x21004c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21004c) {
            ctx->pc = 0x210050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21004Cu;
            // 0x210050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210058u;
            goto label_210058;
        }
    }
    ctx->pc = 0x210054u;
    // 0x210054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210058:
    // 0x210058: 0x10400128  beqz        $v0, . + 4 + (0x128 << 2)
    ctx->pc = 0x210058u;
    {
        const bool branch_taken_0x210058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210058u;
        // 0x21005c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210058) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210060u;
    // 0x210060: 0xc09d8bc  jal         func_2762F0
    ctx->pc = 0x210060u;
    SET_GPR_U32(ctx, 31, 0x210068u);
    ctx->pc = 0x210064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210060u;
    // 0x210064: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2762F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2762F0u, 0x210060u, 0x210068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210068u;
label_210068:
    // 0x210068: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x210068u;
    {
        const bool branch_taken_0x210068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210068u;
        // 0x21006c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210068) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x210070u;
label_210070:
    // 0x210070: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x210070u;
    {
        const bool branch_taken_0x210070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210070u;
        // 0x210074: 0xa23001bb  sb          $s0, 0x1BB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 443), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210070) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210078u;
label_210078:
    // 0x210078: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x210078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x21007c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21007Cu;
    {
        const bool branch_taken_0x21007c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21007Cu;
        // 0x210080: 0xa25001bb  sb          $s0, 0x1BB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21007c) {
            ctx->pc = 0x2100A8u;
            goto label_2100a8;
        }
    }
    ctx->pc = 0x210084u;
    // 0x210084: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x210084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x210088: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x210088u;
    {
        const bool branch_taken_0x210088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210088u;
        // 0x21008c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210088) {
            ctx->pc = 0x2100ACu;
            goto label_2100ac;
        }
    }
    ctx->pc = 0x210090u;
    // 0x210090: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x210090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x210094: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x210094u;
    {
        const bool branch_taken_0x210094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x210094) {
            ctx->pc = 0x210098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210094u;
            // 0x210098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2100ACu;
            goto label_2100ac;
        }
    }
    ctx->pc = 0x21009Cu;
    // 0x21009c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21009Cu;
    {
        const bool branch_taken_0x21009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21009Cu;
        // 0x2100a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21009c) {
            ctx->pc = 0x2100ACu;
            goto label_2100ac;
        }
    }
    ctx->pc = 0x2100A4u;
    // 0x2100a4: 0x0  nop
    ctx->pc = 0x2100a4u;
    // NOP
label_2100a8:
    // 0x2100a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2100a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2100ac:
    // 0x2100ac: 0x10400114  beqz        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x2100ACu;
    {
        const bool branch_taken_0x2100ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100ACu;
        // 0x2100b0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100ac) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2100B4u;
    // 0x2100b4: 0x8e420898  lw          $v0, 0x898($s2)
    ctx->pc = 0x2100b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x2100b8: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x2100B8u;
    {
        const bool branch_taken_0x2100b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100B8u;
        // 0x2100bc: 0xac400084  sw          $zero, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100b8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2100C0u;
label_2100c0:
    // 0x2100c0: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x2100C0u;
    {
        const bool branch_taken_0x2100c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100C0u;
        // 0x2100c4: 0xa23001a5  sb          $s0, 0x1A5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 421), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100c0) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x2100C8u;
label_2100c8:
    // 0x2100c8: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x2100C8u;
    {
        const bool branch_taken_0x2100c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100C8u;
        // 0x2100cc: 0xa2300205  sb          $s0, 0x205($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 517), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100c8) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x2100D0u;
label_2100d0:
    // 0x2100d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2100D0u;
    {
        const bool branch_taken_0x2100d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100D0u;
        // 0x2100d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100d0) {
            ctx->pc = 0x2100F4u;
            goto label_2100f4;
        }
    }
    ctx->pc = 0x2100D8u;
label_2100d8:
    // 0x2100d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2100D8u;
    {
        const bool branch_taken_0x2100d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100D8u;
        // 0x2100dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100d8) {
            ctx->pc = 0x21010Cu;
            goto label_21010c;
        }
    }
    ctx->pc = 0x2100E0u;
label_2100e0:
    // 0x2100e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2100E0u;
    {
        const bool branch_taken_0x2100e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100E0u;
        // 0x2100e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100e0) {
            ctx->pc = 0x210124u;
            goto label_210124;
        }
    }
    ctx->pc = 0x2100E8u;
label_2100e8:
    // 0x2100e8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2100E8u;
    {
        const bool branch_taken_0x2100e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100E8u;
        // 0x2100ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100e8) {
            ctx->pc = 0x21013Cu;
            goto label_21013c;
        }
    }
    ctx->pc = 0x2100F0u;
label_2100f0:
    // 0x2100f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2100f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2100f4:
    // 0x2100f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2100f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100f8: 0xc07df16  jal         func_1F7C58
    ctx->pc = 0x2100F8u;
    SET_GPR_U32(ctx, 31, 0x210100u);
    ctx->pc = 0x2100FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2100F8u;
    // 0x2100fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C58u, 0x2100F8u, 0x210100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210100u;
label_210100:
    // 0x210100: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x210100u;
    {
        const bool branch_taken_0x210100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210100u;
        // 0x210104: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210100) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x210108u;
label_210108:
    // 0x210108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21010c:
    // 0x21010c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21010cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210110: 0xc07df16  jal         func_1F7C58
    ctx->pc = 0x210110u;
    SET_GPR_U32(ctx, 31, 0x210118u);
    ctx->pc = 0x210114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210110u;
    // 0x210114: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C58u, 0x210110u, 0x210118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210118u;
label_210118:
    // 0x210118: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x210118u;
    {
        const bool branch_taken_0x210118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210118u;
        // 0x21011c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210118) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x210120u;
label_210120:
    // 0x210120: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_210124:
    // 0x210124: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210128: 0xc07df16  jal         func_1F7C58
    ctx->pc = 0x210128u;
    SET_GPR_U32(ctx, 31, 0x210130u);
    ctx->pc = 0x21012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210128u;
    // 0x21012c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C58u, 0x210128u, 0x210130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210130u;
label_210130:
    // 0x210130: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x210130u;
    {
        const bool branch_taken_0x210130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210130u;
        // 0x210134: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210130) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x210138u;
label_210138:
    // 0x210138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21013c:
    // 0x21013c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21013cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210140: 0xc07df16  jal         func_1F7C58
    ctx->pc = 0x210140u;
    SET_GPR_U32(ctx, 31, 0x210148u);
    ctx->pc = 0x210144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210140u;
    // 0x210144: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C58u, 0x210140u, 0x210148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210148u;
label_210148:
    // 0x210148: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x210148u;
    {
        const bool branch_taken_0x210148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210148u;
        // 0x21014c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210148) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x210150u;
label_210150:
    // 0x210150: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x210150u;
    {
        const bool branch_taken_0x210150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210150u;
        // 0x210154: 0xaf90c8dc  sw          $s0, -0x3724($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953180), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210150) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210158u;
label_210158:
    // 0x210158: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x210158u;
    {
        const bool branch_taken_0x210158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210158u;
        // 0x21015c: 0xaf90c8e0  sw          $s0, -0x3720($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953184), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210158) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210160u;
label_210160:
    // 0x210160: 0x86230040  lh          $v1, 0x40($s1)
    ctx->pc = 0x210160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x210164: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x210164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x210168: 0x506200e5  beql        $v1, $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x210168u;
    {
        const bool branch_taken_0x210168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x210168) {
            ctx->pc = 0x21016Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210168u;
            // 0x21016c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x210170u;
    // 0x210170: 0xc0b6b50  jal         func_2DAD40
    ctx->pc = 0x210170u;
    SET_GPR_U32(ctx, 31, 0x210178u);
    ctx->pc = 0x210174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210170u;
    // 0x210174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAD40u, 0x210170u, 0x210178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210178u;
label_210178:
    // 0x210178: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x210178u;
    {
        const bool branch_taken_0x210178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210178u;
        // 0x21017c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210178) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x210180u;
label_210180:
    // 0x210180: 0xc0b6b5a  jal         func_2DAD68
    ctx->pc = 0x210180u;
    SET_GPR_U32(ctx, 31, 0x210188u);
    ctx->pc = 0x2DAD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAD68u, 0x210180u, 0x210188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210188u;
label_210188:
    // 0x210188: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x210188u;
    {
        const bool branch_taken_0x210188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210188u;
        // 0x21018c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210188) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x210190u;
label_210190:
    // 0x210190: 0xc088186  jal         func_220618
    ctx->pc = 0x210190u;
    SET_GPR_U32(ctx, 31, 0x210198u);
    ctx->pc = 0x210194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210190u;
    // 0x210194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220618u, 0x210190u, 0x210198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210198u;
label_210198:
    // 0x210198: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x210198u;
    {
        const bool branch_taken_0x210198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210198u;
        // 0x21019c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210198) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2101A0u;
label_2101a0:
    // 0x2101a0: 0xc09e1f4  jal         func_2787D0
    ctx->pc = 0x2101A0u;
    SET_GPR_U32(ctx, 31, 0x2101A8u);
    ctx->pc = 0x2101A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101A0u;
    // 0x2101a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787D0u, 0x2101A0u, 0x2101A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101A8u;
label_2101a8:
    // 0x2101a8: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x2101A8u;
    {
        const bool branch_taken_0x2101a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101A8u;
        // 0x2101ac: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101a8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2101B0u;
label_2101b0:
    // 0x2101b0: 0xc07ec56  jal         func_1FB158
    ctx->pc = 0x2101B0u;
    SET_GPR_U32(ctx, 31, 0x2101B8u);
    ctx->pc = 0x2101B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101B0u;
    // 0x2101b4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB158u, 0x2101B0u, 0x2101B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101B8u;
label_2101b8:
    // 0x2101b8: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x2101B8u;
    {
        const bool branch_taken_0x2101b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101B8u;
        // 0x2101bc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101b8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2101C0u;
label_2101c0:
    // 0x2101c0: 0xc07ec62  jal         func_1FB188
    ctx->pc = 0x2101C0u;
    SET_GPR_U32(ctx, 31, 0x2101C8u);
    ctx->pc = 0x1FB188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB188u, 0x2101C0u, 0x2101C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101C8u;
label_2101c8:
    // 0x2101c8: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x2101C8u;
    {
        const bool branch_taken_0x2101c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101C8u;
        // 0x2101cc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101c8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2101D0u;
label_2101d0:
    // 0x2101d0: 0xde4200c8  ld          $v0, 0xC8($s2)
    ctx->pc = 0x2101d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x2101d4: 0x34038040  ori         $v1, $zero, 0x8040
    ctx->pc = 0x2101d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x2101d8: 0x31ef8  dsll        $v1, $v1, 27
    ctx->pc = 0x2101d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x2101dc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2101dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2101e0: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x2101e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x2101e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2101e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2101e8: 0x144400c5  bne         $v0, $a0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2101E8u;
    {
        const bool branch_taken_0x2101e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2101ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101E8u;
        // 0x2101ec: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101e8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2101F0u;
label_2101f0:
    // 0x2101f0: 0xc07ec5c  jal         func_1FB170
    ctx->pc = 0x2101F0u;
    SET_GPR_U32(ctx, 31, 0x2101F8u);
    ctx->pc = 0x1FB170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB170u, 0x2101F0u, 0x2101F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101F8u;
label_2101f8:
    // 0x2101f8: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x2101F8u;
    {
        const bool branch_taken_0x2101f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101F8u;
        // 0x2101fc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101f8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x210200u;
label_210200:
    // 0x210200: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x210200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x210204: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x210204u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x210208: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x210208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x21020c: 0x504000bb  beql        $v0, $zero, . + 4 + (0xBB << 2)
    ctx->pc = 0x21020Cu;
    {
        const bool branch_taken_0x21020c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21020c) {
            ctx->pc = 0x210210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21020Cu;
            // 0x210210: 0xa23001b0  sb          $s0, 0x1B0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 432), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210214u;
    // 0x210214: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x210214u;
    {
        const bool branch_taken_0x210214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210214u;
        // 0x210218: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210214) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x21021Cu;
    // 0x21021c: 0x0  nop
    ctx->pc = 0x21021cu;
    // NOP
label_210220:
    // 0x210220: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x210220u;
    {
        const bool branch_taken_0x210220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210220u;
        // 0x210224: 0xa23001b1  sb          $s0, 0x1B1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 433), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210220) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210228u;
label_210228:
    // 0x210228: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x210228u;
    {
        const bool branch_taken_0x210228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210228u;
        // 0x21022c: 0xa6300182  sh          $s0, 0x182($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 386), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210228) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210230u;
label_210230:
    // 0x210230: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x210230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x210234: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x210234u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x210238: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x210238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x21023c: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x21023Cu;
    {
        const bool branch_taken_0x21023c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21023Cu;
        // 0x210240: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21023c) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x210244u;
    // 0x210244: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x210244u;
    SET_GPR_U32(ctx, 31, 0x21024Cu);
    ctx->pc = 0x1FC470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC470u, 0x210244u, 0x21024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21024Cu;
label_21024c:
    // 0x21024c: 0x544000ab  bnel        $v0, $zero, . + 4 + (0xAB << 2)
    ctx->pc = 0x21024Cu;
    {
        const bool branch_taken_0x21024c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21024c) {
            ctx->pc = 0x210250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21024Cu;
            // 0x210250: 0xae20069c  sw          $zero, 0x69C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210254u;
    // 0x210254: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x210254u;
    {
        const bool branch_taken_0x210254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210254u;
        // 0x210258: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210254) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x21025Cu;
    // 0x21025c: 0x0  nop
    ctx->pc = 0x21025cu;
    // NOP
label_210260:
    // 0x210260: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x210260u;
    {
        const bool branch_taken_0x210260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210260u;
        // 0x210264: 0xa23001b5  sb          $s0, 0x1B5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 437), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210260) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210268u;
label_210268:
    // 0x210268: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x210268u;
    {
        const bool branch_taken_0x210268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210268u;
        // 0x21026c: 0xa230018e  sb          $s0, 0x18E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 398), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210268) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210270u;
label_210270:
    // 0x210270: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x210270u;
    {
        const bool branch_taken_0x210270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210270u;
        // 0x210274: 0xa23001b6  sb          $s0, 0x1B6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 438), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210270) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210278u;
label_210278:
    // 0x210278: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x210278u;
    {
        const bool branch_taken_0x210278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210278u;
        // 0x21027c: 0xa23001b7  sb          $s0, 0x1B7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 439), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210278) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210280u;
label_210280:
    // 0x210280: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x210280u;
    {
        const bool branch_taken_0x210280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210280u;
        // 0x210284: 0xa6280180  sh          $t0, 0x180($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 384), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210280) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210288u;
label_210288:
    // 0x210288: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x210288u;
    {
        const bool branch_taken_0x210288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210288u;
        // 0x21028c: 0xa6480180  sh          $t0, 0x180($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 384), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210288) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210290u;
label_210290:
    // 0x210290: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x210290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x210294: 0x32030007  andi        $v1, $s0, 0x7
    ctx->pc = 0x210294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x210298: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x210298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21029c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21029cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2102a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2102a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2102a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2102a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2102a8: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x2102a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x2102ac: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2102acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2102b0: 0xac245930  sw          $a0, 0x5930($at)
    ctx->pc = 0x2102b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 22832), GPR_U32(ctx, 4));
    // 0x2102b4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2102B4u;
    {
        const bool branch_taken_0x2102b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2102B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102B4u;
        // 0x2102b8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102b4) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2102BCu;
    // 0x2102bc: 0x0  nop
    ctx->pc = 0x2102bcu;
    // NOP
label_2102c0:
    // 0x2102c0: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x2102c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2102c4: 0x32030007  andi        $v1, $s0, 0x7
    ctx->pc = 0x2102c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2102c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2102c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2102cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2102ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2102d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2102d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2102d4: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x2102d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x2102d8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2102d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2102dc: 0xac205930  sw          $zero, 0x5930($at)
    ctx->pc = 0x2102dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 22832), GPR_U32(ctx, 0));
    // 0x2102e0: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2102E0u;
    {
        const bool branch_taken_0x2102e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2102E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102E0u;
        // 0x2102e4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102e0) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2102E8u;
label_2102e8:
    // 0x2102e8: 0x9623003c  lhu         $v1, 0x3C($s1)
    ctx->pc = 0x2102e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2102ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2102ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2102f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2102f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2102f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2102f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2102f8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2102f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2102fc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2102fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x210300: 0xa430a5ac  sh          $s0, -0x5A54($at)
    ctx->pc = 0x210300u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944172), (uint16_t)GPR_U32(ctx, 16));
    // 0x210304: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x210304u;
    {
        const bool branch_taken_0x210304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210304u;
        // 0x210308: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210304) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x21030Cu;
    // 0x21030c: 0x0  nop
    ctx->pc = 0x21030cu;
    // NOP
label_210310:
    // 0x210310: 0xc08f06c  jal         func_23C1B0
    ctx->pc = 0x210310u;
    SET_GPR_U32(ctx, 31, 0x210318u);
    ctx->pc = 0x23C1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C1B0u, 0x210310u, 0x210318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210318u;
label_210318:
    // 0x210318: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x210318u;
    {
        const bool branch_taken_0x210318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210318u;
        // 0x21031c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210318) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x210320u;
label_210320:
    // 0x210320: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x210320u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x210324: 0xc08f09e  jal         func_23C278
    ctx->pc = 0x210324u;
    SET_GPR_U32(ctx, 31, 0x21032Cu);
    ctx->pc = 0x210328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210324u;
    // 0x210328: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C278u, 0x210324u, 0x21032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21032Cu;
label_21032c:
    // 0x21032c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x21032Cu;
    {
        const bool branch_taken_0x21032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21032Cu;
        // 0x210330: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21032c) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x210334u;
    // 0x210334: 0x0  nop
    ctx->pc = 0x210334u;
    // NOP
label_210338:
    // 0x210338: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x210338u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x21033c: 0xc0b6ece  jal         func_2DBB38
    ctx->pc = 0x21033Cu;
    SET_GPR_U32(ctx, 31, 0x210344u);
    ctx->pc = 0x210340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21033Cu;
    // 0x210340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBB38u, 0x21033Cu, 0x210344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210344u;
label_210344:
    // 0x210344: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x210344u;
    {
        const bool branch_taken_0x210344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210344u;
        // 0x210348: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210344) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x21034Cu;
    // 0x21034c: 0x0  nop
    ctx->pc = 0x21034cu;
    // NOP
label_210350:
    // 0x210350: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x210350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x210354: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x210354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x210358: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x210358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21035c: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x21035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x210360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210364: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x210364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x210368: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x210368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21036c: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x21036Cu;
    SET_GPR_U32(ctx, 31, 0x210374u);
    ctx->pc = 0x210370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21036Cu;
    // 0x210370: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x21036Cu, 0x210374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210374u;
label_210374:
    // 0x210374: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x210374u;
    {
        const bool branch_taken_0x210374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210374u;
        // 0x210378: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210374) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x21037Cu;
    // 0x21037c: 0x0  nop
    ctx->pc = 0x21037cu;
    // NOP
label_210380:
    // 0x210380: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x210380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x210384: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x210384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x210388: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x210388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21038c: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x21038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x210390: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x210394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210398: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x210398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21039c: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x21039Cu;
    SET_GPR_U32(ctx, 31, 0x2103A4u);
    ctx->pc = 0x2103A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21039Cu;
    // 0x2103a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x21039Cu, 0x2103A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103A4u;
label_2103a4:
    // 0x2103a4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2103A4u;
    {
        const bool branch_taken_0x2103a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103A4u;
        // 0x2103a8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103a4) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2103ACu;
    // 0x2103ac: 0x0  nop
    ctx->pc = 0x2103acu;
    // NOP
label_2103b0:
    // 0x2103b0: 0xc08f022  jal         func_23C088
    ctx->pc = 0x2103B0u;
    SET_GPR_U32(ctx, 31, 0x2103B8u);
    ctx->pc = 0x2103B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2103B0u;
    // 0x2103b4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C088u, 0x2103B0u, 0x2103B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103B8u;
label_2103b8:
    // 0x2103b8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2103B8u;
    {
        const bool branch_taken_0x2103b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103B8u;
        // 0x2103bc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103b8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2103C0u;
label_2103c0:
    // 0x2103c0: 0xc0a946e  jal         func_2A51B8
    ctx->pc = 0x2103C0u;
    SET_GPR_U32(ctx, 31, 0x2103C8u);
    ctx->pc = 0x2A51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51B8u, 0x2103C0u, 0x2103C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103C8u;
label_2103c8:
    // 0x2103c8: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2103C8u;
    {
        const bool branch_taken_0x2103c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103C8u;
        // 0x2103cc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103c8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2103D0u;
    // 0x2103d0: 0xc0a9460  jal         func_2A5180
    ctx->pc = 0x2103D0u;
    SET_GPR_U32(ctx, 31, 0x2103D8u);
    ctx->pc = 0x2A5180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5180u, 0x2103D0u, 0x2103D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103D8u;
label_2103d8:
    // 0x2103d8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2103D8u;
    {
        const bool branch_taken_0x2103d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103D8u;
        // 0x2103dc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103d8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2103E0u;
label_2103e0:
    // 0x2103e0: 0xc0a9468  jal         func_2A51A0
    ctx->pc = 0x2103E0u;
    SET_GPR_U32(ctx, 31, 0x2103E8u);
    ctx->pc = 0x2A51A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51A0u, 0x2103E0u, 0x2103E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103E8u;
label_2103e8:
    // 0x2103e8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2103E8u;
    {
        const bool branch_taken_0x2103e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103E8u;
        // 0x2103ec: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103e8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x2103F0u;
label_2103f0:
    // 0x2103f0: 0xc0a946c  jal         func_2A51B0
    ctx->pc = 0x2103F0u;
    SET_GPR_U32(ctx, 31, 0x2103F8u);
    ctx->pc = 0x2103F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2103F0u;
    // 0x2103f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A51B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51B0u, 0x2103F0u, 0x2103F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103F8u;
label_2103f8:
    // 0x2103f8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2103F8u;
    {
        const bool branch_taken_0x2103f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103F8u;
        // 0x2103fc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103f8) {
            ctx->pc = 0x210500u;
            return;
        }
    }
    ctx->pc = 0x210400u;
label_210400:
    // 0x210400: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x210400u;
    {
        const bool branch_taken_0x210400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210400u;
        // 0x210404: 0xa230018f  sb          $s0, 0x18F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 399), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210400) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210408u;
label_210408:
    // 0x210408: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x210408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x21040c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x21040Cu;
    {
        const bool branch_taken_0x21040c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21040Cu;
        // 0x210410: 0xa22201b2  sb          $v0, 0x1B2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 434), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21040c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210414u;
    // 0x210414: 0x0  nop
    ctx->pc = 0x210414u;
    // NOP
label_210418:
    // 0x210418: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x210418u;
    {
        const bool branch_taken_0x210418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210418u;
        // 0x21041c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210418) {
            ctx->pc = 0x210428u;
            goto label_210428;
        }
    }
    ctx->pc = 0x210420u;
    // 0x210420: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x210420u;
    {
        const bool branch_taken_0x210420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210420u;
        // 0x210424: 0xa22201b2  sb          $v0, 0x1B2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 434), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210420) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210428u;
label_210428:
    // 0x210428: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x210428u;
    {
        const bool branch_taken_0x210428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210428u;
        // 0x21042c: 0xa22001b2  sb          $zero, 0x1B2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 434), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210428) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210430u;
label_210430:
    // 0x210430: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x210430u;
    {
        const bool branch_taken_0x210430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210430u;
        // 0x210434: 0xa6300172  sh          $s0, 0x172($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 370), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210430) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210438u;
label_210438:
    // 0x210438: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x210438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21043c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x21043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x210440: 0x34427f05  ori         $v0, $v0, 0x7F05
    ctx->pc = 0x210440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32517);
    // 0x210444: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x210444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x210448: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21044c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210450: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x210450u;
    {
        const bool branch_taken_0x210450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210450u;
        // 0x210454: 0xac5000a8  sw          $s0, 0xA8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210450) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210458u;
label_210458:
    // 0x210458: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x210458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21045c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x21045cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x210460: 0x34427ee4  ori         $v0, $v0, 0x7EE4
    ctx->pc = 0x210460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32484);
    // 0x210464: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x210464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x210468: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x210468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x21046c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21046cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210470: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x210470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x210474: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x210474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x210478: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x210478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21047c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x21047Cu;
    {
        const bool branch_taken_0x21047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21047Cu;
        // 0x210480: 0xac4300a0  sw          $v1, 0xA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21047c) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x210484u;
    // 0x210484: 0x0  nop
    ctx->pc = 0x210484u;
    // NOP
label_210488:
    // 0x210488: 0x8e22089c  lw          $v0, 0x89C($s1)
    ctx->pc = 0x210488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2204)));
    // 0x21048c: 0x8443087c  lh          $v1, 0x87C($v0)
    ctx->pc = 0x21048cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2172)));
    // 0x210490: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x210490u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x210494: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x210494u;
    {
        const bool branch_taken_0x210494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210494u;
        // 0x210498: 0xa623007a  sh          $v1, 0x7A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210494) {
            ctx->pc = 0x2104FCu;
            return;
        }
    }
    ctx->pc = 0x21049Cu;
    // 0x21049c: 0x0  nop
    ctx->pc = 0x21049cu;
    // NOP
label_2104a0:
    // 0x2104a0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2104a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2104a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2104a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104a8: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2104a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2104ac: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2104acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2104b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2104b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2104b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2104b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2104b8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2104b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2104bc: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2104bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2104c0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2104c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2104c4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2104c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2104c8: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2104c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2104cc: 0x8e24089c  lw          $a0, 0x89C($s1)
    ctx->pc = 0x2104ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2204)));
    // 0x2104d0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2104d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2104d4: 0x24840830  addiu       $a0, $a0, 0x830
    ctx->pc = 0x2104d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
    // 0x2104d8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2104d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x2104dc: 0xc097d06  jal         func_25F418
    ctx->pc = 0x2104DCu;
    SET_GPR_U32(ctx, 31, 0x2104E4u);
    ctx->pc = 0x2104E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2104DCu;
    // 0x2104e0: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F418u, 0x2104DCu, 0x2104E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2104E4u;
label_2104e4:
    // 0x2104e4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2104e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2104e8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2104e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2104ec: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2104ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2104f0: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2104f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2104f4: 0xe6200750  swc1        $f0, 0x750($s1)
    ctx->pc = 0x2104f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1872), bits); }
    // 0x2104f8: 0xe6210758  swc1        $f1, 0x758($s1)
    ctx->pc = 0x2104f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1880), bits); }
    ctx->pc = 0x2104fcu;
}

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

// Function: sub_002D7300
// Address: 0x2d7300 - 0x2d8530
void sub_002D7300_0x2d7300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7300_0x2d7300");
#endif

    switch (ctx->pc) {
        case 0x2d7448u: goto label_2d7448;
        case 0x2d744cu: goto label_2d744c;
        case 0x2d7880u: goto label_2d7880;
        case 0x2d78d0u: goto label_2d78d0;
        case 0x2d79d4u: goto label_2d79d4;
        case 0x2d7a44u: goto label_2d7a44;
        case 0x2d7b98u: goto label_2d7b98;
        case 0x2d7d18u: goto label_2d7d18;
        case 0x2d7d68u: goto label_2d7d68;
        case 0x2d7db4u: goto label_2d7db4;
        case 0x2d7ff8u: goto label_2d7ff8;
        case 0x2d80e0u: goto label_2d80e0;
        case 0x2d8138u: goto label_2d8138;
        case 0x2d8190u: goto label_2d8190;
        case 0x2d8310u: goto label_2d8310;
        case 0x2d8330u: goto label_2d8330;
        case 0x2d8494u: goto label_2d8494;
        default: break;
    }

    ctx->pc = 0x2d7300u;

    // 0x2d7300: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2d7300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2d7304: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2d7304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2d7308: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d7308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d730c: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2d730cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2d7310: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2d7310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2d7314: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2d7314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x2d7318: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2d7318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2d731c: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x2d731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x2d7320: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2d7320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2d7324: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x2d7324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x2d7328: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2d7328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2d732c: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x2d732cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x2d7330: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2d7330u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2d7334: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2d7334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2d7338: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2d7338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x2d733c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d733cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d7340: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d7340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d7344: 0x944294e4  lhu         $v0, -0x6B1C($v0)
    ctx->pc = 0x2d7344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d7348: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d7348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d734c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d7350: 0x1440045d  bnez        $v0, . + 4 + (0x45D << 2)
    ctx->pc = 0x2D7350u;
    {
        const bool branch_taken_0x2d7350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7350u;
        // 0x2d7354: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7350) {
            ctx->pc = 0x2D84C8u;
            goto label_2d84c8;
        }
    }
    ctx->pc = 0x2D7358u;
    // 0x2d7358: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d7358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d735c: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d735cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d7360: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2d7360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d7364: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x2d7364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x2d7368: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d7368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d736c: 0x263500a8  addiu       $s5, $s1, 0xA8
    ctx->pc = 0x2d736cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x2d7370: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2d7370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2d7374: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d7374u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7378: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d7378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d737c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d737cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d7380: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d7380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d7384: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2d7384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2d7388: 0xa44000a8  sh          $zero, 0xA8($v0)
    ctx->pc = 0x2d7388u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d738c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2d738cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2d7390: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d7390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d7394: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7398: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7398u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d739c: 0xac2094e8  sw          $zero, -0x6B18($at)
    ctx->pc = 0x2d739cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939880), GPR_U32(ctx, 0));
    // 0x2d73a0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d73a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d73a4: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d73a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d73a8: 0xac209518  sw          $zero, -0x6AE8($at)
    ctx->pc = 0x2d73a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939928), GPR_U32(ctx, 0));
    // 0x2d73ac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d73acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d73b0: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d73b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d73b4: 0xc42894f0  lwc1        $f8, -0x6B10($at)
    ctx->pc = 0x2d73b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d73b8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d73b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d73bc: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d73bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d73c0: 0xc42094f4  lwc1        $f0, -0x6B0C($at)
    ctx->pc = 0x2d73c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d73c4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d73c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d73c8: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d73c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d73cc: 0xc42194f8  lwc1        $f1, -0x6B08($at)
    ctx->pc = 0x2d73ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d73d0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d73d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d73d4: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d73d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d73d8: 0xc4229510  lwc1        $f2, -0x6AF0($at)
    ctx->pc = 0x2d73d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d73dc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d73dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d73e0: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d73e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d73e4: 0xc4239514  lwc1        $f3, -0x6AEC($at)
    ctx->pc = 0x2d73e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d73e8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d73e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d73ec: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d73ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d73f0: 0xc4249500  lwc1        $f4, -0x6B00($at)
    ctx->pc = 0x2d73f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d73f4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d73f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d73f8: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d73f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d73fc: 0xc4259504  lwc1        $f5, -0x6AFC($at)
    ctx->pc = 0x2d73fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d7400: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7404: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7404u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7408: 0xc4269508  lwc1        $f6, -0x6AF8($at)
    ctx->pc = 0x2d7408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d740c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d740cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7410: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7410u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7414: 0xc427950c  lwc1        $f7, -0x6AF4($at)
    ctx->pc = 0x2d7414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d7418: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x2d7418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d741c: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x2d741cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d7420: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d7420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d7424: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2d7424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d7428: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2d7428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d742c: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2d742cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d7430: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x2d7430u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d7434: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x2d7434u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d7438: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x2d7438u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d743c: 0x104003a6  beqz        $v0, . + 4 + (0x3A6 << 2)
    ctx->pc = 0x2D743Cu;
    {
        const bool branch_taken_0x2d743c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D743Cu;
        // 0x2d7440: 0xe7a7003c  swc1        $f7, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d743c) {
            ctx->pc = 0x2D82D8u;
            goto label_2d82d8;
        }
    }
    ctx->pc = 0x2D7444u;
    // 0x2d7444: 0x0  nop
    ctx->pc = 0x2d7444u;
    // NOP
label_2d7448:
    // 0x2d7448: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d7448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d744c:
    // 0x2d744c: 0x15420014  bne         $t2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D744Cu;
    {
        const bool branch_taken_0x2d744c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D744Cu;
        // 0x2d7450: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d744c) {
            ctx->pc = 0x2D74A0u;
            goto label_2d74a0;
        }
    }
    ctx->pc = 0x2D7454u;
    // 0x2d7454: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x2d7454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d7458: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2d7458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2d745c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2d745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d7460: 0x948494e4  lhu         $a0, -0x6B1C($a0)
    ctx->pc = 0x2d7460u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294939876)));
    // 0x2d7464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d746c: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x2d746cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2d7470: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d7470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d7474: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7478: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7478u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d747c: 0xe42094fc  swc1        $f0, -0x6B04($at)
    ctx->pc = 0x2d747cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939900), bits); }
    // 0x2d7480: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7484: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7484u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7488: 0xe42094f0  swc1        $f0, -0x6B10($at)
    ctx->pc = 0x2d7488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939888), bits); }
    // 0x2d748c: 0x10600230  beqz        $v1, . + 4 + (0x230 << 2)
    ctx->pc = 0x2D748Cu;
    {
        const bool branch_taken_0x2d748c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D748Cu;
        // 0x2d7490: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d748c) {
            ctx->pc = 0x2D7D50u;
            goto label_2d7d50;
        }
    }
    ctx->pc = 0x2D7494u;
    // 0x2d7494: 0x1000021d  b           . + 4 + (0x21D << 2)
    ctx->pc = 0x2D7494u;
    {
        const bool branch_taken_0x2d7494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7494u;
        // 0x2d7498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7494) {
            ctx->pc = 0x2D7D0Cu;
            goto label_2d7d0c;
        }
    }
    ctx->pc = 0x2D749Cu;
    // 0x2d749c: 0x0  nop
    ctx->pc = 0x2d749cu;
    // NOP
label_2d74a0:
    // 0x2d74a0: 0x1542000b  bne         $t2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D74A0u;
    {
        const bool branch_taken_0x2d74a0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D74A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74A0u;
        // 0x2d74a4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74a0) {
            ctx->pc = 0x2D74D0u;
            goto label_2d74d0;
        }
    }
    ctx->pc = 0x2D74A8u;
    // 0x2d74a8: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x2d74a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d74ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d74acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d74b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d74b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d74b4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d74b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d74b8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d74b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d74bc: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d74bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d74c0: 0xe42094f4  swc1        $f0, -0x6B0C($at)
    ctx->pc = 0x2d74c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939892), bits); }
    // 0x2d74c4: 0x1000037b  b           . + 4 + (0x37B << 2)
    ctx->pc = 0x2D74C4u;
    {
        const bool branch_taken_0x2d74c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74C4u;
        // 0x2d74c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74c4) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D74CCu;
    // 0x2d74cc: 0x0  nop
    ctx->pc = 0x2d74ccu;
    // NOP
label_2d74d0:
    // 0x2d74d0: 0x1542000b  bne         $t2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D74D0u;
    {
        const bool branch_taken_0x2d74d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74D0u;
        // 0x2d74d4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74d0) {
            ctx->pc = 0x2D7500u;
            goto label_2d7500;
        }
    }
    ctx->pc = 0x2D74D8u;
    // 0x2d74d8: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x2d74d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d74dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d74dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d74e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d74e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d74e4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2d74e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d74e8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d74e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d74ec: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d74ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d74f0: 0xe42094f8  swc1        $f0, -0x6B08($at)
    ctx->pc = 0x2d74f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939896), bits); }
    // 0x2d74f4: 0x1000036f  b           . + 4 + (0x36F << 2)
    ctx->pc = 0x2D74F4u;
    {
        const bool branch_taken_0x2d74f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74F4u;
        // 0x2d74f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74f4) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D74FCu;
    // 0x2d74fc: 0x0  nop
    ctx->pc = 0x2d74fcu;
    // NOP
label_2d7500:
    // 0x2d7500: 0x15420009  bne         $t2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7500u;
    {
        const bool branch_taken_0x2d7500 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7500u;
        // 0x2d7504: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7500) {
            ctx->pc = 0x2D7528u;
            goto label_2d7528;
        }
    }
    ctx->pc = 0x2D7508u;
    // 0x2d7508: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x2d7508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d750c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d750cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7510: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7514: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7518: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7518u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d751c: 0xe4209518  swc1        $f0, -0x6AE8($at)
    ctx->pc = 0x2d751cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939928), bits); }
    // 0x2d7520: 0x10000364  b           . + 4 + (0x364 << 2)
    ctx->pc = 0x2D7520u;
    {
        const bool branch_taken_0x2d7520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7520u;
        // 0x2d7524: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7520) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7528u;
label_2d7528:
    // 0x2d7528: 0x15420007  bne         $t2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7528u;
    {
        const bool branch_taken_0x2d7528 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7528u;
        // 0x2d752c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7528) {
            ctx->pc = 0x2D7548u;
            goto label_2d7548;
        }
    }
    ctx->pc = 0x2D7530u;
    // 0x2d7530: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x2d7530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d7534: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7538: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7538u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d753c: 0xac2294e8  sw          $v0, -0x6B18($at)
    ctx->pc = 0x2d753cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939880), GPR_U32(ctx, 2));
    // 0x2d7540: 0x1000035c  b           . + 4 + (0x35C << 2)
    ctx->pc = 0x2D7540u;
    {
        const bool branch_taken_0x2d7540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7540u;
        // 0x2d7544: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7540) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7548u;
label_2d7548:
    // 0x2d7548: 0x15420005  bne         $t2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7548u;
    {
        const bool branch_taken_0x2d7548 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7548u;
        // 0x2d754c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7548) {
            ctx->pc = 0x2D7560u;
            goto label_2d7560;
        }
    }
    ctx->pc = 0x2D7550u;
    // 0x2d7550: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x2d7550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d7554: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x2d7554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d7558: 0x10000356  b           . + 4 + (0x356 << 2)
    ctx->pc = 0x2D7558u;
    {
        const bool branch_taken_0x2d7558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7558u;
        // 0x2d755c: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7558) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7560u;
label_2d7560:
    // 0x2d7560: 0x15420043  bne         $t2, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2D7560u;
    {
        const bool branch_taken_0x2d7560 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7560u;
        // 0x2d7564: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7560) {
            ctx->pc = 0x2D7670u;
            goto label_2d7670;
        }
    }
    ctx->pc = 0x2D7568u;
    // 0x2d7568: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x2d7568u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d756c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d756cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d7570: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x2d7570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2d7574: 0x2485e7e0  addiu       $a1, $a0, -0x1820
    ctx->pc = 0x2d7574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961120));
    // 0x2d7578: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2d7578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2d757c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2d757cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2d7580: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d7580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d7584: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2d7584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2d7588: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2d7588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2d758c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2d758cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d7590: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x2d7590u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x2d7594: 0x62402  srl         $a0, $a2, 16
    ctx->pc = 0x2d7594u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x2d7598: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d7598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d759c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2d759cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d75a0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2d75a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2d75a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d75a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d75a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d75a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d75ac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2d75acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d75b0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2d75b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2d75b4: 0x61602  srl         $v0, $a2, 24
    ctx->pc = 0x2d75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x2d75b8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2d75b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d75bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d75bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d75c0: 0xafa60074  sw          $a2, 0x74($sp)
    ctx->pc = 0x2d75c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 6));
    // 0x2d75c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d75c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d75c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d75c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d75cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d75ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d75d0: 0x0  nop
    ctx->pc = 0x2d75d0u;
    // NOP
    // 0x2d75d4: 0x0  nop
    ctx->pc = 0x2d75d4u;
    // NOP
    // 0x2d75d8: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2d75d8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x2d75dc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2d75dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2d75e0: 0x0  nop
    ctx->pc = 0x2d75e0u;
    // NOP
    // 0x2d75e4: 0x0  nop
    ctx->pc = 0x2d75e4u;
    // NOP
    // 0x2d75e8: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2d75e8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x2d75ec: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d75ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d75f0: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x2d75f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x2d75f4: 0xe420950c  swc1        $f0, -0x6AF4($at)
    ctx->pc = 0x2d75f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939916), bits); }
    // 0x2d75f8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d75f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d75fc: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x2d75fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x2d7600: 0xe4229504  swc1        $f2, -0x6AFC($at)
    ctx->pc = 0x2d7600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939908), bits); }
    // 0x2d7604: 0x0  nop
    ctx->pc = 0x2d7604u;
    // NOP
    // 0x2d7608: 0x0  nop
    ctx->pc = 0x2d7608u;
    // NOP
    // 0x2d760c: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x2d760cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[4];
    // 0x2d7610: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7614: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x2d7614u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x2d7618: 0xe4219508  swc1        $f1, -0x6AF8($at)
    ctx->pc = 0x2d7618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939912), bits); }
    // 0x2d761c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d761cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7620: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x2d7620u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x2d7624: 0xe4239500  swc1        $f3, -0x6B00($at)
    ctx->pc = 0x2d7624u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939904), bits); }
    // 0x2d7628: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d762c: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d762cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7630: 0xc4209500  lwc1        $f0, -0x6B00($at)
    ctx->pc = 0x2d7630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7634: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7638: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7638u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d763c: 0xc4219504  lwc1        $f1, -0x6AFC($at)
    ctx->pc = 0x2d763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7640: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7644: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7644u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7648: 0xc4229508  lwc1        $f2, -0x6AF8($at)
    ctx->pc = 0x2d7648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d764c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d764cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7650: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7650u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7654: 0xc423950c  lwc1        $f3, -0x6AF4($at)
    ctx->pc = 0x2d7654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d7658: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2d7658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d765c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2d765cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d7660: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2d7660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d7664: 0x10000313  b           . + 4 + (0x313 << 2)
    ctx->pc = 0x2D7664u;
    {
        const bool branch_taken_0x2d7664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7664u;
        // 0x2d7668: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7664) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D766Cu;
    // 0x2d766c: 0x0  nop
    ctx->pc = 0x2d766cu;
    // NOP
label_2d7670:
    // 0x2d7670: 0x15420015  bne         $t2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D7670u;
    {
        const bool branch_taken_0x2d7670 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7670u;
        // 0x2d7674: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7670) {
            ctx->pc = 0x2D76C8u;
            goto label_2d76c8;
        }
    }
    ctx->pc = 0x2D7678u;
    // 0x2d7678: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x2d7678u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d767c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x2d767cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x2d7680: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2d7680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2d7684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d7684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7688: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2d7688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2d768c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d768cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7690: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7694: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x2d7694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d7698: 0x8fa70074  lw          $a3, 0x74($sp)
    ctx->pc = 0x2d7698u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2d769c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2d769cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2d76a0: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2d76a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2d76a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d76a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d76a8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2d76a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2d76ac: 0xafa70074  sw          $a3, 0x74($sp)
    ctx->pc = 0x2d76acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 7));
    // 0x2d76b0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2d76b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d76b4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d76b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d76b8: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d76b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d76bc: 0xe420950c  swc1        $f0, -0x6AF4($at)
    ctx->pc = 0x2d76bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939916), bits); }
    // 0x2d76c0: 0x100002fc  b           . + 4 + (0x2FC << 2)
    ctx->pc = 0x2D76C0u;
    {
        const bool branch_taken_0x2d76c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76C0u;
        // 0x2d76c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76c0) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D76C8u;
label_2d76c8:
    // 0x2d76c8: 0x15420045  bne         $t2, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2D76C8u;
    {
        const bool branch_taken_0x2d76c8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76C8u;
        // 0x2d76cc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76c8) {
            ctx->pc = 0x2D77E0u;
            goto label_2d77e0;
        }
    }
    ctx->pc = 0x2D76D0u;
    // 0x2d76d0: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x2d76d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d76d4: 0x58400012  blezl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D76D4u;
    {
        const bool branch_taken_0x2d76d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d76d4) {
            ctx->pc = 0x2D76D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D76D4u;
            // 0x2d76d8: 0x96a30000  lhu         $v1, 0x0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7720u;
            goto label_2d7720;
        }
    }
    ctx->pc = 0x2D76DCu;
    // 0x2d76dc: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x2d76dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d76e0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2d76e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2d76e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d76e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d76e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d76e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d76ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d76ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d76f0: 0x0  nop
    ctx->pc = 0x2d76f0u;
    // NOP
    // 0x2d76f4: 0x0  nop
    ctx->pc = 0x2d76f4u;
    // NOP
    // 0x2d76f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d76f8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2d76fc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2d76fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d7700: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7704: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7704u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7708: 0xe4209510  swc1        $f0, -0x6AF0($at)
    ctx->pc = 0x2d7708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939920), bits); }
    // 0x2d770c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d770cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d7710: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7714: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7714u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7718: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2D7718u;
    {
        const bool branch_taken_0x2d7718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7718u;
        // 0x2d771c: 0xe4209514  swc1        $f0, -0x6AEC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939924), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7718) {
            ctx->pc = 0x2D776Cu;
            goto label_2d776c;
        }
    }
    ctx->pc = 0x2D7720u;
label_2d7720:
    // 0x2d7720: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d7720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d7724: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2d7724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2d7728: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d7728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d772c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d772cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d7730: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d7730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d7734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d7734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7738: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d7738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d773c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d773cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d7740: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2d7740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d7744: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7748: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7748u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d774c: 0xe4209514  swc1        $f0, -0x6AEC($at)
    ctx->pc = 0x2d774cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939924), bits); }
    // 0x2d7750: 0x0  nop
    ctx->pc = 0x2d7750u;
    // NOP
    // 0x2d7754: 0x0  nop
    ctx->pc = 0x2d7754u;
    // NOP
    // 0x2d7758: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2d7758u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x2d775c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2d775cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d7760: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7764: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7764u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7768: 0xe4219510  swc1        $f1, -0x6AF0($at)
    ctx->pc = 0x2d7768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939920), bits); }
label_2d776c:
    // 0x2d776c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d776cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7770: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7770u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7774: 0xc4209510  lwc1        $f0, -0x6AF0($at)
    ctx->pc = 0x2d7774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7778: 0xc78294dc  lwc1        $f2, -0x6B24($gp)
    ctx->pc = 0x2d7778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d777c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d777cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7780: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x2D7780u;
    {
        const bool branch_taken_0x2d7780 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7780u;
        // 0x2d7784: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7780) {
            ctx->pc = 0x2D77D0u;
            goto label_2d77d0;
        }
    }
    ctx->pc = 0x2D7788u;
    // 0x2d7788: 0xc78194e0  lwc1        $f1, -0x6B20($gp)
    ctx->pc = 0x2d7788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d778c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d778cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7790: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2D7790u;
    {
        const bool branch_taken_0x2d7790 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D7794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7790u;
        // 0x2d7794: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7790) {
            ctx->pc = 0x2D77D4u;
            goto label_2d77d4;
        }
    }
    ctx->pc = 0x2D7798u;
    // 0x2d7798: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d779c: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d779cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d77a0: 0xc4209514  lwc1        $f0, -0x6AEC($at)
    ctx->pc = 0x2d77a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d77a4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d77a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d77a8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2D77A8u;
    {
        const bool branch_taken_0x2d77a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77A8u;
        // 0x2d77ac: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77a8) {
            ctx->pc = 0x2D77D8u;
            goto label_2d77d8;
        }
    }
    ctx->pc = 0x2D77B0u;
    // 0x2d77b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d77b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d77b4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2D77B4u;
    {
        const bool branch_taken_0x2d77b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D77B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77B4u;
        // 0x2d77b8: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77b4) {
            ctx->pc = 0x2D77D4u;
            goto label_2d77d4;
        }
    }
    ctx->pc = 0x2D77BCu;
    // 0x2d77bc: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x2d77bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2d77c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d77c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d77c4: 0x100002bb  b           . + 4 + (0x2BB << 2)
    ctx->pc = 0x2D77C4u;
    {
        const bool branch_taken_0x2d77c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D77C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77C4u;
        // 0x2d77c8: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77c4) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D77CCu;
    // 0x2d77cc: 0x0  nop
    ctx->pc = 0x2d77ccu;
    // NOP
label_2d77d0:
    // 0x2d77d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2d77d4:
    // 0x2d77d4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2d77d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_2d77d8:
    // 0x2d77d8: 0x100002b6  b           . + 4 + (0x2B6 << 2)
    ctx->pc = 0x2D77D8u;
    {
        const bool branch_taken_0x2d77d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77D8u;
        // 0x2d77dc: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77d8) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D77E0u;
label_2d77e0:
    // 0x2d77e0: 0x15420007  bne         $t2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D77E0u;
    {
        const bool branch_taken_0x2d77e0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77E0u;
        // 0x2d77e4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77e0) {
            ctx->pc = 0x2D7800u;
            goto label_2d7800;
        }
    }
    ctx->pc = 0x2D77E8u;
    // 0x2d77e8: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x2d77e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d77ec: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d77ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d77f0: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d77f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d77f4: 0xa42294e0  sh          $v0, -0x6B20($at)
    ctx->pc = 0x2d77f4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939872), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d77f8: 0x100002ae  b           . + 4 + (0x2AE << 2)
    ctx->pc = 0x2D77F8u;
    {
        const bool branch_taken_0x2d77f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77F8u;
        // 0x2d77fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77f8) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7800u;
label_2d7800:
    // 0x2d7800: 0x554200a7  bnel        $t2, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2D7800u;
    {
        const bool branch_taken_0x2d7800 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d7800) {
            ctx->pc = 0x2D7804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7800u;
            // 0x2d7804: 0x96a70000  lhu         $a3, 0x0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7AA0u;
            goto label_2d7aa0;
        }
    }
    ctx->pc = 0x2D7808u;
    // 0x2d7808: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x2d7808u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d780c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d7810: 0x30830030  andi        $v1, $a0, 0x30
    ctx->pc = 0x2d7810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x2d7814: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D7814u;
    {
        const bool branch_taken_0x2d7814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7814u;
        // 0x2d7818: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7814) {
            ctx->pc = 0x2D7878u;
            goto label_2d7878;
        }
    }
    ctx->pc = 0x2D781Cu;
    // 0x2d781c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D781Cu;
    {
        const bool branch_taken_0x2d781c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D781Cu;
        // 0x2d7820: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d781c) {
            ctx->pc = 0x2D7838u;
            goto label_2d7838;
        }
    }
    ctx->pc = 0x2D7824u;
    // 0x2d7824: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D7824u;
    {
        const bool branch_taken_0x2d7824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7824u;
        // 0x2d7828: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7824) {
            ctx->pc = 0x2D7848u;
            goto label_2d7848;
        }
    }
    ctx->pc = 0x2D782Cu;
    // 0x2d782c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2D782Cu;
    {
        const bool branch_taken_0x2d782c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d782c) {
            ctx->pc = 0x2D7908u;
            goto label_2d7908;
        }
    }
    ctx->pc = 0x2D7834u;
    // 0x2d7834: 0x0  nop
    ctx->pc = 0x2d7834u;
    // NOP
label_2d7838:
    // 0x2d7838: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D7838u;
    {
        const bool branch_taken_0x2d7838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7838u;
        // 0x2d783c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7838) {
            ctx->pc = 0x2D78C8u;
            goto label_2d78c8;
        }
    }
    ctx->pc = 0x2D7840u;
    // 0x2d7840: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2D7840u;
    {
        const bool branch_taken_0x2d7840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7840) {
            ctx->pc = 0x2D7908u;
            goto label_2d7908;
        }
    }
    ctx->pc = 0x2D7848u;
label_2d7848:
    // 0x2d7848: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d7848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d784c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d7850: 0x944294e4  lhu         $v0, -0x6B1C($v0)
    ctx->pc = 0x2d7850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d7854: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7858: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7858u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d785c: 0xac2094e8  sw          $zero, -0x6B18($at)
    ctx->pc = 0x2d785cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939880), GPR_U32(ctx, 0));
    // 0x2d7860: 0x3042ffcf  andi        $v0, $v0, 0xFFCF
    ctx->pc = 0x2d7860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65487);
    // 0x2d7864: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7868: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7868u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d786c: 0xa42294e4  sh          $v0, -0x6B1C($at)
    ctx->pc = 0x2d786cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939876), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7870: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2D7870u;
    {
        const bool branch_taken_0x2d7870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7870u;
        // 0x2d7874: 0x96a40000  lhu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7870) {
            ctx->pc = 0x2D7904u;
            goto label_2d7904;
        }
    }
    ctx->pc = 0x2D7878u;
label_2d7878:
    // 0x2d7878: 0xc0b5cac  jal         func_2D72B0
    ctx->pc = 0x2D7878u;
    SET_GPR_U32(ctx, 31, 0x2D7880u);
    ctx->pc = 0x2D787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7878u;
    // 0x2d787c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D72B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D72B0u, 0x2D7878u, 0x2D7880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7880u;
label_2d7880:
    // 0x2d7880: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d7880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d7884: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d7884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d7888: 0x946394e4  lhu         $v1, -0x6B1C($v1)
    ctx->pc = 0x2d7888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939876)));
    // 0x2d788c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2d788cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2d7890: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2d7890u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d7894: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2d7894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2d7898: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d7898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d789c: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x2d789cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x2d78a0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2d78a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2d78a4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d78a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d78a8: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d78a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d78ac: 0xa42394e4  sh          $v1, -0x6B1C($at)
    ctx->pc = 0x2d78acu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939876), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d78b0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d78b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d78b4: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d78b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d78b8: 0xac2294e8  sw          $v0, -0x6B18($at)
    ctx->pc = 0x2d78b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939880), GPR_U32(ctx, 2));
    // 0x2d78bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D78BCu;
    {
        const bool branch_taken_0x2d78bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D78C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78BCu;
        // 0x2d78c0: 0x96a40000  lhu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78bc) {
            ctx->pc = 0x2D7904u;
            goto label_2d7904;
        }
    }
    ctx->pc = 0x2D78C4u;
    // 0x2d78c4: 0x0  nop
    ctx->pc = 0x2d78c4u;
    // NOP
label_2d78c8:
    // 0x2d78c8: 0xc0b5cac  jal         func_2D72B0
    ctx->pc = 0x2D78C8u;
    SET_GPR_U32(ctx, 31, 0x2D78D0u);
    ctx->pc = 0x2D78CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D78C8u;
    // 0x2d78cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D72B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D72B0u, 0x2D78C8u, 0x2D78D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D78D0u;
label_2d78d0:
    // 0x2d78d0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d78d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d78d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d78d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d78d8: 0x946394e4  lhu         $v1, -0x6B1C($v1)
    ctx->pc = 0x2d78d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939876)));
    // 0x2d78dc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2d78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2d78e0: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x2d78e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x2d78e4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d78e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d78e8: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d78e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d78ec: 0xac2294e8  sw          $v0, -0x6B18($at)
    ctx->pc = 0x2d78ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939880), GPR_U32(ctx, 2));
    // 0x2d78f0: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x2d78f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x2d78f4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d78f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d78f8: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d78f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d78fc: 0xa42394e4  sh          $v1, -0x6B1C($at)
    ctx->pc = 0x2d78fcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939876), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7900: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x2d7900u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_2d7904:
    // 0x2d7904: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2d7904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_2d7908:
    // 0x2d7908: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7908u;
    {
        const bool branch_taken_0x2d7908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7908) {
            ctx->pc = 0x2D7928u;
            goto label_2d7928;
        }
    }
    ctx->pc = 0x2D7910u;
    // 0x2d7910: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d7910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d7914: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d7914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d7918: 0x944294e4  lhu         $v0, -0x6B1C($v0)
    ctx->pc = 0x2d7918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d791c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D791Cu;
    {
        const bool branch_taken_0x2d791c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D791Cu;
        // 0x2d7920: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d791c) {
            ctx->pc = 0x2D7938u;
            goto label_2d7938;
        }
    }
    ctx->pc = 0x2D7924u;
    // 0x2d7924: 0x0  nop
    ctx->pc = 0x2d7924u;
    // NOP
label_2d7928:
    // 0x2d7928: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d7928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d792c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d7930: 0x944294e4  lhu         $v0, -0x6B1C($v0)
    ctx->pc = 0x2d7930u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d7934: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2d7934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_2d7938:
    // 0x2d7938: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d793c: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d793cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7940: 0xa42294e4  sh          $v0, -0x6B1C($at)
    ctx->pc = 0x2d7940u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939876), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7944: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x2d7944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d7948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d794c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x2d794cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d7950: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D7950u;
    {
        const bool branch_taken_0x2d7950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7950u;
        // 0x2d7954: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7950) {
            ctx->pc = 0x2D79B0u;
            goto label_2d79b0;
        }
    }
    ctx->pc = 0x2D7958u;
    // 0x2d7958: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7958u;
    {
        const bool branch_taken_0x2d7958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7958u;
        // 0x2d795c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7958) {
            ctx->pc = 0x2D7970u;
            goto label_2d7970;
        }
    }
    ctx->pc = 0x2D7960u;
    // 0x2d7960: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7960u;
    {
        const bool branch_taken_0x2d7960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7960u;
        // 0x2d7964: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7960) {
            ctx->pc = 0x2D7980u;
            goto label_2d7980;
        }
    }
    ctx->pc = 0x2D7968u;
    // 0x2d7968: 0x10000253  b           . + 4 + (0x253 << 2)
    ctx->pc = 0x2D7968u;
    {
        const bool branch_taken_0x2d7968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7968u;
        // 0x2d796c: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7968) {
            ctx->pc = 0x2D82B8u;
            goto label_2d82b8;
        }
    }
    ctx->pc = 0x2D7970u;
label_2d7970:
    // 0x2d7970: 0x1082002b  beq         $a0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D7970u;
    {
        const bool branch_taken_0x2d7970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7970u;
        // 0x2d7974: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7970) {
            ctx->pc = 0x2D7A20u;
            goto label_2d7a20;
        }
    }
    ctx->pc = 0x2D7978u;
    // 0x2d7978: 0x1000024f  b           . + 4 + (0x24F << 2)
    ctx->pc = 0x2D7978u;
    {
        const bool branch_taken_0x2d7978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7978u;
        // 0x2d797c: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7978) {
            ctx->pc = 0x2D82B8u;
            goto label_2d82b8;
        }
    }
    ctx->pc = 0x2D7980u;
label_2d7980:
    // 0x2d7980: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2d7980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2d7984: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2d7984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d7988: 0x948494e4  lhu         $a0, -0x6B1C($a0)
    ctx->pc = 0x2d7988u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294939876)));
    // 0x2d798c: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x2d798cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x2d7990: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2D7990u;
    {
        const bool branch_taken_0x2d7990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7990u;
        // 0x2d7994: 0x3082fff3  andi        $v0, $a0, 0xFFF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65523);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7990) {
            ctx->pc = 0x2D7A88u;
            goto label_2d7a88;
        }
    }
    ctx->pc = 0x2D7998u;
    // 0x2d7998: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d799c: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d799cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d79a0: 0xc42894fc  lwc1        $f8, -0x6B04($at)
    ctx->pc = 0x2d79a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d79a4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2D79A4u;
    {
        const bool branch_taken_0x2d79a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79A4u;
        // 0x2d79a8: 0xe7a80000  swc1        $f8, 0x0($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79a4) {
            ctx->pc = 0x2D7A88u;
            goto label_2d7a88;
        }
    }
    ctx->pc = 0x2D79ACu;
    // 0x2d79ac: 0x0  nop
    ctx->pc = 0x2d79acu;
    // NOP
label_2d79b0:
    // 0x2d79b0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d79b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d79b8: 0x8c4294e4  lw          $v0, -0x6B1C($v0)
    ctx->pc = 0x2d79b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d79bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d79bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d79c0: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x2d79c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x2d79c4: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D79C4u;
    {
        const bool branch_taken_0x2d79c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79C4u;
        // 0x2d79c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79c4) {
            ctx->pc = 0x2D7A04u;
            goto label_2d7a04;
        }
    }
    ctx->pc = 0x2D79CCu;
    // 0x2d79cc: 0xc0b5bfc  jal         func_2D6FF0
    ctx->pc = 0x2D79CCu;
    SET_GPR_U32(ctx, 31, 0x2D79D4u);
    ctx->pc = 0x2D79D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D79CCu;
    // 0x2d79d0: 0x26a50002  addiu       $a1, $s5, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6FF0u, 0x2D79CCu, 0x2D79D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D79D4u;
label_2d79d4:
    // 0x2d79d4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d79d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d79d8: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d79d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d79dc: 0xc42194fc  lwc1        $f1, -0x6B04($at)
    ctx->pc = 0x2d79dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d79e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d79e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79e4: 0x24a4007f  addiu       $a0, $a1, 0x7F
    ctx->pc = 0x2d79e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x2d79e8: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x2d79e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d79ec: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x2d79ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x2d79f0: 0x519c3  sra         $v1, $a1, 7
    ctx->pc = 0x2d79f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 7));
    // 0x2d79f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d79f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d79f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d79f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d79fc: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x2d79fcu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7a00: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x2d7a00u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d7a04:
    // 0x2d7a04: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d7a08: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d7a0c: 0x944294e4  lhu         $v0, -0x6B1C($v0)
    ctx->pc = 0x2d7a0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d7a10: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2d7a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2d7a14: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2D7A14u;
    {
        const bool branch_taken_0x2d7a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A14u;
        // 0x2d7a18: 0x3042fff7  andi        $v0, $v0, 0xFFF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a14) {
            ctx->pc = 0x2D7A88u;
            goto label_2d7a88;
        }
    }
    ctx->pc = 0x2D7A1Cu;
    // 0x2d7a1c: 0x0  nop
    ctx->pc = 0x2d7a1cu;
    // NOP
label_2d7a20:
    // 0x2d7a20: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d7a24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d7a28: 0x8c4294e4  lw          $v0, -0x6B1C($v0)
    ctx->pc = 0x2d7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d7a2c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2d7a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d7a30: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x2d7a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x2d7a34: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D7A34u;
    {
        const bool branch_taken_0x2d7a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A34u;
        // 0x2d7a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a34) {
            ctx->pc = 0x2D7A74u;
            goto label_2d7a74;
        }
    }
    ctx->pc = 0x2D7A3Cu;
    // 0x2d7a3c: 0xc0b5bfc  jal         func_2D6FF0
    ctx->pc = 0x2D7A3Cu;
    SET_GPR_U32(ctx, 31, 0x2D7A44u);
    ctx->pc = 0x2D7A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A3Cu;
    // 0x2d7a40: 0x26a50002  addiu       $a1, $s5, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6FF0u, 0x2D7A3Cu, 0x2D7A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A44u;
label_2d7a44:
    // 0x2d7a44: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7a48: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7a48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7a4c: 0xc42194fc  lwc1        $f1, -0x6B04($at)
    ctx->pc = 0x2d7a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7a50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d7a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a54: 0x24a4003f  addiu       $a0, $a1, 0x3F
    ctx->pc = 0x2d7a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x2d7a58: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x2d7a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d7a5c: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x2d7a5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x2d7a60: 0x51983  sra         $v1, $a1, 6
    ctx->pc = 0x2d7a60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 6));
    // 0x2d7a64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d7a64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7a68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7a6c: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x2d7a6cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7a70: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x2d7a70u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d7a74:
    // 0x2d7a74: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d7a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d7a78: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d7a7c: 0x944294e4  lhu         $v0, -0x6B1C($v0)
    ctx->pc = 0x2d7a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d7a80: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x2d7a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x2d7a84: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2d7a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_2d7a88:
    // 0x2d7a88: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7a8c: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7a90: 0xa42294e4  sh          $v0, -0x6B1C($at)
    ctx->pc = 0x2d7a90u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939876), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7a94: 0x10000207  b           . + 4 + (0x207 << 2)
    ctx->pc = 0x2D7A94u;
    {
        const bool branch_taken_0x2d7a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A94u;
        // 0x2d7a98: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a94) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7A9Cu;
    // 0x2d7a9c: 0x0  nop
    ctx->pc = 0x2d7a9cu;
    // NOP
label_2d7aa0:
    // 0x2d7aa0: 0x3402fff0  ori         $v0, $zero, 0xFFF0
    ctx->pc = 0x2d7aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x2d7aa4: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x2d7aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2d7aa8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7AA8u;
    {
        const bool branch_taken_0x2d7aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AA8u;
        // 0x2d7aac: 0x3402fff1  ori         $v0, $zero, 0xFFF1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7aa8) {
            ctx->pc = 0x2D7AB8u;
            goto label_2d7ab8;
        }
    }
    ctx->pc = 0x2D7AB0u;
    // 0x2d7ab0: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x2D7AB0u;
    {
        const bool branch_taken_0x2d7ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AB0u;
        // 0x2d7ab4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ab0) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7AB8u;
label_2d7ab8:
    // 0x2d7ab8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7AB8u;
    {
        const bool branch_taken_0x2d7ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AB8u;
        // 0x2d7abc: 0x3402fff6  ori         $v0, $zero, 0xFFF6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65526);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ab8) {
            ctx->pc = 0x2D7AC8u;
            goto label_2d7ac8;
        }
    }
    ctx->pc = 0x2D7AC0u;
    // 0x2d7ac0: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x2D7AC0u;
    {
        const bool branch_taken_0x2d7ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AC0u;
        // 0x2d7ac4: 0x240a0003  addiu       $t2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ac0) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7AC8u;
label_2d7ac8:
    // 0x2d7ac8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7AC8u;
    {
        const bool branch_taken_0x2d7ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AC8u;
        // 0x2d7acc: 0x3402fff2  ori         $v0, $zero, 0xFFF2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65522);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ac8) {
            ctx->pc = 0x2D7AD8u;
            goto label_2d7ad8;
        }
    }
    ctx->pc = 0x2D7AD0u;
    // 0x2d7ad0: 0x100001f8  b           . + 4 + (0x1F8 << 2)
    ctx->pc = 0x2D7AD0u;
    {
        const bool branch_taken_0x2d7ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AD0u;
        // 0x2d7ad4: 0x240a0009  addiu       $t2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ad0) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7AD8u;
label_2d7ad8:
    // 0x2d7ad8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7AD8u;
    {
        const bool branch_taken_0x2d7ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AD8u;
        // 0x2d7adc: 0x3402fff3  ori         $v0, $zero, 0xFFF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65523);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ad8) {
            ctx->pc = 0x2D7AE8u;
            goto label_2d7ae8;
        }
    }
    ctx->pc = 0x2D7AE0u;
    // 0x2d7ae0: 0x100001f4  b           . + 4 + (0x1F4 << 2)
    ctx->pc = 0x2D7AE0u;
    {
        const bool branch_taken_0x2d7ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AE0u;
        // 0x2d7ae4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ae0) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7AE8u;
label_2d7ae8:
    // 0x2d7ae8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7AE8u;
    {
        const bool branch_taken_0x2d7ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AE8u;
        // 0x2d7aec: 0x3402fff4  ori         $v0, $zero, 0xFFF4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65524);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ae8) {
            ctx->pc = 0x2D7AF8u;
            goto label_2d7af8;
        }
    }
    ctx->pc = 0x2D7AF0u;
    // 0x2d7af0: 0x100001f0  b           . + 4 + (0x1F0 << 2)
    ctx->pc = 0x2D7AF0u;
    {
        const bool branch_taken_0x2d7af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AF0u;
        // 0x2d7af4: 0x240a0006  addiu       $t2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7af0) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7AF8u;
label_2d7af8:
    // 0x2d7af8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7AF8u;
    {
        const bool branch_taken_0x2d7af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AF8u;
        // 0x2d7afc: 0x3402fff5  ori         $v0, $zero, 0xFFF5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7af8) {
            ctx->pc = 0x2D7B08u;
            goto label_2d7b08;
        }
    }
    ctx->pc = 0x2D7B00u;
    // 0x2d7b00: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x2D7B00u;
    {
        const bool branch_taken_0x2d7b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B00u;
        // 0x2d7b04: 0x240a0007  addiu       $t2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b00) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7B08u;
label_2d7b08:
    // 0x2d7b08: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7B08u;
    {
        const bool branch_taken_0x2d7b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B08u;
        // 0x2d7b0c: 0x3402fff7  ori         $v0, $zero, 0xFFF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b08) {
            ctx->pc = 0x2D7B18u;
            goto label_2d7b18;
        }
    }
    ctx->pc = 0x2D7B10u;
    // 0x2d7b10: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x2D7B10u;
    {
        const bool branch_taken_0x2d7b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B10u;
        // 0x2d7b14: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b10) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7B18u;
label_2d7b18:
    // 0x2d7b18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7B18u;
    {
        const bool branch_taken_0x2d7b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B18u;
        // 0x2d7b1c: 0x3402fff8  ori         $v0, $zero, 0xFFF8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b18) {
            ctx->pc = 0x2D7B28u;
            goto label_2d7b28;
        }
    }
    ctx->pc = 0x2D7B20u;
    // 0x2d7b20: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x2D7B20u;
    {
        const bool branch_taken_0x2d7b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B20u;
        // 0x2d7b24: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b20) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7B28u;
label_2d7b28:
    // 0x2d7b28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7B28u;
    {
        const bool branch_taken_0x2d7b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B28u;
        // 0x2d7b2c: 0x3402fff9  ori         $v0, $zero, 0xFFF9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b28) {
            ctx->pc = 0x2D7B38u;
            goto label_2d7b38;
        }
    }
    ctx->pc = 0x2D7B30u;
    // 0x2d7b30: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x2D7B30u;
    {
        const bool branch_taken_0x2d7b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B30u;
        // 0x2d7b34: 0x240a000b  addiu       $t2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b30) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7B38u;
label_2d7b38:
    // 0x2d7b38: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7B38u;
    {
        const bool branch_taken_0x2d7b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B38u;
        // 0x2d7b3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b38) {
            ctx->pc = 0x2D7B48u;
            goto label_2d7b48;
        }
    }
    ctx->pc = 0x2D7B40u;
    // 0x2d7b40: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x2D7B40u;
    {
        const bool branch_taken_0x2d7b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B40u;
        // 0x2d7b44: 0x240a000c  addiu       $t2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b40) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7B48u;
label_2d7b48:
    // 0x2d7b48: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d7b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d7b4c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d7b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d7b50: 0x846394e0  lh          $v1, -0x6B20($v1)
    ctx->pc = 0x2d7b50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939872)));
    // 0x2d7b54: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x2d7b54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
    // 0x2d7b58: 0x1114021  addu        $t0, $t0, $s1
    ctx->pc = 0x2d7b58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x2d7b5c: 0x950894e0  lhu         $t0, -0x6B20($t0)
    ctx->pc = 0x2d7b5cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294939872)));
    // 0x2d7b60: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D7B60u;
    {
        const bool branch_taken_0x2d7b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B60u;
        // 0x2d7b64: 0x81400  sll         $v0, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b60) {
            ctx->pc = 0x2D7BC8u;
            goto label_2d7bc8;
        }
    }
    ctx->pc = 0x2D7B68u;
    // 0x2d7b68: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x2d7b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x2d7b6c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2d7b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d7b70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d7b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b74: 0x18800015  blez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D7B74u;
    {
        const bool branch_taken_0x2d7b74 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2D7B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B74u;
        // 0x2d7b78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b74) {
            ctx->pc = 0x2D7BCCu;
            goto label_2d7bcc;
        }
    }
    ctx->pc = 0x2D7B7Cu;
    // 0x2d7b7c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d7b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d7b80: 0x9482e7c8  lhu         $v0, -0x1838($a0)
    ctx->pc = 0x2d7b80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x3BE7C8u));
    // 0x2d7b84: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2d7b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2d7b88: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7B88u;
    {
        const bool branch_taken_0x2d7b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7b88) {
            ctx->pc = 0x2D7B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7B88u;
            // 0x2d7b8c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7B98u;
            goto label_2d7b98;
        }
    }
    ctx->pc = 0x2D7B90u;
    // 0x2d7b90: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D7B90u;
    {
        const bool branch_taken_0x2d7b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B90u;
        // 0x2d7b94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b90) {
            ctx->pc = 0x2D7BCCu;
            goto label_2d7bcc;
        }
    }
    ctx->pc = 0x2D7B98u;
label_2d7b98:
    // 0x2d7b98: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x2d7b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d7b9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D7B9Cu;
    {
        const bool branch_taken_0x2d7b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B9Cu;
        // 0x2d7ba0: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b9c) {
            ctx->pc = 0x2D7BCCu;
            goto label_2d7bcc;
        }
    }
    ctx->pc = 0x2D7BA4u;
    // 0x2d7ba4: 0x2482e7c8  addiu       $v0, $a0, -0x1838
    ctx->pc = 0x2d7ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961096));
    // 0x2d7ba8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d7ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d7bac: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2d7bacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7bb0: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x2d7bb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2d7bb4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D7BB4u;
    {
        const bool branch_taken_0x2d7bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7bb4) {
            ctx->pc = 0x2D7BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7BB4u;
            // 0x2d7bb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7b98;
        }
    }
    ctx->pc = 0x2D7BBCu;
    // 0x2d7bbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7BBCu;
    {
        const bool branch_taken_0x2d7bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7BBCu;
        // 0x2d7bc0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7bbc) {
            ctx->pc = 0x2D7BCCu;
            goto label_2d7bcc;
        }
    }
    ctx->pc = 0x2D7BC4u;
    // 0x2d7bc4: 0x0  nop
    ctx->pc = 0x2d7bc4u;
    // NOP
label_2d7bc8:
    // 0x2d7bc8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2d7bc8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_2d7bcc:
    // 0x2d7bcc: 0x96a50000  lhu         $a1, 0x0($s5)
    ctx->pc = 0x2d7bccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d7bd0: 0x2ca22122  sltiu       $v0, $a1, 0x2122
    ctx->pc = 0x2d7bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8482) ? 1 : 0);
    // 0x2d7bd4: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D7BD4u;
    {
        const bool branch_taken_0x2d7bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7bd4) {
            ctx->pc = 0x2D7BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7BD4u;
            // 0x2d7bd8: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7C8Cu;
            goto label_2d7c8c;
        }
    }
    ctx->pc = 0x2D7BDCu;
    // 0x2d7bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7be0: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7BE0u;
    {
        const bool branch_taken_0x2d7be0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7BE0u;
        // 0x2d7be4: 0x24a22000  addiu       $v0, $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7be0) {
            ctx->pc = 0x2D7BF0u;
            goto label_2d7bf0;
        }
    }
    ctx->pc = 0x2D7BE8u;
    // 0x2d7be8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2D7BE8u;
    {
        const bool branch_taken_0x2d7be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7BE8u;
        // 0x2d7bec: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7be8) {
            ctx->pc = 0x2D7C8Cu;
            goto label_2d7c8c;
        }
    }
    ctx->pc = 0x2D7BF0u;
label_2d7bf0:
    // 0x2d7bf0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d7bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d7bf4: 0x2c420054  sltiu       $v0, $v0, 0x54
    ctx->pc = 0x2d7bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)84) ? 1 : 0);
    // 0x2d7bf8: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D7BF8u;
    {
        const bool branch_taken_0x2d7bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7bf8) {
            ctx->pc = 0x2D7BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7BF8u;
            // 0x2d7bfc: 0x24170002  addiu       $s7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7C8Cu;
            goto label_2d7c8c;
        }
    }
    ctx->pc = 0x2D7C00u;
    // 0x2d7c00: 0x3402de70  ori         $v0, $zero, 0xDE70
    ctx->pc = 0x2d7c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56944);
    // 0x2d7c04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d7c08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d7c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d7c0c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2d7c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d7c10: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D7C10u;
    {
        const bool branch_taken_0x2d7c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7c10) {
            ctx->pc = 0x2D7C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7C10u;
            // 0x2d7c14: 0x24170002  addiu       $s7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7C8Cu;
            goto label_2d7c8c;
        }
    }
    ctx->pc = 0x2D7C18u;
    // 0x2d7c18: 0x3402cff0  ori         $v0, $zero, 0xCFF0
    ctx->pc = 0x2d7c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53232);
    // 0x2d7c1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d7c20: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d7c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d7c24: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2d7c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d7c28: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D7C28u;
    {
        const bool branch_taken_0x2d7c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7c28) {
            ctx->pc = 0x2D7C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7C28u;
            // 0x2d7c2c: 0x24170002  addiu       $s7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7C8Cu;
            goto label_2d7c8c;
        }
    }
    ctx->pc = 0x2D7C30u;
    // 0x2d7c30: 0x24022606  addiu       $v0, $zero, 0x2606
    ctx->pc = 0x2d7c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9734));
    // 0x2d7c34: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D7C34u;
    {
        const bool branch_taken_0x2d7c34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C34u;
        // 0x2d7c38: 0x24022500  addiu       $v0, $zero, 0x2500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c34) {
            ctx->pc = 0x2D7C6Cu;
            goto label_2d7c6c;
        }
    }
    ctx->pc = 0x2D7C3Cu;
    // 0x2d7c3c: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D7C3Cu;
    {
        const bool branch_taken_0x2d7c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C3Cu;
        // 0x2d7c40: 0x24022502  addiu       $v0, $zero, 0x2502 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9474));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c3c) {
            ctx->pc = 0x2D7C6Cu;
            goto label_2d7c6c;
        }
    }
    ctx->pc = 0x2D7C44u;
    // 0x2d7c44: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7C44u;
    {
        const bool branch_taken_0x2d7c44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C44u;
        // 0x2d7c48: 0x2402253c  addiu       $v0, $zero, 0x253C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c44) {
            ctx->pc = 0x2D7C6Cu;
            goto label_2d7c6c;
        }
    }
    ctx->pc = 0x2D7C4Cu;
    // 0x2d7c4c: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7C4Cu;
    {
        const bool branch_taken_0x2d7c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C4Cu;
        // 0x2d7c50: 0x240224b8  addiu       $v0, $zero, 0x24B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c4c) {
            ctx->pc = 0x2D7C6Cu;
            goto label_2d7c6c;
        }
    }
    ctx->pc = 0x2D7C54u;
    // 0x2d7c54: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7C54u;
    {
        const bool branch_taken_0x2d7c54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C54u;
        // 0x2d7c58: 0x240224c7  addiu       $v0, $zero, 0x24C7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9415));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c54) {
            ctx->pc = 0x2D7C6Cu;
            goto label_2d7c6c;
        }
    }
    ctx->pc = 0x2D7C5Cu;
    // 0x2d7c5c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7C5Cu;
    {
        const bool branch_taken_0x2d7c5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C5Cu;
        // 0x2d7c60: 0x24022122  addiu       $v0, $zero, 0x2122 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8482));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c5c) {
            ctx->pc = 0x2D7C6Cu;
            goto label_2d7c6c;
        }
    }
    ctx->pc = 0x2D7C64u;
    // 0x2d7c64: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7C64u;
    {
        const bool branch_taken_0x2d7c64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C64u;
        // 0x2d7c68: 0x38a325a0  xori        $v1, $a1, 0x25A0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)9632);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c64) {
            ctx->pc = 0x2D7C78u;
            goto label_2d7c78;
        }
    }
    ctx->pc = 0x2D7C6Cu;
label_2d7c6c:
    // 0x2d7c6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7C6Cu;
    {
        const bool branch_taken_0x2d7c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C6Cu;
        // 0x2d7c70: 0x24170002  addiu       $s7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c6c) {
            ctx->pc = 0x2D7C8Cu;
            goto label_2d7c8c;
        }
    }
    ctx->pc = 0x2D7C74u;
    // 0x2d7c74: 0x0  nop
    ctx->pc = 0x2d7c74u;
    // NOP
label_2d7c78:
    // 0x2d7c78: 0x3402ff5e  ori         $v0, $zero, 0xFF5E
    ctx->pc = 0x2d7c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65374);
    // 0x2d7c7c: 0x3b80a  movz        $s7, $zero, $v1
    ctx->pc = 0x2d7c7cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
    // 0x2d7c80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7c84: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x2d7c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x2d7c88: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x2d7c88u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
label_2d7c8c:
    // 0x2d7c8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d7c90: 0x12e20188  beq         $s7, $v0, . + 4 + (0x188 << 2)
    ctx->pc = 0x2D7C90u;
    {
        const bool branch_taken_0x2d7c90 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C90u;
        // 0x2d7c94: 0x30e3ffff  andi        $v1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c90) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7C98u;
    // 0x2d7c98: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2d7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2d7c9c: 0x10620185  beq         $v1, $v0, . + 4 + (0x185 << 2)
    ctx->pc = 0x2D7C9Cu;
    {
        const bool branch_taken_0x2d7c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C9Cu;
        // 0x2d7ca0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c9c) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7CA4u;
    // 0x2d7ca4: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2D7CA4u;
    {
        const bool branch_taken_0x2d7ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CA4u;
        // 0x2d7ca8: 0x3102ffff  andi        $v0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ca4) {
            ctx->pc = 0x2D7D98u;
            goto label_2d7d98;
        }
    }
    ctx->pc = 0x2D7CACu;
    // 0x2d7cac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7cb0: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7cb4: 0xc42894fc  lwc1        $f8, -0x6B04($at)
    ctx->pc = 0x2d7cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d7cb8: 0x1710c0  sll         $v0, $s7, 3
    ctx->pc = 0x2d7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x2d7cbc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d7cc0: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2d7cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d7cc4: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x2d7cc4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d7cc8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2d7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7ccc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d7cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7cd0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7cd4: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7cd8: 0xc4229518  lwc1        $f2, -0x6AE8($at)
    ctx->pc = 0x2d7cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d7cdc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2d7cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7ce0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7ce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7ce4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2d7ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2d7ce8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2d7ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d7cec: 0x948494e4  lhu         $a0, -0x6B1C($a0)
    ctx->pc = 0x2d7cecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294939876)));
    // 0x2d7cf0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2d7cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2d7cf4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d7cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d7cf8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d7cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d7cfc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d7cfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d7d00: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D7D00u;
    {
        const bool branch_taken_0x2d7d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D00u;
        // 0x2d7d04: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d00) {
            ctx->pc = 0x2D7D50u;
            goto label_2d7d50;
        }
    }
    ctx->pc = 0x2D7D08u;
    // 0x2d7d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d7d0c:
    // 0x2d7d0c: 0x26a50002  addiu       $a1, $s5, 0x2
    ctx->pc = 0x2d7d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x2d7d10: 0xc0b5bfc  jal         func_2D6FF0
    ctx->pc = 0x2D7D10u;
    SET_GPR_U32(ctx, 31, 0x2D7D18u);
    ctx->pc = 0x2D7D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7D10u;
    // 0x2d7d14: 0x7faa0080  sq          $t2, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6FF0u, 0x2D7D10u, 0x2D7D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D18u;
label_2d7d18:
    // 0x2d7d18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d7d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d1c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2d7d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7d20: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x2d7d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d7d24: 0x24a3007f  addiu       $v1, $a1, 0x7F
    ctx->pc = 0x2d7d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x2d7d28: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x2d7d28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2d7d2c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2d7d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2d7d30: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2d7d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d7d34: 0x948494e4  lhu         $a0, -0x6B1C($a0)
    ctx->pc = 0x2d7d34u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294939876)));
    // 0x2d7d38: 0x511c3  sra         $v0, $a1, 7
    ctx->pc = 0x2d7d38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 7));
    // 0x2d7d3c: 0x7baa0080  lq          $t2, 0x80($sp)
    ctx->pc = 0x2d7d3cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d7d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7d44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7d48: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x2d7d48u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7d4c: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x2d7d4cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d7d50:
    // 0x2d7d50: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x2d7d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2d7d54: 0x10400157  beqz        $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x2D7D54u;
    {
        const bool branch_taken_0x2d7d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D54u;
        // 0x2d7d58: 0x26a50002  addiu       $a1, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d54) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7D5Cu;
    // 0x2d7d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d60: 0xc0b5bfc  jal         func_2D6FF0
    ctx->pc = 0x2D7D60u;
    SET_GPR_U32(ctx, 31, 0x2D7D68u);
    ctx->pc = 0x2D7D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7D60u;
    // 0x2d7d64: 0x7faa0080  sq          $t2, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6FF0u, 0x2D7D60u, 0x2D7D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D68u;
label_2d7d68:
    // 0x2d7d68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d7d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d6c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2d7d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7d70: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x2d7d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d7d74: 0x24a3003f  addiu       $v1, $a1, 0x3F
    ctx->pc = 0x2d7d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x2d7d78: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x2d7d78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2d7d7c: 0x7baa0080  lq          $t2, 0x80($sp)
    ctx->pc = 0x2d7d7cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d7d80: 0x51183  sra         $v0, $a1, 6
    ctx->pc = 0x2d7d80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 6));
    // 0x2d7d84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7d88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7d8c: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x2d7d8cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7d90: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x2D7D90u;
    {
        const bool branch_taken_0x2d7d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D90u;
        // 0x2d7d94: 0xe7a80000  swc1        $f8, 0x0($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d90) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7D98u;
label_2d7d98:
    // 0x2d7d98: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2d7d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d7d9c: 0x50400146  beql        $v0, $zero, . + 4 + (0x146 << 2)
    ctx->pc = 0x2D7D9Cu;
    {
        const bool branch_taken_0x2d7d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7d9c) {
            ctx->pc = 0x2D7DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7D9Cu;
            // 0x2d7da0: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D82B8u;
            goto label_2d82b8;
        }
    }
    ctx->pc = 0x2D7DA4u;
    // 0x2d7da4: 0x1720c0  sll         $a0, $s7, 3
    ctx->pc = 0x2d7da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x2d7da8: 0x7faa0080  sq          $t2, 0x80($sp)
    ctx->pc = 0x2d7da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 10));
    // 0x2d7dac: 0xc0cc2a8  jal         func_330AA0
    ctx->pc = 0x2D7DACu;
    SET_GPR_U32(ctx, 31, 0x2D7DB4u);
    ctx->pc = 0x2D7DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7DACu;
    // 0x2d7db0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330AA0u, 0x2D7DACu, 0x2D7DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DB4u;
label_2d7db4:
    // 0x2d7db4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d7db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7db8: 0x1080013e  beqz        $a0, . + 4 + (0x13E << 2)
    ctx->pc = 0x2D7DB8u;
    {
        const bool branch_taken_0x2d7db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7DB8u;
        // 0x2d7dbc: 0x7baa0080  lq          $t2, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7db8) {
            ctx->pc = 0x2D82B4u;
            goto label_2d82b4;
        }
    }
    ctx->pc = 0x2D7DC0u;
    // 0x2d7dc0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d7dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d7dc4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d7dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d7dc8: 0x8c6390d4  lw          $v1, -0x6F2C($v1)
    ctx->pc = 0x2d7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938836)));
    // 0x2d7dcc: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x2d7dccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d7dd0: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x2d7dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2d7dd4: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x2d7dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2d7dd8: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x2d7dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d7ddc: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x2d7ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d7de0: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x2d7de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d7de4: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x2d7de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d7de8: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x2d7de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d7dec: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x2d7decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d7df0: 0xb1280007  sdl         $t0, 0x7($t1)
    ctx->pc = 0x2d7df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7df4: 0xb5280000  sdr         $t0, 0x0($t1)
    ctx->pc = 0x2d7df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7df8: 0xb125000f  sdl         $a1, 0xF($t1)
    ctx->pc = 0x2d7df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7dfc: 0xb5250008  sdr         $a1, 0x8($t1)
    ctx->pc = 0x2d7dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7e00: 0xb1260017  sdl         $a2, 0x17($t1)
    ctx->pc = 0x2d7e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7e04: 0xb5260010  sdr         $a2, 0x10($t1)
    ctx->pc = 0x2d7e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7e08: 0xb127001f  sdl         $a3, 0x1F($t1)
    ctx->pc = 0x2d7e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7e0c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2d7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2d7e10: 0x34422800  ori         $v0, $v0, 0x2800
    ctx->pc = 0x2d7e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x2d7e14: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2d7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2d7e18: 0x28630800  slti        $v1, $v1, 0x800
    ctx->pc = 0x2d7e18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x2d7e1c: 0xb5270018  sdr         $a3, 0x18($t1)
    ctx->pc = 0x2d7e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7e20: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2d7e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2d7e24: 0x10600120  beqz        $v1, . + 4 + (0x120 << 2)
    ctx->pc = 0x2D7E24u;
    {
        const bool branch_taken_0x2d7e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E24u;
        // 0x2d7e28: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e24) {
            ctx->pc = 0x2D82A8u;
            goto label_2d82a8;
        }
    }
    ctx->pc = 0x2D7E2Cu;
    // 0x2d7e2c: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x2d7e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d7e30: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x2d7e30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x2d7e34: 0x34e790d4  ori         $a3, $a3, 0x90D4
    ctx->pc = 0x2d7e34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)37076);
    // 0x2d7e38: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x2d7e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x2d7e3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d7e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d7e40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d7e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d7e44: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2d7e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d7e48: 0x46034000  add.s       $f0, $f8, $f3
    ctx->pc = 0x2d7e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x2d7e4c: 0x87a40058  lh          $a0, 0x58($sp)
    ctx->pc = 0x2d7e4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d7e50: 0x87a5005c  lh          $a1, 0x5C($sp)
    ctx->pc = 0x2d7e50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2d7e54: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d7e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d7e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d7e5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d7e60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d7e64: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2d7e64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d7e68: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d7e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d7e6c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7e6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d7e70: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2d7e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2d7e74: 0x2224021  addu        $t0, $s1, $v0
    ctx->pc = 0x2d7e74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d7e78: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2d7e78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7e7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d7e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d7e80: 0x3c013c80  lui         $at, 0x3C80
    ctx->pc = 0x2d7e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15488 << 16));
    // 0x2d7e84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d7e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7e88: 0x251410a8  addiu       $s4, $t0, 0x10A8
    ctx->pc = 0x2d7e88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), 4264));
    // 0x2d7e8c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2d7e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2d7e90: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2d7e90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d7e94: 0xa6860002  sh          $a2, 0x2($s4)
    ctx->pc = 0x2d7e94u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x2d7e98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d7e98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d7e9c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d7e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d7ea0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d7ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d7ea4: 0x944294e4  lhu         $v0, -0x6B1C($v0)
    ctx->pc = 0x2d7ea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d7ea8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d7ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d7eac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D7EACu;
    {
        const bool branch_taken_0x2d7eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7EACu;
        // 0x2d7eb0: 0x46011500  add.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7eac) {
            ctx->pc = 0x2D7EE8u;
            goto label_2d7ee8;
        }
    }
    ctx->pc = 0x2D7EB4u;
    // 0x2d7eb4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d7eb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d7ebc: 0x844294e2  lh          $v0, -0x6B1E($v0)
    ctx->pc = 0x2d7ebcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939874)));
    // 0x2d7ec0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2d7ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7ec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7ec8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7ec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7ecc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2d7eccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2d7ed0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d7ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d7ed4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d7ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d7ed8: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x2d7ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x2d7edc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7edcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d7ee0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d7ee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d7ee4: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2d7ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2d7ee8:
    // 0x2d7ee8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2d7ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7eec: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2d7eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7ef0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7ef0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2d7ef4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2d7ef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d7ef8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d7efc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d7efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d7f00: 0x944294e8  lhu         $v0, -0x6B18($v0)
    ctx->pc = 0x2d7f00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939880)));
    // 0x2d7f04: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7f04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d7f08: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2d7f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d7f0c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2d7f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2d7f10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d7f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d7f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d7f18: 0xa6820004  sh          $v0, 0x4($s4)
    ctx->pc = 0x2d7f18u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7f1c: 0xa6840006  sh          $a0, 0x6($s4)
    ctx->pc = 0x2d7f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d7f20: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7f24: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7f24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7f28: 0xc4209510  lwc1        $f0, -0x6AF0($at)
    ctx->pc = 0x2d7f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7f2c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d7f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d7f30: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7f30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d7f34: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d7f34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d7f38: 0xa6820008  sh          $v0, 0x8($s4)
    ctx->pc = 0x2d7f38u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7f3c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7f40: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d7f40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d7f44: 0xc4209514  lwc1        $f0, -0x6AEC($at)
    ctx->pc = 0x2d7f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7f48: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x2d7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2d7f4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d7f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d7f50: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x2d7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x2d7f54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7f54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d7f58: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d7f58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d7f5c: 0xa682000a  sh          $v0, 0xA($s4)
    ctx->pc = 0x2d7f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7f60: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x2d7f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d7f64: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x2d7f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d7f68: 0x6923000f  ldl         $v1, 0xF($t1)
    ctx->pc = 0x2d7f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d7f6c: 0x6d230008  ldr         $v1, 0x8($t1)
    ctx->pc = 0x2d7f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d7f70: 0x69240017  ldl         $a0, 0x17($t1)
    ctx->pc = 0x2d7f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d7f74: 0x6d240010  ldr         $a0, 0x10($t1)
    ctx->pc = 0x2d7f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d7f78: 0x6925001f  ldl         $a1, 0x1F($t1)
    ctx->pc = 0x2d7f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d7f7c: 0x6d250018  ldr         $a1, 0x18($t1)
    ctx->pc = 0x2d7f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d7f80: 0xb10210bf  sdl         $v0, 0x10BF($t0)
    ctx->pc = 0x2d7f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7f84: 0xb50210b8  sdr         $v0, 0x10B8($t0)
    ctx->pc = 0x2d7f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7f88: 0xb10310c7  sdl         $v1, 0x10C7($t0)
    ctx->pc = 0x2d7f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7f8c: 0xb50310c0  sdr         $v1, 0x10C0($t0)
    ctx->pc = 0x2d7f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7f90: 0xb10410cf  sdl         $a0, 0x10CF($t0)
    ctx->pc = 0x2d7f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7f94: 0xb50410c8  sdr         $a0, 0x10C8($t0)
    ctx->pc = 0x2d7f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7f98: 0xb10510d7  sdl         $a1, 0x10D7($t0)
    ctx->pc = 0x2d7f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7f9c: 0xb50510d0  sdr         $a1, 0x10D0($t0)
    ctx->pc = 0x2d7f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7fa0: 0xa6970000  sh          $s7, 0x0($s4)
    ctx->pc = 0x2d7fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 23));
    // 0x2d7fa4: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x2d7fa4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d7fa8: 0x24821feb  addiu       $v0, $a0, 0x1FEB
    ctx->pc = 0x2d7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8171));
    // 0x2d7fac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d7facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d7fb0: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x2d7fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x2d7fb4: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2D7FB4u;
    {
        const bool branch_taken_0x2d7fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FB4u;
        // 0x2d7fb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7fb4) {
            ctx->pc = 0x2D8204u;
            goto label_2d8204;
        }
    }
    ctx->pc = 0x2D7FBCu;
    // 0x2d7fbc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d7fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d7fc0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d7fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d7fc4: 0x846394e0  lh          $v1, -0x6B20($v1)
    ctx->pc = 0x2d7fc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939872)));
    // 0x2d7fc8: 0x1462008e  bne         $v1, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2D7FC8u;
    {
        const bool branch_taken_0x2d7fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FC8u;
        // 0x2d7fcc: 0x8fa60074  lw          $a2, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7fc8) {
            ctx->pc = 0x2D8204u;
            goto label_2d8204;
        }
    }
    ctx->pc = 0x2D7FD0u;
    // 0x2d7fd0: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x2d7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x2d7fd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d7fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d7fd8: 0x14c2008a  bne         $a2, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2D7FD8u;
    {
        const bool branch_taken_0x2d7fd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FD8u;
        // 0x2d7fdc: 0x24821fec  addiu       $v0, $a0, 0x1FEC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7fd8) {
            ctx->pc = 0x2D8204u;
            goto label_2d8204;
        }
    }
    ctx->pc = 0x2D7FE0u;
    // 0x2d7fe0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2d7fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7fe4: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x2d7fe4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d7fe8: 0x3c160001  lui         $s6, 0x1
    ctx->pc = 0x2d7fe8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)1 << 16));
    // 0x2d7fec: 0x36d690d4  ori         $s6, $s6, 0x90D4
    ctx->pc = 0x2d7fecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)37076);
    // 0x2d7ff0: 0x2d1b021  addu        $s6, $s6, $s1
    ctx->pc = 0x2d7ff0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x2d7ff4: 0x3d21024  and         $v0, $fp, $s2
    ctx->pc = 0x2d7ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 18));
label_2d7ff8:
    // 0x2d7ff8: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x2D7FF8u;
    {
        const bool branch_taken_0x2d7ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FF8u;
        // 0x2d7ffc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ff8) {
            ctx->pc = 0x2D81ECu;
            goto label_2d81ec;
        }
    }
    ctx->pc = 0x2D8000u;
    // 0x2d8000: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2d8000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2d8004: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d8004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d8008: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d8008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d800c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d8010: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2d8010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d8014: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2d8014u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x2d8018: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x2d8018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2d801c: 0x261310a8  addiu       $s3, $s0, 0x10A8
    ctx->pc = 0x2d801cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4264));
    // 0x2d8020: 0x6a870007  ldl         $a3, 0x7($s4)
    ctx->pc = 0x2d8020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d8024: 0x6e870000  ldr         $a3, 0x0($s4)
    ctx->pc = 0x2d8024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d8028: 0x6a88000f  ldl         $t0, 0xF($s4)
    ctx->pc = 0x2d8028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2d802c: 0x6e880008  ldr         $t0, 0x8($s4)
    ctx->pc = 0x2d802cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2d8030: 0x6a820017  ldl         $v0, 0x17($s4)
    ctx->pc = 0x2d8030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d8034: 0x6e820010  ldr         $v0, 0x10($s4)
    ctx->pc = 0x2d8034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d8038: 0x6a83001f  ldl         $v1, 0x1F($s4)
    ctx->pc = 0x2d8038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d803c: 0x6e830018  ldr         $v1, 0x18($s4)
    ctx->pc = 0x2d803cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d8040: 0xb2670007  sdl         $a3, 0x7($s3)
    ctx->pc = 0x2d8040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8044: 0xb6670000  sdr         $a3, 0x0($s3)
    ctx->pc = 0x2d8044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8048: 0xb268000f  sdl         $t0, 0xF($s3)
    ctx->pc = 0x2d8048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d804c: 0xb6680008  sdr         $t0, 0x8($s3)
    ctx->pc = 0x2d804cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8050: 0xb2620017  sdl         $v0, 0x17($s3)
    ctx->pc = 0x2d8050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8054: 0xb6620010  sdr         $v0, 0x10($s3)
    ctx->pc = 0x2d8054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8058: 0xb263001f  sdl         $v1, 0x1F($s3)
    ctx->pc = 0x2d8058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d805c: 0xb6630018  sdr         $v1, 0x18($s3)
    ctx->pc = 0x2d805cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8060: 0x6a870027  ldl         $a3, 0x27($s4)
    ctx->pc = 0x2d8060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d8064: 0x6e870020  ldr         $a3, 0x20($s4)
    ctx->pc = 0x2d8064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d8068: 0x6a88002f  ldl         $t0, 0x2F($s4)
    ctx->pc = 0x2d8068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2d806c: 0x6e880028  ldr         $t0, 0x28($s4)
    ctx->pc = 0x2d806cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2d8070: 0xb2670027  sdl         $a3, 0x27($s3)
    ctx->pc = 0x2d8070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8074: 0xb6670020  sdr         $a3, 0x20($s3)
    ctx->pc = 0x2d8074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8078: 0xb268002f  sdl         $t0, 0x2F($s3)
    ctx->pc = 0x2d8078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d807c: 0x12440014  beq         $s2, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D807Cu;
    {
        const bool branch_taken_0x2d807c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x2D8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D807Cu;
        // 0x2d8080: 0xb6680028  sdr         $t0, 0x28($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d807c) {
            ctx->pc = 0x2D80D0u;
            goto label_2d80d0;
        }
    }
    ctx->pc = 0x2D8084u;
    // 0x2d8084: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2d8084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d8088: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8088u;
    {
        const bool branch_taken_0x2d8088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8088u;
        // 0x2d808c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8088) {
            ctx->pc = 0x2D80A8u;
            goto label_2d80a8;
        }
    }
    ctx->pc = 0x2D8090u;
    // 0x2d8090: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d8090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8094: 0x1245000a  beq         $s2, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D8094u;
    {
        const bool branch_taken_0x2d8094 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8094u;
        // 0x2d8098: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8094) {
            ctx->pc = 0x2D80C0u;
            goto label_2d80c0;
        }
    }
    ctx->pc = 0x2D809Cu;
    // 0x2d809c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2D809Cu;
    {
        const bool branch_taken_0x2d809c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D809Cu;
        // 0x2d80a0: 0x3c0260ff  lui         $v0, 0x60FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24831 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d809c) {
            ctx->pc = 0x2D81DCu;
            goto label_2d81dc;
        }
    }
    ctx->pc = 0x2D80A4u;
    // 0x2d80a4: 0x0  nop
    ctx->pc = 0x2d80a4u;
    // NOP
label_2d80a8:
    // 0x2d80a8: 0x1242001f  beq         $s2, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D80A8u;
    {
        const bool branch_taken_0x2d80a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80A8u;
        // 0x2d80ac: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d80a8) {
            ctx->pc = 0x2D8128u;
            goto label_2d8128;
        }
    }
    ctx->pc = 0x2D80B0u;
    // 0x2d80b0: 0x12420033  beq         $s2, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2D80B0u;
    {
        const bool branch_taken_0x2d80b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D80B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80B0u;
        // 0x2d80b4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d80b0) {
            ctx->pc = 0x2D8180u;
            goto label_2d8180;
        }
    }
    ctx->pc = 0x2D80B8u;
    // 0x2d80b8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2D80B8u;
    {
        const bool branch_taken_0x2d80b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D80BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80B8u;
        // 0x2d80bc: 0x3c0260ff  lui         $v0, 0x60FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24831 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d80b8) {
            ctx->pc = 0x2D81DCu;
            goto label_2d81dc;
        }
    }
    ctx->pc = 0x2D80C0u;
label_2d80c0:
    // 0x2d80c0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2d80c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d80c4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2D80C4u;
    {
        const bool branch_taken_0x2d80c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80C4u;
        // 0x2d80c8: 0x3405e050  ori         $a1, $zero, 0xE050 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57424);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d80c4) {
            ctx->pc = 0x2D8188u;
            goto label_2d8188;
        }
    }
    ctx->pc = 0x2D80CCu;
    // 0x2d80cc: 0x0  nop
    ctx->pc = 0x2d80ccu;
    // NOP
label_2d80d0:
    // 0x2d80d0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2d80d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d80d4: 0x3405e051  ori         $a1, $zero, 0xE051
    ctx->pc = 0x2d80d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57425);
    // 0x2d80d8: 0xc0cc2a8  jal         func_330AA0
    ctx->pc = 0x2D80D8u;
    SET_GPR_U32(ctx, 31, 0x2D80E0u);
    ctx->pc = 0x2D80DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D80D8u;
    // 0x2d80dc: 0x7faa0080  sq          $t2, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330AA0u, 0x2D80D8u, 0x2D80E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D80E0u;
label_2d80e0:
    // 0x2d80e0: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x2d80e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d80e4: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x2d80e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d80e8: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x2d80e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d80ec: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x2d80ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d80f0: 0x68460017  ldl         $a2, 0x17($v0)
    ctx->pc = 0x2d80f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d80f4: 0x6c460010  ldr         $a2, 0x10($v0)
    ctx->pc = 0x2d80f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d80f8: 0x6847001f  ldl         $a3, 0x1F($v0)
    ctx->pc = 0x2d80f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d80fc: 0x6c470018  ldr         $a3, 0x18($v0)
    ctx->pc = 0x2d80fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d8100: 0xb20410bf  sdl         $a0, 0x10BF($s0)
    ctx->pc = 0x2d8100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8104: 0xb60410b8  sdr         $a0, 0x10B8($s0)
    ctx->pc = 0x2d8104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8108: 0xb20510c7  sdl         $a1, 0x10C7($s0)
    ctx->pc = 0x2d8108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d810c: 0xb60510c0  sdr         $a1, 0x10C0($s0)
    ctx->pc = 0x2d810cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8110: 0xb20610cf  sdl         $a2, 0x10CF($s0)
    ctx->pc = 0x2d8110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8114: 0xb60610c8  sdr         $a2, 0x10C8($s0)
    ctx->pc = 0x2d8114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8118: 0xb20710d7  sdl         $a3, 0x10D7($s0)
    ctx->pc = 0x2d8118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d811c: 0xb60710d0  sdr         $a3, 0x10D0($s0)
    ctx->pc = 0x2d811cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8120: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2D8120u;
    {
        const bool branch_taken_0x2d8120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8120u;
        // 0x2d8124: 0x7baa0080  lq          $t2, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8120) {
            ctx->pc = 0x2D81D4u;
            goto label_2d81d4;
        }
    }
    ctx->pc = 0x2D8128u;
label_2d8128:
    // 0x2d8128: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2d8128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d812c: 0x3405e053  ori         $a1, $zero, 0xE053
    ctx->pc = 0x2d812cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57427);
    // 0x2d8130: 0xc0cc2a8  jal         func_330AA0
    ctx->pc = 0x2D8130u;
    SET_GPR_U32(ctx, 31, 0x2D8138u);
    ctx->pc = 0x2D8134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8130u;
    // 0x2d8134: 0x7faa0080  sq          $t2, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330AA0u, 0x2D8130u, 0x2D8138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8138u;
label_2d8138:
    // 0x2d8138: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x2d8138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2d813c: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x2d813cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2d8140: 0x6843000f  ldl         $v1, 0xF($v0)
    ctx->pc = 0x2d8140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d8144: 0x6c430008  ldr         $v1, 0x8($v0)
    ctx->pc = 0x2d8144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d8148: 0x68440017  ldl         $a0, 0x17($v0)
    ctx->pc = 0x2d8148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d814c: 0x6c440010  ldr         $a0, 0x10($v0)
    ctx->pc = 0x2d814cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d8150: 0x6845001f  ldl         $a1, 0x1F($v0)
    ctx->pc = 0x2d8150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d8154: 0x6c450018  ldr         $a1, 0x18($v0)
    ctx->pc = 0x2d8154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d8158: 0xb20810bf  sdl         $t0, 0x10BF($s0)
    ctx->pc = 0x2d8158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d815c: 0xb60810b8  sdr         $t0, 0x10B8($s0)
    ctx->pc = 0x2d815cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8160: 0xb20310c7  sdl         $v1, 0x10C7($s0)
    ctx->pc = 0x2d8160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8164: 0xb60310c0  sdr         $v1, 0x10C0($s0)
    ctx->pc = 0x2d8164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8168: 0xb20410cf  sdl         $a0, 0x10CF($s0)
    ctx->pc = 0x2d8168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d816c: 0xb60410c8  sdr         $a0, 0x10C8($s0)
    ctx->pc = 0x2d816cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8170: 0xb20510d7  sdl         $a1, 0x10D7($s0)
    ctx->pc = 0x2d8170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8174: 0xb60510d0  sdr         $a1, 0x10D0($s0)
    ctx->pc = 0x2d8174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8178: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2D8178u;
    {
        const bool branch_taken_0x2d8178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8178u;
        // 0x2d817c: 0x7baa0080  lq          $t2, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8178) {
            ctx->pc = 0x2D81D4u;
            goto label_2d81d4;
        }
    }
    ctx->pc = 0x2D8180u;
label_2d8180:
    // 0x2d8180: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2d8180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d8184: 0x3405e052  ori         $a1, $zero, 0xE052
    ctx->pc = 0x2d8184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57426);
label_2d8188:
    // 0x2d8188: 0xc0cc2a8  jal         func_330AA0
    ctx->pc = 0x2D8188u;
    SET_GPR_U32(ctx, 31, 0x2D8190u);
    ctx->pc = 0x2D818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8188u;
    // 0x2d818c: 0x7faa0080  sq          $t2, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330AA0u, 0x2D8188u, 0x2D8190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8190u;
label_2d8190:
    // 0x2d8190: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x2d8190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d8194: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x2d8194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d8198: 0x6847000f  ldl         $a3, 0xF($v0)
    ctx->pc = 0x2d8198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d819c: 0x6c470008  ldr         $a3, 0x8($v0)
    ctx->pc = 0x2d819cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d81a0: 0x68480017  ldl         $t0, 0x17($v0)
    ctx->pc = 0x2d81a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2d81a4: 0x6c480010  ldr         $t0, 0x10($v0)
    ctx->pc = 0x2d81a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2d81a8: 0x6843001f  ldl         $v1, 0x1F($v0)
    ctx->pc = 0x2d81a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d81ac: 0x6c430018  ldr         $v1, 0x18($v0)
    ctx->pc = 0x2d81acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d81b0: 0xb20610bf  sdl         $a2, 0x10BF($s0)
    ctx->pc = 0x2d81b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d81b4: 0xb60610b8  sdr         $a2, 0x10B8($s0)
    ctx->pc = 0x2d81b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d81b8: 0xb20710c7  sdl         $a3, 0x10C7($s0)
    ctx->pc = 0x2d81b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d81bc: 0xb60710c0  sdr         $a3, 0x10C0($s0)
    ctx->pc = 0x2d81bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d81c0: 0xb20810cf  sdl         $t0, 0x10CF($s0)
    ctx->pc = 0x2d81c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d81c4: 0xb60810c8  sdr         $t0, 0x10C8($s0)
    ctx->pc = 0x2d81c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d81c8: 0xb20310d7  sdl         $v1, 0x10D7($s0)
    ctx->pc = 0x2d81c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d81cc: 0xb60310d0  sdr         $v1, 0x10D0($s0)
    ctx->pc = 0x2d81ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d81d0: 0x7baa0080  lq          $t2, 0x80($sp)
    ctx->pc = 0x2d81d0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d81d4:
    // 0x2d81d4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2d81d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2d81d8: 0x3c0260ff  lui         $v0, 0x60FF
    ctx->pc = 0x2d81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24831 << 16));
label_2d81dc:
    // 0x2d81dc: 0x34632802  ori         $v1, $v1, 0x2802
    ctx->pc = 0x2d81dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10242);
    // 0x2d81e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d81e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d81e4: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2d81e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x2d81e8: 0xae630010  sw          $v1, 0x10($s3)
    ctx->pc = 0x2d81e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
label_2d81ec:
    // 0x2d81ec: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2d81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2d81f0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x2d81f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d81f4: 0x2e430009  sltiu       $v1, $s2, 0x9
    ctx->pc = 0x2d81f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2d81f8: 0x1460ff7f  bnez        $v1, . + 4 + (-0x81 << 2)
    ctx->pc = 0x2D81F8u;
    {
        const bool branch_taken_0x2d81f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81F8u;
        // 0x2d81fc: 0x3d21024  and         $v0, $fp, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d81f8) {
            ctx->pc = 0x2D7FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7ff8;
        }
    }
    ctx->pc = 0x2D8200u;
    // 0x2d8200: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x2d8200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2d8204:
    // 0x2d8204: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8208: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d8208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d820c: 0x944294e4  lhu         $v0, -0x6B1C($v0)
    ctx->pc = 0x2d820cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d8210: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d8210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d8214: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D8214u;
    {
        const bool branch_taken_0x2d8214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8214u;
        // 0x2d8218: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8214) {
            ctx->pc = 0x2D8240u;
            goto label_2d8240;
        }
    }
    ctx->pc = 0x2D821Cu;
    // 0x2d821c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8220: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d8220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d8224: 0x844294e2  lh          $v0, -0x6B1E($v0)
    ctx->pc = 0x2d8224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939874)));
    // 0x2d8228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d822c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d822cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d8230: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d8230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d8234: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D8234u;
    {
        const bool branch_taken_0x2d8234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8234u;
        // 0x2d8238: 0x46004200  add.s       $f8, $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8234) {
            ctx->pc = 0x2D82A4u;
            goto label_2d82a4;
        }
    }
    ctx->pc = 0x2D823Cu;
    // 0x2d823c: 0x0  nop
    ctx->pc = 0x2d823cu;
    // NOP
label_2d8240:
    // 0x2d8240: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2d8240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d8244: 0xc78094e4  lwc1        $f0, -0x6B1C($gp)
    ctx->pc = 0x2d8244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8248: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2d8248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d824c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2D824Cu;
    {
        const bool branch_taken_0x2d824c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d824c) {
            ctx->pc = 0x2D8260u;
            goto label_2d8260;
        }
    }
    ctx->pc = 0x2D8254u;
    // 0x2d8254: 0x4603a002  mul.s       $f0, $f20, $f3
    ctx->pc = 0x2d8254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x2d8258: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8258u;
    {
        const bool branch_taken_0x2d8258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8258u;
        // 0x2d825c: 0x46004200  add.s       $f8, $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8258) {
            ctx->pc = 0x2D82A4u;
            goto label_2d82a4;
        }
    }
    ctx->pc = 0x2D8260u;
label_2d8260:
    // 0x2d8260: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x2d8260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x2d8264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d8264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8268: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2d8268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2d826c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d826cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d8270: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2d8270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d8274: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2d8274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2d8278: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d8278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d827c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2d827cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2d8280: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d8280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d8284: 0x0  nop
    ctx->pc = 0x2d8284u;
    // NOP
    // 0x2d8288: 0x0  nop
    ctx->pc = 0x2d8288u;
    // NOP
    // 0x2d828c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2d828cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x2d8290: 0x0  nop
    ctx->pc = 0x2d8290u;
    // NOP
    // 0x2d8294: 0x0  nop
    ctx->pc = 0x2d8294u;
    // NOP
    // 0x2d8298: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2d8298u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2d829c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d829cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d82a0: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x2d82a0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
label_2d82a4:
    // 0x2d82a4: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x2d82a4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d82a8:
    // 0x2d82a8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2d82a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d82ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d82acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d82b0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2d82b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_2d82b4:
    // 0x2d82b4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2d82b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2d82b8:
    // 0x2d82b8: 0x28a20800  slti        $v0, $a1, 0x800
    ctx->pc = 0x2d82b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x2d82bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D82BCu;
    {
        const bool branch_taken_0x2d82bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82BCu;
        // 0x2d82c0: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82bc) {
            ctx->pc = 0x2D82DCu;
            goto label_2d82dc;
        }
    }
    ctx->pc = 0x2D82C4u;
    // 0x2d82c4: 0x1540fc60  bnez        $t2, . + 4 + (-0x3A0 << 2)
    ctx->pc = 0x2D82C4u;
    {
        const bool branch_taken_0x2d82c4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82C4u;
        // 0x2d82c8: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82c4) {
            ctx->pc = 0x2D7448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7448;
        }
    }
    ctx->pc = 0x2D82CCu;
    // 0x2d82cc: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x2d82ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d82d0: 0x1440fc5e  bnez        $v0, . + 4 + (-0x3A2 << 2)
    ctx->pc = 0x2D82D0u;
    {
        const bool branch_taken_0x2d82d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82D0u;
        // 0x2d82d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82d0) {
            ctx->pc = 0x2D744Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d744c;
        }
    }
    ctx->pc = 0x2D82D8u;
label_2d82d8:
    // 0x2d82d8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2d82d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d82dc:
    // 0x2d82dc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2d82dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d82e0: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x2d82e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x2d82e4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d82e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d82e8: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d82e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d82ec: 0xe42194f0  swc1        $f1, -0x6B10($at)
    ctx->pc = 0x2d82ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939888), bits); }
    // 0x2d82f0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d82f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d82f4: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d82f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d82f8: 0xe42094f4  swc1        $f0, -0x6B0C($at)
    ctx->pc = 0x2d82f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939892), bits); }
    // 0x2d82fc: 0x18800071  blez        $a0, . + 4 + (0x71 << 2)
    ctx->pc = 0x2D82FCu;
    {
        const bool branch_taken_0x2d82fc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2D8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82FCu;
        // 0x2d8300: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82fc) {
            ctx->pc = 0x2D84C4u;
            goto label_2d84c4;
        }
    }
    ctx->pc = 0x2D8304u;
    // 0x2d8304: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d8304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d8308: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d8308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d830c: 0x8c6390d4  lw          $v1, -0x6F2C($v1)
    ctx->pc = 0x2d830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938836)));
label_2d8310:
    // 0x2d8310: 0x18600068  blez        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x2D8310u;
    {
        const bool branch_taken_0x2d8310 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D8314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8310u;
        // 0x2d8314: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8310) {
            ctx->pc = 0x2D84B4u;
            goto label_2d84b4;
        }
    }
    ctx->pc = 0x2D8318u;
    // 0x2d8318: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d8318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d831c: 0xc79594e8  lwc1        $f21, -0x6B18($gp)
    ctx->pc = 0x2d831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d8320: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2d8320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2d8324: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d8324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d8328: 0x2452e7e0  addiu       $s2, $v0, -0x1820
    ctx->pc = 0x2d8328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961120));
    // 0x2d832c: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2d832cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2d8330:
    // 0x2d8330: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x2d8330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2d8334: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2d8334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d8338: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d8338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d833c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2d833cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d8340: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2d8340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2d8344: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2d8344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2d8348: 0x248a10a8  addiu       $t2, $a0, 0x10A8
    ctx->pc = 0x2d8348u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4264));
    // 0x2d834c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x2d834cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2d8350: 0x14500053  bne         $v0, $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2D8350u;
    {
        const bool branch_taken_0x2d8350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8350u;
        // 0x2d8354: 0x248410b8  addiu       $a0, $a0, 0x10B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8350) {
            ctx->pc = 0x2D84A0u;
            goto label_2d84a0;
        }
    }
    ctx->pc = 0x2D8358u;
    // 0x2d8358: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x2d8358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x2d835c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d835cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8360: 0x85490008  lh          $t1, 0x8($t2)
    ctx->pc = 0x2d8360u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2d8364: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x2d8364u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d8368: 0x33c02  srl         $a3, $v1, 16
    ctx->pc = 0x2d8368u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2d836c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x2d836cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8370: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x2d8370u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x2d8374: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d8374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d8378: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2d8378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2d837c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2d837cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d8380: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2d8380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2d8384: 0x85420004  lh          $v0, 0x4($t2)
    ctx->pc = 0x2d8384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2d8388: 0x44863800  mtc1        $a2, $f7
    ctx->pc = 0x2d8388u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2d838c: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x2d838cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x2d8390: 0x85460006  lh          $a2, 0x6($t2)
    ctx->pc = 0x2d8390u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x2d8394: 0x44873000  mtc1        $a3, $f6
    ctx->pc = 0x2d8394u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2d8398: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2d8398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2d839c: 0x8548000a  lh          $t0, 0xA($t2)
    ctx->pc = 0x2d839cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x2d83a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d83a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d83a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d83a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d83a8: 0x85430002  lh          $v1, 0x2($t2)
    ctx->pc = 0x2d83a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x2d83ac: 0x0  nop
    ctx->pc = 0x2d83acu;
    // NOP
    // 0x2d83b0: 0x0  nop
    ctx->pc = 0x2d83b0u;
    // NOP
    // 0x2d83b4: 0x46142103  div.s       $f4, $f4, $f20
    ctx->pc = 0x2d83b4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[20];
    // 0x2d83b8: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2d83b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2d83bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d83bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d83c0: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x2d83c0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d83c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d83c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d83c8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2d83c8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d83cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d83ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d83d0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d83d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d83d4: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x2d83d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2d83d8: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x2d83d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x2d83dc: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x2d83dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d83e0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2d83e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2d83e4: 0x0  nop
    ctx->pc = 0x2d83e4u;
    // NOP
    // 0x2d83e8: 0x0  nop
    ctx->pc = 0x2d83e8u;
    // NOP
    // 0x2d83ec: 0x461439c3  div.s       $f7, $f7, $f20
    ctx->pc = 0x2d83ecu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[7] = ctx->f[7] / ctx->f[20];
    // 0x2d83f0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2d83f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d83f4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2d83f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2d83f8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d83f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d83fc: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x2d83fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x2d8400: 0xe420950c  swc1        $f0, -0x6AF4($at)
    ctx->pc = 0x2d8400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939916), bits); }
    // 0x2d8404: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x2d8404u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2d8408: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d8408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d840c: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x2d840cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x2d8410: 0xe4249504  swc1        $f4, -0x6AFC($at)
    ctx->pc = 0x2d8410u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939908), bits); }
    // 0x2d8414: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2d8414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2d8418: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x2d8418u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d841c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2d841cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d8420: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x2d8420u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d8424: 0x0  nop
    ctx->pc = 0x2d8424u;
    // NOP
    // 0x2d8428: 0x0  nop
    ctx->pc = 0x2d8428u;
    // NOP
    // 0x2d842c: 0x46143183  div.s       $f6, $f6, $f20
    ctx->pc = 0x2d842cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[6] = ctx->f[6] / ctx->f[20];
    // 0x2d8430: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2d8430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d8434: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2d8434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d8438: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d8438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d843c: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x2d843cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x2d8440: 0xe4279500  swc1        $f7, -0x6B00($at)
    ctx->pc = 0x2d8440u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939904), bits); }
    // 0x2d8444: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d8444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d8448: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x2d8448u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x2d844c: 0xe4269508  swc1        $f6, -0x6AF8($at)
    ctx->pc = 0x2d844cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939912), bits); }
    // 0x2d8450: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d8450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d8454: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d8454u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d8458: 0xc4209500  lwc1        $f0, -0x6B00($at)
    ctx->pc = 0x2d8458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d845c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d845cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d8460: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d8460u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d8464: 0xc4219504  lwc1        $f1, -0x6AFC($at)
    ctx->pc = 0x2d8464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8468: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d8468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d846c: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d846cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d8470: 0xc4229508  lwc1        $f2, -0x6AF8($at)
    ctx->pc = 0x2d8470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d8474: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d8474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d8478: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d8478u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d847c: 0xc423950c  lwc1        $f3, -0x6AF4($at)
    ctx->pc = 0x2d847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d8480: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2d8480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d8484: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2d8484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d8488: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2d8488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d848c: 0xc0cc342  jal         func_330D08
    ctx->pc = 0x2D848Cu;
    SET_GPR_U32(ctx, 31, 0x2D8494u);
    ctx->pc = 0x2D8490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D848Cu;
    // 0x2d8490: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x330D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330D08u, 0x2D848Cu, 0x2D8494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8494u;
label_2d8494:
    // 0x2d8494: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d8494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d8498: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d8498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d849c: 0x8c6390d4  lw          $v1, -0x6F2C($v1)
    ctx->pc = 0x2d849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938836)));
label_2d84a0:
    // 0x2d84a0: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2d84a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d84a4: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2d84a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d84a8: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x2D84A8u;
    {
        const bool branch_taken_0x2d84a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D84A8u;
        // 0x2d84ac: 0x8fa60070  lw          $a2, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d84a8) {
            ctx->pc = 0x2D8330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8330;
        }
    }
    ctx->pc = 0x2D84B0u;
    // 0x2d84b0: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x2d84b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_2d84b4:
    // 0x2d84b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d84b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d84b8: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x2d84b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d84bc: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x2D84BCu;
    {
        const bool branch_taken_0x2d84bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d84bc) {
            ctx->pc = 0x2D8310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8310;
        }
    }
    ctx->pc = 0x2D84C4u;
label_2d84c4:
    // 0x2d84c4: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2d84c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
label_2d84c8:
    // 0x2d84c8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d84cc: 0x2442e7e0  addiu       $v0, $v0, -0x1820
    ctx->pc = 0x2d84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961120));
    // 0x2d84d0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d84d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d84d4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2d84d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2d84d8: 0xac2090d4  sw          $zero, -0x6F2C($at)
    ctx->pc = 0x2d84d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3D78B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D78B4u, _value); } while (0);
    // 0x2d84dc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d84dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d84e0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2d84e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2d84e4: 0xac2090d0  sw          $zero, -0x6F30($at)
    ctx->pc = 0x2d84e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3D78B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D78B0u, _value); } while (0);
    // 0x2d84e8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d84e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d84ec: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x2d84ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x2d84f0: 0xac2094e8  sw          $zero, -0x6B18($at)
    ctx->pc = 0x2d84f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939880), GPR_U32(ctx, 0));
    // 0x2d84f4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2d84f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d84f8: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2d84f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2d84fc: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2d84fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d8500: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2d8500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2d8504: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2d8504u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8508: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x2d8508u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d850c: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2d850cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d8510: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x2d8510u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2d8514: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2d8514u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d8518: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x2d8518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2d851c: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2d851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d8520: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2d8520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d8524: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8524u;
        // 0x2d8528: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D852Cu;
    // 0x2d852c: 0x0  nop
    ctx->pc = 0x2d852cu;
    // NOP
    ctx->pc = 0x2d8530u;
}

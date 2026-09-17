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

// Function: sub_001FE800
// Address: 0x1fe800 - 0x200020
void sub_001FE800_0x1fe800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE800_0x1fe800");
#endif

    switch (ctx->pc) {
        case 0x1fe87cu: goto label_1fe87c;
        case 0x1fe9a8u: goto label_1fe9a8;
        case 0x1fe9f0u: goto label_1fe9f0;
        case 0x1febd0u: goto label_1febd0;
        case 0x1fec14u: goto label_1fec14;
        case 0x1feca8u: goto label_1feca8;
        case 0x1fed28u: goto label_1fed28;
        case 0x1fed74u: goto label_1fed74;
        case 0x1fefb8u: goto label_1fefb8;
        case 0x1feffcu: goto label_1feffc;
        case 0x1ff118u: goto label_1ff118;
        case 0x1ff130u: goto label_1ff130;
        case 0x1ff148u: goto label_1ff148;
        case 0x1ff158u: goto label_1ff158;
        case 0x1ff168u: goto label_1ff168;
        case 0x1ff218u: goto label_1ff218;
        case 0x1ff228u: goto label_1ff228;
        case 0x1ff24cu: goto label_1ff24c;
        case 0x1ff2d4u: goto label_1ff2d4;
        case 0x1ff2ecu: goto label_1ff2ec;
        case 0x1ff3dcu: goto label_1ff3dc;
        case 0x1ff4bcu: goto label_1ff4bc;
        case 0x1ff4dcu: goto label_1ff4dc;
        case 0x1ff5a4u: goto label_1ff5a4;
        case 0x1ff5ccu: goto label_1ff5cc;
        case 0x1ff5f4u: goto label_1ff5f4;
        case 0x1ff61cu: goto label_1ff61c;
        case 0x1ff644u: goto label_1ff644;
        case 0x1ff660u: goto label_1ff660;
        case 0x1ff674u: goto label_1ff674;
        case 0x1ff69cu: goto label_1ff69c;
        case 0x1ff6c4u: goto label_1ff6c4;
        case 0x1ff6ecu: goto label_1ff6ec;
        case 0x1ff714u: goto label_1ff714;
        case 0x1ff730u: goto label_1ff730;
        case 0x1ff7f4u: goto label_1ff7f4;
        case 0x1ff80cu: goto label_1ff80c;
        case 0x1ff944u: goto label_1ff944;
        case 0x1ff9ecu: goto label_1ff9ec;
        case 0x1ffa4cu: goto label_1ffa4c;
        case 0x1ffadcu: goto label_1ffadc;
        case 0x1ffb1cu: goto label_1ffb1c;
        case 0x1ffba4u: goto label_1ffba4;
        case 0x1ffc68u: goto label_1ffc68;
        case 0x1ffc80u: goto label_1ffc80;
        case 0x1ffc98u: goto label_1ffc98;
        case 0x1ffcb0u: goto label_1ffcb0;
        case 0x1ffcc8u: goto label_1ffcc8;
        case 0x1ffd24u: goto label_1ffd24;
        case 0x1ffd40u: goto label_1ffd40;
        case 0x1ffd98u: goto label_1ffd98;
        case 0x1ffdbcu: goto label_1ffdbc;
        case 0x1ffea4u: goto label_1ffea4;
        case 0x1ffeb8u: goto label_1ffeb8;
        case 0x1ffec8u: goto label_1ffec8;
        default: break;
    }

    ctx->pc = 0x1fe800u;

    // 0x1fe800: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1fe800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1fe804: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1fe804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1fe808: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe80c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1fe80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1fe810: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1fe810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1fe814: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1fe814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1fe818: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1fe818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1fe81c: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x1fe81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x1fe820: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1fe820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1fe824: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x1fe824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x1fe828: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x1fe828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x1fe82c: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x1fe82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x1fe830: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x1fe830u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1fe834: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x1fe834u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1fe838: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x1fe838u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1fe83c: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x1fe83cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1fe840: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1fe840u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1fe844: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1fe844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1fe848: 0xa24001fa  sb          $zero, 0x1FA($s2)
    ctx->pc = 0x1fe848u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 506), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fe84c: 0x9642007a  lhu         $v0, 0x7A($s2)
    ctx->pc = 0x1fe84cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1fe850: 0x8e57005c  lw          $s7, 0x5C($s2)
    ctx->pc = 0x1fe850u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1fe854: 0xa64202fc  sh          $v0, 0x2FC($s2)
    ctx->pc = 0x1fe854u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 764), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fe858: 0xa24001fb  sb          $zero, 0x1FB($s2)
    ctx->pc = 0x1fe858u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 507), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fe85c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1fe85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe860: 0xa24001ff  sb          $zero, 0x1FF($s2)
    ctx->pc = 0x1fe860u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 511), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fe864: 0x865e007a  lh          $fp, 0x7A($s2)
    ctx->pc = 0x1fe864u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1fe868: 0xc6560750  lwc1        $f22, 0x750($s2)
    ctx->pc = 0x1fe868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fe86c: 0xc6570758  lwc1        $f23, 0x758($s2)
    ctx->pc = 0x1fe86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1fe870: 0xc6580000  lwc1        $f24, 0x0($s2)
    ctx->pc = 0x1fe870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1fe874: 0xc07f9b2  jal         func_1FE6C8
    ctx->pc = 0x1FE874u;
    SET_GPR_U32(ctx, 31, 0x1FE87Cu);
    ctx->pc = 0x1FE878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE874u;
    // 0x1fe878: 0xc6590008  lwc1        $f25, 0x8($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE6C8u, 0x1FE874u, 0x1FE87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE87Cu;
label_1fe87c:
    // 0x1fe87c: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1fe87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1fe880: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FE880u;
    {
        const bool branch_taken_0x1fe880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe880) {
            ctx->pc = 0x1FE884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE880u;
            // 0x1fe884: 0x92440186  lbu         $a0, 0x186($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE8E4u;
            goto label_1fe8e4;
        }
    }
    ctx->pc = 0x1FE888u;
    // 0x1fe888: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1fe888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fe88c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fe88cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe890: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1fe890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe894: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1FE894u;
    {
        const bool branch_taken_0x1fe894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fe894) {
            ctx->pc = 0x1FE8C8u;
            goto label_1fe8c8;
        }
    }
    ctx->pc = 0x1FE89Cu;
    // 0x1fe89c: 0x924201b3  lbu         $v0, 0x1B3($s2)
    ctx->pc = 0x1fe89cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 435)));
    // 0x1fe8a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE8A0u;
    {
        const bool branch_taken_0x1fe8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe8a0) {
            ctx->pc = 0x1FE8C8u;
            goto label_1fe8c8;
        }
    }
    ctx->pc = 0x1FE8A8u;
    // 0x1fe8a8: 0xc6400120  lwc1        $f0, 0x120($s2)
    ctx->pc = 0x1fe8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe8ac: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1fe8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1fe8b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fe8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fe8b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fe8b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1fe8b8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1fe8b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fe8bc: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x1fe8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x1fe8c0: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1fe8c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1fe8c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fe8c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fe8c8:
    // 0x1fe8c8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1fe8c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe8cc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE8CCu;
    {
        const bool branch_taken_0x1fe8cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fe8cc) {
            ctx->pc = 0x1FE8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE8CCu;
            // 0x1fe8d0: 0x92440186  lbu         $a0, 0x186($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE8E4u;
            goto label_1fe8e4;
        }
    }
    ctx->pc = 0x1FE8D4u;
    // 0x1fe8d4: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1fe8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1fe8d8: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x1fe8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x1fe8dc: 0xa24001b3  sb          $zero, 0x1B3($s2)
    ctx->pc = 0x1fe8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 435), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fe8e0: 0x92440186  lbu         $a0, 0x186($s2)
    ctx->pc = 0x1fe8e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 390)));
label_1fe8e4:
    // 0x1fe8e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe8e8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE8E8u;
    {
        const bool branch_taken_0x1fe8e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8E8u;
        // 0x1fe8ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8e8) {
            ctx->pc = 0x1FE900u;
            goto label_1fe900;
        }
    }
    ctx->pc = 0x1FE8F0u;
    // 0x1fe8f0: 0x50820047  beql        $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1FE8F0u;
    {
        const bool branch_taken_0x1fe8f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fe8f0) {
            ctx->pc = 0x1FE8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE8F0u;
            // 0x1fe8f4: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEA10u;
            goto label_1fea10;
        }
    }
    ctx->pc = 0x1FE8F8u;
    // 0x1fe8f8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1FE8F8u;
    {
        const bool branch_taken_0x1fe8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8F8u;
        // 0x1fe8fc: 0xc640012c  lwc1        $f0, 0x12C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8f8) {
            ctx->pc = 0x1FEA6Cu;
            goto label_1fea6c;
        }
    }
    ctx->pc = 0x1FE900u;
label_1fe900:
    // 0x1fe900: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x1fe900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x1fe904: 0x86460096  lh          $a2, 0x96($s2)
    ctx->pc = 0x1fe904u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x1fe908: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x1fe908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x1fe90c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1fe90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fe910: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x1FE910u;
    {
        const bool branch_taken_0x1fe910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe910) {
            ctx->pc = 0x1FE914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE910u;
            // 0x1fe914: 0xc640012c  lwc1        $f0, 0x12C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEA6Cu;
            goto label_1fea6c;
        }
    }
    ctx->pc = 0x1FE918u;
    // 0x1fe918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe91c: 0x94630028  lhu         $v1, 0x28($v1)
    ctx->pc = 0x1fe91cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1fe920: 0xa2420186  sb          $v0, 0x186($s2)
    ctx->pc = 0x1fe920u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 390), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fe924: 0x24050c00  addiu       $a1, $zero, 0xC00
    ctx->pc = 0x1fe924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x1fe928: 0x3c014540  lui         $at, 0x4540
    ctx->pc = 0x1fe928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17728 << 16));
    // 0x1fe92c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fe92cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe930: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x1fe930u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fe934: 0xc7819724  lwc1        $f1, -0x68DC($gp)
    ctx->pc = 0x1fe934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe938: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1fe938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe93c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE93Cu;
    {
        const bool branch_taken_0x1fe93c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FE940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE93Cu;
        // 0x1fe940: 0x82100a  movz        $v0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe93c) {
            ctx->pc = 0x1FE94Cu;
            goto label_1fe94c;
        }
    }
    ctx->pc = 0x1FE944u;
    // 0x1fe944: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fe944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fe948: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1fe948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1fe94c:
    // 0x1fe94c: 0x24a5fe0c  addiu       $a1, $a1, -0x1F4
    ctx->pc = 0x1fe94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966796));
    // 0x1fe950: 0x96440078  lhu         $a0, 0x78($s2)
    ctx->pc = 0x1fe950u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1fe954: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1fe954u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fe958: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x1fe958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1fe95c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fe95cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fe960: 0x1812  mflo        $v1
    ctx->pc = 0x1fe960u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1fe964: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1fe964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1fe968: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1fe968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1fe96c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE96Cu;
    {
        const bool branch_taken_0x1fe96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE96Cu;
        // 0x1fe970: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe96c) {
            ctx->pc = 0x1FE988u;
            goto label_1fe988;
        }
    }
    ctx->pc = 0x1FE974u;
    // 0x1fe974: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1fe974u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fe978: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fe978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fe97c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE97Cu;
    {
        const bool branch_taken_0x1fe97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE97Cu;
        // 0x1fe980: 0xc7808244  lwc1        $f0, -0x7DBC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe97c) {
            ctx->pc = 0x1FE998u;
            goto label_1fe998;
        }
    }
    ctx->pc = 0x1FE984u;
    // 0x1fe984: 0x0  nop
    ctx->pc = 0x1fe984u;
    // NOP
label_1fe988:
    // 0x1fe988: 0xc7818248  lwc1        $f1, -0x7DB8($gp)
    ctx->pc = 0x1fe988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe98c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fe98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fe990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fe990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe994: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fe994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fe998:
    // 0x1fe998: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x1fe998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1fe99c: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1fe99cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1fe9a0: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x1FE9A0u;
    SET_GPR_U32(ctx, 31, 0x1FE9A8u);
    ctx->pc = 0x1FE9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9A0u;
    // 0x1fe9a4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x1FE9A0u, 0x1FE9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9A8u;
label_1fe9a8:
    // 0x1fe9a8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fe9a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1fe9ac: 0x96430078  lhu         $v1, 0x78($s2)
    ctx->pc = 0x1fe9acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1fe9b0: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x1fe9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1fe9b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fe9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fe9b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fe9b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1fe9bc: 0xe64100dc  swc1        $f1, 0xDC($s2)
    ctx->pc = 0x1fe9bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
    // 0x1fe9c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE9C0u;
    {
        const bool branch_taken_0x1fe9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9C0u;
        // 0x1fe9c4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9c0) {
            ctx->pc = 0x1FE9D8u;
            goto label_1fe9d8;
        }
    }
    ctx->pc = 0x1FE9C8u;
    // 0x1fe9c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fe9c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fe9cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fe9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fe9d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE9D0u;
    {
        const bool branch_taken_0x1fe9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9D0u;
        // 0x1fe9d4: 0xc780824c  lwc1        $f0, -0x7DB4($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9d0) {
            ctx->pc = 0x1FE9E8u;
            goto label_1fe9e8;
        }
    }
    ctx->pc = 0x1FE9D8u;
label_1fe9d8:
    // 0x1fe9d8: 0xc7818250  lwc1        $f1, -0x7DB0($gp)
    ctx->pc = 0x1fe9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe9dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fe9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fe9e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fe9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe9e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fe9e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fe9e8:
    // 0x1fe9e8: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x1FE9E8u;
    SET_GPR_U32(ctx, 31, 0x1FE9F0u);
    ctx->pc = 0x1FE9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9E8u;
    // 0x1fe9ec: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x1FE9E8u, 0x1FE9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9F0u;
label_1fe9f0:
    // 0x1fe9f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe9f4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1fe9f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1fe9f8: 0xa242019a  sb          $v0, 0x19A($s2)
    ctx->pc = 0x1fe9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 410), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fe9fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fe9fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1fea00: 0xe64100e0  swc1        $f1, 0xE0($s2)
    ctx->pc = 0x1fea00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1fea04: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1FEA04u;
    {
        const bool branch_taken_0x1fea04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA04u;
        // 0x1fea08: 0xc640012c  lwc1        $f0, 0x12C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea04) {
            ctx->pc = 0x1FEA6Cu;
            goto label_1fea6c;
        }
    }
    ctx->pc = 0x1FEA0Cu;
    // 0x1fea0c: 0x0  nop
    ctx->pc = 0x1fea0cu;
    // NOP
label_1fea10:
    // 0x1fea10: 0xc64300dc  lwc1        $f3, 0xDC($s2)
    ctx->pc = 0x1fea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fea14: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1fea14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1fea18: 0xc64200e0  lwc1        $f2, 0xE0($s2)
    ctx->pc = 0x1fea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fea1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1fea1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1fea20: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1fea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fea24: 0x8e4400c0  lw          $a0, 0xC0($s2)
    ctx->pc = 0x1fea24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x1fea28: 0x86430096  lh          $v1, 0x96($s2)
    ctx->pc = 0x1fea28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x1fea2c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1fea2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1fea30: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fea30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fea34: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x1fea34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1fea38: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1fea38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1fea3c: 0x94820028  lhu         $v0, 0x28($a0)
    ctx->pc = 0x1fea3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1fea40: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1fea40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fea44: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FEA44u;
    {
        const bool branch_taken_0x1fea44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fea44) {
            ctx->pc = 0x1FEA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEA44u;
            // 0x1fea48: 0xc640012c  lwc1        $f0, 0x12C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEA6Cu;
            goto label_1fea6c;
        }
    }
    ctx->pc = 0x1FEA4Cu;
    // 0x1fea4c: 0xc6400750  lwc1        $f0, 0x750($s2)
    ctx->pc = 0x1fea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fea50: 0xc6410758  lwc1        $f1, 0x758($s2)
    ctx->pc = 0x1fea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fea54: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1fea54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1fea58: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1fea58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1fea5c: 0xa2400186  sb          $zero, 0x186($s2)
    ctx->pc = 0x1fea5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 390), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fea60: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x1fea60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x1fea64: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x1fea64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x1fea68: 0xc640012c  lwc1        $f0, 0x12C($s2)
    ctx->pc = 0x1fea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fea6c:
    // 0x1fea6c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1fea6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1fea70: 0x46070032  c.eq.s      $f0, $f7
    ctx->pc = 0x1fea70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fea74: 0x45030037  bc1tl       . + 4 + (0x37 << 2)
    ctx->pc = 0x1FEA74u;
    {
        const bool branch_taken_0x1fea74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fea74) {
            ctx->pc = 0x1FEA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEA74u;
            // 0x1fea78: 0x8e5000c4  lw          $s0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEB54u;
            goto label_1feb54;
        }
    }
    ctx->pc = 0x1FEA7Cu;
    // 0x1fea7c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1fea7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fea80: 0xc646011c  lwc1        $f6, 0x11C($s2)
    ctx->pc = 0x1fea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1fea84: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1fea84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fea88: 0xc6450124  lwc1        $f5, 0x124($s2)
    ctx->pc = 0x1fea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1fea8c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1fea8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1fea90: 0xc6420750  lwc1        $f2, 0x750($s2)
    ctx->pc = 0x1fea90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fea94: 0xc6430758  lwc1        $f3, 0x758($s2)
    ctx->pc = 0x1fea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fea98: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1fea98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1fea9c: 0xc6440120  lwc1        $f4, 0x120($s2)
    ctx->pc = 0x1fea9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1feaa0: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x1feaa0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x1feaa4: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x1feaa4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x1feaa8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1feaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1feaac: 0x46072036  c.le.s      $f4, $f7
    ctx->pc = 0x1feaacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1feab0: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1feab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1feab4: 0xe6420750  swc1        $f2, 0x750($s2)
    ctx->pc = 0x1feab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1872), bits); }
    // 0x1feab8: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1FEAB8u;
    {
        const bool branch_taken_0x1feab8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAB8u;
        // 0x1feabc: 0xe6430758  swc1        $f3, 0x758($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feab8) {
            ctx->pc = 0x1FEB50u;
            goto label_1feb50;
        }
    }
    ctx->pc = 0x1FEAC0u;
    // 0x1feac0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1feac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1feac4: 0xc6400128  lwc1        $f0, 0x128($s2)
    ctx->pc = 0x1feac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1feac8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1feac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1feacc: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
    ctx->pc = 0x1FEACCu;
    {
        const bool branch_taken_0x1feacc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1feacc) {
            ctx->pc = 0x1FEAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEACCu;
            // 0x1fead0: 0x8e5000c4  lw          $s0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEB54u;
            goto label_1feb54;
        }
    }
    ctx->pc = 0x1FEAD4u;
    // 0x1fead4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1fead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fead8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1feadc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1feadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1feae0: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x1feae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1feae4: 0xe6430008  swc1        $f3, 0x8($s2)
    ctx->pc = 0x1feae4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1feae8: 0xa24201fb  sb          $v0, 0x1FB($s2)
    ctx->pc = 0x1feae8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 507), (uint8_t)GPR_U32(ctx, 2));
    // 0x1feaec: 0xe6470124  swc1        $f7, 0x124($s2)
    ctx->pc = 0x1feaecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
    // 0x1feaf0: 0xa243019a  sb          $v1, 0x19A($s2)
    ctx->pc = 0x1feaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 410), (uint8_t)GPR_U32(ctx, 3));
    // 0x1feaf4: 0xa6440144  sh          $a0, 0x144($s2)
    ctx->pc = 0x1feaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 324), (uint16_t)GPR_U32(ctx, 4));
    // 0x1feaf8: 0xe6470004  swc1        $f7, 0x4($s2)
    ctx->pc = 0x1feaf8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1feafc: 0xe647012c  swc1        $f7, 0x12C($s2)
    ctx->pc = 0x1feafcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x1feb00: 0xe647011c  swc1        $f7, 0x11C($s2)
    ctx->pc = 0x1feb00u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1feb04: 0xe6470120  swc1        $f7, 0x120($s2)
    ctx->pc = 0x1feb04u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x1feb08: 0x8e5000c4  lw          $s0, 0xC4($s2)
    ctx->pc = 0x1feb08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1feb0c: 0x9604002a  lhu         $a0, 0x2A($s0)
    ctx->pc = 0x1feb0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1feb10: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FEB10u;
    {
        const bool branch_taken_0x1feb10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB10u;
        // 0x1feb14: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb10) {
            ctx->pc = 0x1FEB54u;
            goto label_1feb54;
        }
    }
    ctx->pc = 0x1FEB18u;
    // 0x1feb18: 0x8643009a  lh          $v1, 0x9A($s2)
    ctx->pc = 0x1feb18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 154)));
    // 0x1feb1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1feb1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1feb20: 0xa64400a2  sh          $a0, 0xA2($s2)
    ctx->pc = 0x1feb20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 162), (uint16_t)GPR_U32(ctx, 4));
    // 0x1feb24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1feb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1feb28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1feb28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1feb2c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1feb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1feb30: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1feb30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1feb34: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x1feb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x1feb38: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x1feb38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
    // 0x1feb3c: 0xa24301fe  sb          $v1, 0x1FE($s2)
    ctx->pc = 0x1feb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 510), (uint8_t)GPR_U32(ctx, 3));
    // 0x1feb40: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x1feb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
    // 0x1feb44: 0xa6440096  sh          $a0, 0x96($s2)
    ctx->pc = 0x1feb44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 150), (uint16_t)GPR_U32(ctx, 4));
    // 0x1feb48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEB48u;
    {
        const bool branch_taken_0x1feb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB48u;
        // 0x1feb4c: 0xe64000a8  swc1        $f0, 0xA8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb48) {
            ctx->pc = 0x1FEB54u;
            goto label_1feb54;
        }
    }
    ctx->pc = 0x1FEB50u;
label_1feb50:
    // 0x1feb50: 0x8e5000c4  lw          $s0, 0xC4($s2)
    ctx->pc = 0x1feb50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_1feb54:
    // 0x1feb54: 0x8604001e  lh          $a0, 0x1E($s0)
    ctx->pc = 0x1feb54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x1feb58: 0x5080003a  beql        $a0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x1FEB58u;
    {
        const bool branch_taken_0x1feb58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb58) {
            ctx->pc = 0x1FEB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEB58u;
            // 0x1feb5c: 0xc6410114  lwc1        $f1, 0x114($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEC44u;
            goto label_1fec44;
        }
    }
    ctx->pc = 0x1FEB60u;
    // 0x1feb60: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x1feb60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x1feb64: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1FEB64u;
    {
        const bool branch_taken_0x1feb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB64u;
        // 0x1feb68: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb64) {
            ctx->pc = 0x1FEC40u;
            goto label_1fec40;
        }
    }
    ctx->pc = 0x1FEB6Cu;
    // 0x1feb6c: 0x86430096  lh          $v1, 0x96($s2)
    ctx->pc = 0x1feb6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x1feb70: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1feb70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1feb74: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1FEB74u;
    {
        const bool branch_taken_0x1feb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feb74) {
            ctx->pc = 0x1FEB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEB74u;
            // 0x1feb78: 0xc6410114  lwc1        $f1, 0x114($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEC44u;
            goto label_1fec44;
        }
    }
    ctx->pc = 0x1FEB7Cu;
    // 0x1feb7c: 0x96020028  lhu         $v0, 0x28($s0)
    ctx->pc = 0x1feb7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1feb80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1feb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1feb84: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x1FEB84u;
    {
        const bool branch_taken_0x1feb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feb84) {
            ctx->pc = 0x1FEB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEB84u;
            // 0x1feb88: 0xc6410114  lwc1        $f1, 0x114($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEC44u;
            goto label_1fec44;
        }
    }
    ctx->pc = 0x1FEB8Cu;
    // 0x1feb8c: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x1feb8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1feb90: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x1feb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1feb94: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x1feb94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1feb98: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1feb98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1feb9c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1feb9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1feba0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEBA0u;
    {
        const bool branch_taken_0x1feba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBA0u;
        // 0x1feba4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feba0) {
            ctx->pc = 0x1FEBB8u;
            goto label_1febb8;
        }
    }
    ctx->pc = 0x1FEBA8u;
    // 0x1feba8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1feba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1febac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1febacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1febb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEBB0u;
    {
        const bool branch_taken_0x1febb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBB0u;
        // 0x1febb4: 0xc7808254  lwc1        $f0, -0x7DAC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febb0) {
            ctx->pc = 0x1FEBC8u;
            goto label_1febc8;
        }
    }
    ctx->pc = 0x1FEBB8u;
label_1febb8:
    // 0x1febb8: 0xc7818258  lwc1        $f1, -0x7DA8($gp)
    ctx->pc = 0x1febb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1febbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1febbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1febc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1febc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1febc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1febc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1febc8:
    // 0x1febc8: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x1FEBC8u;
    SET_GPR_U32(ctx, 31, 0x1FEBD0u);
    ctx->pc = 0x1FEBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEBC8u;
    // 0x1febcc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x1FEBC8u, 0x1FEBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEBD0u;
label_1febd0:
    // 0x1febd0: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x1febd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1febd4: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x1febd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1febd8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1febd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1febdc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEBDCu;
    {
        const bool branch_taken_0x1febdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBDCu;
        // 0x1febe0: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febdc) {
            ctx->pc = 0x1FEBF8u;
            goto label_1febf8;
        }
    }
    ctx->pc = 0x1FEBE4u;
    // 0x1febe4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1febe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1febe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1febe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1febec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEBECu;
    {
        const bool branch_taken_0x1febec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBECu;
        // 0x1febf0: 0xc780825c  lwc1        $f0, -0x7DA4($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febec) {
            ctx->pc = 0x1FEC0Cu;
            goto label_1fec0c;
        }
    }
    ctx->pc = 0x1FEBF4u;
    // 0x1febf4: 0x0  nop
    ctx->pc = 0x1febf4u;
    // NOP
label_1febf8:
    // 0x1febf8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1febf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1febfc: 0xc7818260  lwc1        $f1, -0x7DA0($gp)
    ctx->pc = 0x1febfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fec00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fec04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fec04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fec08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fec08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fec0c:
    // 0x1fec0c: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x1FEC0Cu;
    SET_GPR_U32(ctx, 31, 0x1FEC14u);
    ctx->pc = 0x1FEC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC0Cu;
    // 0x1fec10: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x1FEC0Cu, 0x1FEC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC14u;
label_1fec14:
    // 0x1fec14: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1fec14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1fec18: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1fec18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fec1c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1fec1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1fec20: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1fec20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fec24: 0x4604a0c2  mul.s       $f3, $f20, $f4
    ctx->pc = 0x1fec24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x1fec28: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1fec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fec2c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1fec2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1fec30: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1fec30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1fec34: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1fec34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fec38: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x1fec38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1fec3c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1fec3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1fec40:
    // 0x1fec40: 0xc6410114  lwc1        $f1, 0x114($s2)
    ctx->pc = 0x1fec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fec44:
    // 0x1fec44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fec44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fec48: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1fec48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fec4c: 0x45030057  bc1tl       . + 4 + (0x57 << 2)
    ctx->pc = 0x1FEC4Cu;
    {
        const bool branch_taken_0x1fec4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fec4c) {
            ctx->pc = 0x1FEC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEC4Cu;
            // 0x1fec50: 0x964202b0  lhu         $v0, 0x2B0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEDACu;
            goto label_1fedac;
        }
    }
    ctx->pc = 0x1FEC54u;
    // 0x1fec54: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1fec54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1fec58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fec58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fec5c: 0x924201a6  lbu         $v0, 0x1A6($s2)
    ctx->pc = 0x1fec5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 422)));
    // 0x1fec60: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FEC60u;
    {
        const bool branch_taken_0x1fec60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC60u;
        // 0x1fec64: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec60) {
            ctx->pc = 0x1FECE0u;
            goto label_1fece0;
        }
    }
    ctx->pc = 0x1FEC68u;
    // 0x1fec68: 0x9643015e  lhu         $v1, 0x15E($s2)
    ctx->pc = 0x1fec68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 350)));
    // 0x1fec6c: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x1fec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1fec70: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fec70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fec74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEC74u;
    {
        const bool branch_taken_0x1fec74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC74u;
        // 0x1fec78: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec74) {
            ctx->pc = 0x1FEC90u;
            goto label_1fec90;
        }
    }
    ctx->pc = 0x1FEC7Cu;
    // 0x1fec7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fec7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fec80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fec80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fec84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEC84u;
    {
        const bool branch_taken_0x1fec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC84u;
        // 0x1fec88: 0xc7808264  lwc1        $f0, -0x7D9C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec84) {
            ctx->pc = 0x1FECA0u;
            goto label_1feca0;
        }
    }
    ctx->pc = 0x1FEC8Cu;
    // 0x1fec8c: 0x0  nop
    ctx->pc = 0x1fec8cu;
    // NOP
label_1fec90:
    // 0x1fec90: 0xc7818268  lwc1        $f1, -0x7D98($gp)
    ctx->pc = 0x1fec90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fec94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fec98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fec98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fec9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fec9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1feca0:
    // 0x1feca0: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x1FECA0u;
    SET_GPR_U32(ctx, 31, 0x1FECA8u);
    ctx->pc = 0x1FECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FECA0u;
    // 0x1feca4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x1FECA0u, 0x1FECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECA8u;
label_1feca8:
    // 0x1feca8: 0x9643015e  lhu         $v1, 0x15E($s2)
    ctx->pc = 0x1feca8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 350)));
    // 0x1fecac: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x1fecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1fecb0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fecb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fecb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FECB4u;
    {
        const bool branch_taken_0x1fecb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECB4u;
        // 0x1fecb8: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecb4) {
            ctx->pc = 0x1FECD0u;
            goto label_1fecd0;
        }
    }
    ctx->pc = 0x1FECBCu;
    // 0x1fecbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fecbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fecc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fecc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fecc4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1FECC4u;
    {
        const bool branch_taken_0x1fecc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECC4u;
        // 0x1fecc8: 0xc780826c  lwc1        $f0, -0x7D94($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecc4) {
            ctx->pc = 0x1FED6Cu;
            goto label_1fed6c;
        }
    }
    ctx->pc = 0x1FECCCu;
    // 0x1feccc: 0x0  nop
    ctx->pc = 0x1fecccu;
    // NOP
label_1fecd0:
    // 0x1fecd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fecd4: 0xc7818270  lwc1        $f1, -0x7D90($gp)
    ctx->pc = 0x1fecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fecd8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1FECD8u;
    {
        const bool branch_taken_0x1fecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECD8u;
        // 0x1fecdc: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecd8) {
            ctx->pc = 0x1FED64u;
            goto label_1fed64;
        }
    }
    ctx->pc = 0x1FECE0u;
label_1fece0:
    // 0x1fece0: 0x8643015e  lh          $v1, 0x15E($s2)
    ctx->pc = 0x1fece0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 350)));
    // 0x1fece4: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x1fece4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1fece8: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x1fece8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1fecec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fecf0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1fecf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fecf4: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1fecf4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fecf8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FECF8u;
    {
        const bool branch_taken_0x1fecf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECF8u;
        // 0x1fecfc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecf8) {
            ctx->pc = 0x1FED10u;
            goto label_1fed10;
        }
    }
    ctx->pc = 0x1FED00u;
    // 0x1fed00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fed00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fed04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fed04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fed08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FED08u;
    {
        const bool branch_taken_0x1fed08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED08u;
        // 0x1fed0c: 0xc7808274  lwc1        $f0, -0x7D8C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed08) {
            ctx->pc = 0x1FED20u;
            goto label_1fed20;
        }
    }
    ctx->pc = 0x1FED10u;
label_1fed10:
    // 0x1fed10: 0xc7818278  lwc1        $f1, -0x7D88($gp)
    ctx->pc = 0x1fed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fed14: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fed18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fed18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fed1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fed1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fed20:
    // 0x1fed20: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x1FED20u;
    SET_GPR_U32(ctx, 31, 0x1FED28u);
    ctx->pc = 0x1FED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED20u;
    // 0x1fed24: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x1FED20u, 0x1FED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED28u;
label_1fed28:
    // 0x1fed28: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x1fed28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1fed2c: 0x8644015e  lh          $a0, 0x15E($s2)
    ctx->pc = 0x1fed2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 350)));
    // 0x1fed30: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x1fed30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1fed34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fed34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fed38: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1fed38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fed3c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1fed3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fed40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FED40u;
    {
        const bool branch_taken_0x1fed40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED40u;
        // 0x1fed44: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed40) {
            ctx->pc = 0x1FED58u;
            goto label_1fed58;
        }
    }
    ctx->pc = 0x1FED48u;
    // 0x1fed48: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1fed48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fed4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fed4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fed50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FED50u;
    {
        const bool branch_taken_0x1fed50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED50u;
        // 0x1fed54: 0xc780827c  lwc1        $f0, -0x7D84($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed50) {
            ctx->pc = 0x1FED6Cu;
            goto label_1fed6c;
        }
    }
    ctx->pc = 0x1FED58u;
label_1fed58:
    // 0x1fed58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fed58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fed5c: 0xc7818280  lwc1        $f1, -0x7D80($gp)
    ctx->pc = 0x1fed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fed60: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fed60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1fed64:
    // 0x1fed64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fed64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fed68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fed68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fed6c:
    // 0x1fed6c: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x1FED6Cu;
    SET_GPR_U32(ctx, 31, 0x1FED74u);
    ctx->pc = 0x1FED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED6Cu;
    // 0x1fed70: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x1FED6Cu, 0x1FED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED74u;
label_1fed74:
    // 0x1fed74: 0x4600a902  mul.s       $f4, $f21, $f0
    ctx->pc = 0x1fed74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1fed78: 0xc6410750  lwc1        $f1, 0x750($s2)
    ctx->pc = 0x1fed78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fed7c: 0xc6420758  lwc1        $f2, 0x758($s2)
    ctx->pc = 0x1fed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fed80: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1fed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fed84: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1fed84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1fed88: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1fed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fed8c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1fed8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1fed90: 0x461418c1  sub.s       $f3, $f3, $f20
    ctx->pc = 0x1fed90u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x1fed94: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1fed94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1fed98: 0xe6410750  swc1        $f1, 0x750($s2)
    ctx->pc = 0x1fed98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1872), bits); }
    // 0x1fed9c: 0xe6420758  swc1        $f2, 0x758($s2)
    ctx->pc = 0x1fed9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1880), bits); }
    // 0x1feda0: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x1feda0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1feda4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1feda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1feda8: 0x964202b0  lhu         $v0, 0x2B0($s2)
    ctx->pc = 0x1feda8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 688)));
label_1fedac:
    // 0x1fedac: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FEDACu;
    {
        const bool branch_taken_0x1fedac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fedac) {
            ctx->pc = 0x1FEDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEDACu;
            // 0x1fedb0: 0x864202b2  lh          $v0, 0x2B2($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 690)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEDFCu;
            goto label_1fedfc;
        }
    }
    ctx->pc = 0x1FEDB4u;
    // 0x1fedb4: 0xc6430750  lwc1        $f3, 0x750($s2)
    ctx->pc = 0x1fedb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fedb8: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x1fedb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fedbc: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1fedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1fedc0: 0xc64402e8  lwc1        $f4, 0x2E8($s2)
    ctx->pc = 0x1fedc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1fedc4: 0xc6420758  lwc1        $f2, 0x758($s2)
    ctx->pc = 0x1fedc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fedc8: 0xc64502ec  lwc1        $f5, 0x2EC($s2)
    ctx->pc = 0x1fedc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1fedcc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1fedccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1fedd0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1fedd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fedd4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1fedd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fedd8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1fedd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1feddc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1feddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1fede0: 0xa64202b0  sh          $v0, 0x2B0($s2)
    ctx->pc = 0x1fede0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 688), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fede4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1fede4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1fede8: 0xe6430750  swc1        $f3, 0x750($s2)
    ctx->pc = 0x1fede8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1872), bits); }
    // 0x1fedec: 0xe6420758  swc1        $f2, 0x758($s2)
    ctx->pc = 0x1fedecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1880), bits); }
    // 0x1fedf0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1fedf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1fedf4: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1fedf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1fedf8: 0x864202b2  lh          $v0, 0x2B2($s2)
    ctx->pc = 0x1fedf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 690)));
label_1fedfc:
    // 0x1fedfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEDFCu;
    {
        const bool branch_taken_0x1fedfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDFCu;
        // 0x1fee00: 0x964302b2  lhu         $v1, 0x2B2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 690)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fedfc) {
            ctx->pc = 0x1FEE1Cu;
            goto label_1fee1c;
        }
    }
    ctx->pc = 0x1FEE04u;
    // 0x1fee04: 0x9642007a  lhu         $v0, 0x7A($s2)
    ctx->pc = 0x1fee04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1fee08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fee08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fee0c: 0x964402b4  lhu         $a0, 0x2B4($s2)
    ctx->pc = 0x1fee0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1fee10: 0xa64302b2  sh          $v1, 0x2B2($s2)
    ctx->pc = 0x1fee10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fee14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fee18: 0xa642007a  sh          $v0, 0x7A($s2)
    ctx->pc = 0x1fee18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 2));
label_1fee1c:
    // 0x1fee1c: 0x9645016a  lhu         $a1, 0x16A($s2)
    ctx->pc = 0x1fee1cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 362)));
    // 0x1fee20: 0x50a00031  beql        $a1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1FEE20u;
    {
        const bool branch_taken_0x1fee20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee20) {
            ctx->pc = 0x1FEE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEE20u;
            // 0x1fee24: 0x864202a4  lh          $v0, 0x2A4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEEE8u;
            goto label_1feee8;
        }
    }
    ctx->pc = 0x1FEE28u;
    // 0x1fee28: 0x9644016c  lhu         $a0, 0x16C($s2)
    ctx->pc = 0x1fee28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 364)));
    // 0x1fee2c: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x1fee2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fee30: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x1fee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x1fee34: 0xc7818284  lwc1        $f1, -0x7D7C($gp)
    ctx->pc = 0x1fee34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fee38: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1fee38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1fee3c: 0xc7828288  lwc1        $f2, -0x7D78($gp)
    ctx->pc = 0x1fee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fee40: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1fee40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1fee44: 0x9643007a  lhu         $v1, 0x7A($s2)
    ctx->pc = 0x1fee44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1fee48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fee48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fee4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fee4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fee50: 0xa645016a  sh          $a1, 0x16A($s2)
    ctx->pc = 0x1fee50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 362), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fee54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fee58: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x1fee58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fee5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fee5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1fee60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fee60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fee64: 0x0  nop
    ctx->pc = 0x1fee64u;
    // NOP
    // 0x1fee68: 0x0  nop
    ctx->pc = 0x1fee68u;
    // NOP
    // 0x1fee6c: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1fee6cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x1fee70: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1fee70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fee74: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEE74u;
    {
        const bool branch_taken_0x1fee74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE74u;
        // 0x1fee78: 0xa643007a  sh          $v1, 0x7A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee74) {
            ctx->pc = 0x1FEE88u;
            goto label_1fee88;
        }
    }
    ctx->pc = 0x1FEE7Cu;
    // 0x1fee7c: 0xc780828c  lwc1        $f0, -0x7D74($gp)
    ctx->pc = 0x1fee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fee80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEE80u;
    {
        const bool branch_taken_0x1fee80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE80u;
        // 0x1fee84: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee80) {
            ctx->pc = 0x1FEEA0u;
            goto label_1feea0;
        }
    }
    ctx->pc = 0x1FEE88u;
label_1fee88:
    // 0x1fee88: 0xc7808290  lwc1        $f0, -0x7D70($gp)
    ctx->pc = 0x1fee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fee8c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1fee8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fee90: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEE90u;
    {
        const bool branch_taken_0x1fee90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fee90) {
            ctx->pc = 0x1FEE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEE90u;
            // 0x1fee94: 0xc6400020  lwc1        $f0, 0x20($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEEA4u;
            goto label_1feea4;
        }
    }
    ctx->pc = 0x1FEE98u;
    // 0x1fee98: 0xc7808294  lwc1        $f0, -0x7D6C($gp)
    ctx->pc = 0x1fee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fee9c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1fee9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1feea0:
    // 0x1feea0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1feea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1feea4:
    // 0x1feea4: 0xc7818298  lwc1        $f1, -0x7D68($gp)
    ctx->pc = 0x1feea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1feea8: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x1feea8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1feeac: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1feeacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1feeb0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEEB0u;
    {
        const bool branch_taken_0x1feeb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1feeb0) {
            ctx->pc = 0x1FEEC8u;
            goto label_1feec8;
        }
    }
    ctx->pc = 0x1FEEB8u;
    // 0x1feeb8: 0xc780829c  lwc1        $f0, -0x7D64($gp)
    ctx->pc = 0x1feeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1feebc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEEBCu;
    {
        const bool branch_taken_0x1feebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEBCu;
        // 0x1feec0: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feebc) {
            ctx->pc = 0x1FEEE0u;
            goto label_1feee0;
        }
    }
    ctx->pc = 0x1FEEC4u;
    // 0x1feec4: 0x0  nop
    ctx->pc = 0x1feec4u;
    // NOP
label_1feec8:
    // 0x1feec8: 0xc78082a0  lwc1        $f0, -0x7D60($gp)
    ctx->pc = 0x1feec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1feecc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1feeccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1feed0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEED0u;
    {
        const bool branch_taken_0x1feed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1feed0) {
            ctx->pc = 0x1FEED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEED0u;
            // 0x1feed4: 0xe6420020  swc1        $f2, 0x20($s2) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEEE4u;
            goto label_1feee4;
        }
    }
    ctx->pc = 0x1FEED8u;
    // 0x1feed8: 0xc78082a4  lwc1        $f0, -0x7D5C($gp)
    ctx->pc = 0x1feed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1feedc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1feedcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1feee0:
    // 0x1feee0: 0xe6420020  swc1        $f2, 0x20($s2)
    ctx->pc = 0x1feee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1feee4:
    // 0x1feee4: 0x864202a4  lh          $v0, 0x2A4($s2)
    ctx->pc = 0x1feee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 676)));
label_1feee8:
    // 0x1feee8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1feee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1feeec: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEEECu;
    {
        const bool branch_taken_0x1feeec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEECu;
        // 0x1feef0: 0x964302a4  lhu         $v1, 0x2A4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feeec) {
            ctx->pc = 0x1FEF04u;
            goto label_1fef04;
        }
    }
    ctx->pc = 0x1FEEF4u;
    // 0x1feef4: 0xc64002dc  lwc1        $f0, 0x2DC($s2)
    ctx->pc = 0x1feef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1feef8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1feef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1feefc: 0xa64202a4  sh          $v0, 0x2A4($s2)
    ctx->pc = 0x1feefcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 676), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fef00: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x1fef00u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1fef04:
    // 0x1fef04: 0x864202a6  lh          $v0, 0x2A6($s2)
    ctx->pc = 0x1fef04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 678)));
    // 0x1fef08: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FEF08u;
    {
        const bool branch_taken_0x1fef08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF08u;
        // 0x1fef0c: 0x964302a6  lhu         $v1, 0x2A6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 678)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef08) {
            ctx->pc = 0x1FEF70u;
            goto label_1fef70;
        }
    }
    ctx->pc = 0x1FEF10u;
    // 0x1fef10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fef14: 0x264402ac  addiu       $a0, $s2, 0x2AC
    ctx->pc = 0x1fef14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 684));
    // 0x1fef18: 0xa64302a6  sh          $v1, 0x2A6($s2)
    ctx->pc = 0x1fef18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 678), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fef1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fef20: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1fef20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fef24: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1fef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1fef28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1fef28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1fef2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fef2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fef30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fef30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fef34: 0x864302c0  lh          $v1, 0x2C0($s2)
    ctx->pc = 0x1fef34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 704)));
    // 0x1fef38: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1fef38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1fef3c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FEF3Cu;
    {
        const bool branch_taken_0x1fef3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF3Cu;
        // 0x1fef40: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef3c) {
            ctx->pc = 0x1FEF70u;
            goto label_1fef70;
        }
    }
    ctx->pc = 0x1FEF44u;
    // 0x1fef44: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x1fef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1fef48: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1fef48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fef4c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1fef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fef50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fef54: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fef54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fef58: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1fef58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fef5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fef60: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1fef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1fef64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fef64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fef68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fef68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fef6c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fef6cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fef70:
    // 0x1fef70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fef70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fef74: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1fef74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fef78: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x1FEF78u;
    {
        const bool branch_taken_0x1fef78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF78u;
        // 0x1fef7c: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef78) {
            ctx->pc = 0x1FF030u;
            goto label_1ff030;
        }
    }
    ctx->pc = 0x1FEF80u;
    // 0x1fef80: 0x964302a8  lhu         $v1, 0x2A8($s2)
    ctx->pc = 0x1fef80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x1fef84: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fef84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fef88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEF88u;
    {
        const bool branch_taken_0x1fef88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF88u;
        // 0x1fef8c: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef88) {
            ctx->pc = 0x1FEFA0u;
            goto label_1fefa0;
        }
    }
    ctx->pc = 0x1FEF90u;
    // 0x1fef90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fef90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fef94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fef94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fef98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEF98u;
    {
        const bool branch_taken_0x1fef98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF98u;
        // 0x1fef9c: 0xc78082a8  lwc1        $f0, -0x7D58($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef98) {
            ctx->pc = 0x1FEFB0u;
            goto label_1fefb0;
        }
    }
    ctx->pc = 0x1FEFA0u;
label_1fefa0:
    // 0x1fefa0: 0xc78182ac  lwc1        $f1, -0x7D54($gp)
    ctx->pc = 0x1fefa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fefa4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fefa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fefa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fefa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fefac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fefacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fefb0:
    // 0x1fefb0: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x1FEFB0u;
    SET_GPR_U32(ctx, 31, 0x1FEFB8u);
    ctx->pc = 0x1FEFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEFB0u;
    // 0x1fefb4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x1FEFB0u, 0x1FEFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEFB8u;
label_1fefb8:
    // 0x1fefb8: 0x964302a8  lhu         $v1, 0x2A8($s2)
    ctx->pc = 0x1fefb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x1fefbc: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x1fefbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1fefc0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fefc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fefc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEFC4u;
    {
        const bool branch_taken_0x1fefc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFC4u;
        // 0x1fefc8: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefc4) {
            ctx->pc = 0x1FEFE0u;
            goto label_1fefe0;
        }
    }
    ctx->pc = 0x1FEFCCu;
    // 0x1fefcc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fefccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fefd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fefd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fefd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEFD4u;
    {
        const bool branch_taken_0x1fefd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFD4u;
        // 0x1fefd8: 0xc78082b0  lwc1        $f0, -0x7D50($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefd4) {
            ctx->pc = 0x1FEFF4u;
            goto label_1feff4;
        }
    }
    ctx->pc = 0x1FEFDCu;
    // 0x1fefdc: 0x0  nop
    ctx->pc = 0x1fefdcu;
    // NOP
label_1fefe0:
    // 0x1fefe0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fefe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fefe4: 0xc78182b4  lwc1        $f1, -0x7D4C($gp)
    ctx->pc = 0x1fefe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fefe8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fefe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fefec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fefecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1feff0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1feff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1feff4:
    // 0x1feff4: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x1FEFF4u;
    SET_GPR_U32(ctx, 31, 0x1FEFFCu);
    ctx->pc = 0x1FEFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEFF4u;
    // 0x1feff8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x1FEFF4u, 0x1FEFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEFFCu;
label_1feffc:
    // 0x1feffc: 0xc6430750  lwc1        $f3, 0x750($s2)
    ctx->pc = 0x1feffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ff000: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ff000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ff004: 0xc6440758  lwc1        $f4, 0x758($s2)
    ctx->pc = 0x1ff004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ff008: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1ff008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ff00c: 0x461518c0  add.s       $f3, $f3, $f21
    ctx->pc = 0x1ff00cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
    // 0x1ff010: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1ff010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff014: 0x46151080  add.s       $f2, $f2, $f21
    ctx->pc = 0x1ff014u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
    // 0x1ff018: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ff018u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ff01c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1ff01cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1ff020: 0xe6430750  swc1        $f3, 0x750($s2)
    ctx->pc = 0x1ff020u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1872), bits); }
    // 0x1ff024: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x1ff024u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1ff028: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1ff028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1ff02c: 0xe6440758  swc1        $f4, 0x758($s2)
    ctx->pc = 0x1ff02cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1880), bits); }
label_1ff030:
    // 0x1ff030: 0x8643003e  lh          $v1, 0x3E($s2)
    ctx->pc = 0x1ff030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x1ff034: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1ff034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1ff038: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1FF038u;
    {
        const bool branch_taken_0x1ff038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FF03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF038u;
        // 0x1ff03c: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff038) {
            ctx->pc = 0x1FF170u;
            goto label_1ff170;
        }
    }
    ctx->pc = 0x1FF040u;
    // 0x1ff040: 0x9642003c  lhu         $v0, 0x3C($s2)
    ctx->pc = 0x1ff040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1ff044: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ff044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ff048: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1ff048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ff04c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ff04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ff050: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ff050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff054: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x1ff054u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x1ff058: 0x2673a540  addiu       $s3, $s3, -0x5AC0
    ctx->pc = 0x1ff058u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944064));
    // 0x1ff05c: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x1ff05cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1ff060: 0x86620044  lh          $v0, 0x44($s3)
    ctx->pc = 0x1ff060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1ff064: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF064u;
    {
        const bool branch_taken_0x1ff064 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FF068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF064u;
        // 0x1ff068: 0x96630044  lhu         $v1, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff064) {
            ctx->pc = 0x1FF084u;
            goto label_1ff084;
        }
    }
    ctx->pc = 0x1FF06Cu;
    // 0x1ff06c: 0x86620048  lh          $v0, 0x48($s3)
    ctx->pc = 0x1ff06cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1ff070: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ff070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff074: 0xa6630044  sh          $v1, 0x44($s3)
    ctx->pc = 0x1ff074u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ff078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ff078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff07c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ff07cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ff080: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1ff080u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ff084:
    // 0x1ff084: 0x86620046  lh          $v0, 0x46($s3)
    ctx->pc = 0x1ff084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x1ff088: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FF088u;
    {
        const bool branch_taken_0x1ff088 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF088u;
        // 0x1ff08c: 0x96630046  lhu         $v1, 0x46($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff088) {
            ctx->pc = 0x1FF0B8u;
            goto label_1ff0b8;
        }
    }
    ctx->pc = 0x1FF090u;
    // 0x1ff090: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ff090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff094: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x1ff094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1ff098: 0xa6630046  sh          $v1, 0x46($s3)
    ctx->pc = 0x1ff098u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ff09c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ff09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff0a0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1ff0a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff0a4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1ff0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1ff0a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ff0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ff0ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff0b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ff0b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ff0b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ff0b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ff0b8:
    // 0x1ff0b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1ff0b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ff0bc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1ff0bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ff0c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF0C0u;
    {
        const bool branch_taken_0x1ff0c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0C0u;
        // 0x1ff0c4: 0xc6600050  lwc1        $f0, 0x50($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0c0) {
            ctx->pc = 0x1FF0E0u;
            goto label_1ff0e0;
        }
    }
    ctx->pc = 0x1FF0C8u;
    // 0x1ff0c8: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ff0c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1ff0cc: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x1ff0ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ff0d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ff0d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ff0d4: 0xa662004c  sh          $v0, 0x4C($s3)
    ctx->pc = 0x1ff0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 76), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ff0d8: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x1ff0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x1ff0dc: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x1ff0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ff0e0:
    // 0x1ff0e0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1ff0e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ff0e4: 0x4502005a  bc1fl       . + 4 + (0x5A << 2)
    ctx->pc = 0x1FF0E4u;
    {
        const bool branch_taken_0x1ff0e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ff0e4) {
            ctx->pc = 0x1FF0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF0E4u;
            // 0x1ff0e8: 0x9243019b  lbu         $v1, 0x19B($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 411)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF250u;
            goto label_1ff250;
        }
    }
    ctx->pc = 0x1FF0ECu;
    // 0x1ff0ec: 0x8662004a  lh          $v0, 0x4A($s3)
    ctx->pc = 0x1ff0ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 74)));
    // 0x1ff0f0: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1FF0F0u;
    {
        const bool branch_taken_0x1ff0f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0F0u;
        // 0x1ff0f4: 0x9663004a  lhu         $v1, 0x4A($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 74)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0f0) {
            ctx->pc = 0x1FF24Cu;
            goto label_1ff24c;
        }
    }
    ctx->pc = 0x1FF0F8u;
    // 0x1ff0f8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1ff0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff0fc: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x1ff0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1ff100: 0xa662004a  sh          $v0, 0x4A($s3)
    ctx->pc = 0x1ff100u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 74), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ff104: 0x26710030  addiu       $s1, $s3, 0x30
    ctx->pc = 0x1ff104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1ff108: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ff108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff10c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ff10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff110: 0xc084784  jal         func_211E10
    ctx->pc = 0x1FF110u;
    SET_GPR_U32(ctx, 31, 0x1FF118u);
    ctx->pc = 0x1FF114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF110u;
    // 0x1ff114: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x1FF110u, 0x1FF118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF118u;
label_1ff118:
    // 0x1ff118: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ff118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff11c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ff11cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff120: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ff120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff124: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ff124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff128: 0xc0847da  jal         func_211F68
    ctx->pc = 0x1FF128u;
    SET_GPR_U32(ctx, 31, 0x1FF130u);
    ctx->pc = 0x1FF12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF128u;
    // 0x1ff12c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x1FF128u, 0x1FF130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF130u;
label_1ff130:
    // 0x1ff130: 0x8662004c  lh          $v0, 0x4C($s3)
    ctx->pc = 0x1ff130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1ff134: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ff134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff138: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ff138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ff13c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1ff13cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ff140: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x1FF140u;
    SET_GPR_U32(ctx, 31, 0x1FF148u);
    ctx->pc = 0x1FF144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF140u;
    // 0x1ff144: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x1FF140u, 0x1FF148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF148u;
label_1ff148:
    // 0x1ff148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff14c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ff14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff150: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x1FF150u;
    SET_GPR_U32(ctx, 31, 0x1FF158u);
    ctx->pc = 0x1FF154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF150u;
    // 0x1ff154: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x1FF150u, 0x1FF158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF158u;
label_1ff158:
    // 0x1ff158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff15c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ff15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff160: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x1FF160u;
    SET_GPR_U32(ctx, 31, 0x1FF168u);
    ctx->pc = 0x1FF164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF160u;
    // 0x1ff164: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x1FF160u, 0x1FF168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF168u;
label_1ff168:
    // 0x1ff168: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1FF168u;
    {
        const bool branch_taken_0x1ff168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF168u;
        // 0x1ff16c: 0x9243019b  lbu         $v1, 0x19B($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 411)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff168) {
            ctx->pc = 0x1FF250u;
            goto label_1ff250;
        }
    }
    ctx->pc = 0x1FF170u;
label_1ff170:
    // 0x1ff170: 0x54620037  bnel        $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1FF170u;
    {
        const bool branch_taken_0x1ff170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ff170) {
            ctx->pc = 0x1FF174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF170u;
            // 0x1ff174: 0x9243019b  lbu         $v1, 0x19B($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 411)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF250u;
            goto label_1ff250;
        }
    }
    ctx->pc = 0x1FF178u;
    // 0x1ff178: 0x9642003c  lhu         $v0, 0x3C($s2)
    ctx->pc = 0x1ff178u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1ff17c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ff17cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ff180: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1ff180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ff184: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ff184u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ff188: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ff188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff18c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1ff18cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1ff190: 0x2610a540  addiu       $s0, $s0, -0x5AC0
    ctx->pc = 0x1ff190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944064));
    // 0x1ff194: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1ff194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ff198: 0x8602006a  lh          $v0, 0x6A($s0)
    ctx->pc = 0x1ff198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x1ff19c: 0x5840002c  blezl       $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1FF19Cu;
    {
        const bool branch_taken_0x1ff19c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ff19c) {
            ctx->pc = 0x1FF1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF19Cu;
            // 0x1ff1a0: 0x9243019b  lbu         $v1, 0x19B($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 411)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF250u;
            goto label_1ff250;
        }
    }
    ctx->pc = 0x1FF1A4u;
    // 0x1ff1a4: 0x86020064  lh          $v0, 0x64($s0)
    ctx->pc = 0x1ff1a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ff1a8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF1A8u;
    {
        const bool branch_taken_0x1ff1a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1A8u;
        // 0x1ff1ac: 0x96030064  lhu         $v1, 0x64($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1a8) {
            ctx->pc = 0x1FF1C8u;
            goto label_1ff1c8;
        }
    }
    ctx->pc = 0x1FF1B0u;
    // 0x1ff1b0: 0x86020068  lh          $v0, 0x68($s0)
    ctx->pc = 0x1ff1b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ff1b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ff1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff1b8: 0xa6030064  sh          $v1, 0x64($s0)
    ctx->pc = 0x1ff1b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ff1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ff1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff1c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ff1c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ff1c4: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x1ff1c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_1ff1c8:
    // 0x1ff1c8: 0x86020066  lh          $v0, 0x66($s0)
    ctx->pc = 0x1ff1c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x1ff1cc: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FF1CCu;
    {
        const bool branch_taken_0x1ff1cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1CCu;
        // 0x1ff1d0: 0x96030066  lhu         $v1, 0x66($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1cc) {
            ctx->pc = 0x1FF1FCu;
            goto label_1ff1fc;
        }
    }
    ctx->pc = 0x1FF1D4u;
    // 0x1ff1d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ff1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff1d8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1ff1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1ff1dc: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x1ff1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ff1e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ff1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff1e4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1ff1e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff1e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1ff1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1ff1ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ff1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ff1f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff1f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff1f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ff1f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ff1f8: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1ff1f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_1ff1fc:
    // 0x1ff1fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ff1fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff200: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1ff200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ff204: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF204u;
    {
        const bool branch_taken_0x1ff204 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ff204) {
            ctx->pc = 0x1FF208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF204u;
            // 0x1ff208: 0x9602006a  lhu         $v0, 0x6A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF22Cu;
            goto label_1ff22c;
        }
    }
    ctx->pc = 0x1FF20Cu;
    // 0x1ff20c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ff20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff210: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x1FF210u;
    SET_GPR_U32(ctx, 31, 0x1FF218u);
    ctx->pc = 0x1FF214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF210u;
    // 0x1ff214: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x1FF210u, 0x1FF218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF218u;
label_1ff218:
    // 0x1ff218: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1ff218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1ff21c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ff21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff220: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x1FF220u;
    SET_GPR_U32(ctx, 31, 0x1FF228u);
    ctx->pc = 0x1FF224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF220u;
    // 0x1ff224: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x1FF220u, 0x1FF228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF228u;
label_1ff228:
    // 0x1ff228: 0x9602006a  lhu         $v0, 0x6A($s0)
    ctx->pc = 0x1ff228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
label_1ff22c:
    // 0x1ff22c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ff22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ff230: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1ff230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff234: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF234u;
    {
        const bool branch_taken_0x1ff234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF234u;
        // 0x1ff238: 0xa602006a  sh          $v0, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff234) {
            ctx->pc = 0x1FF24Cu;
            goto label_1ff24c;
        }
    }
    ctx->pc = 0x1FF23Cu;
    // 0x1ff23c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1ff23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1ff240: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1ff240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1ff244: 0xc080a2a  jal         func_2028A8
    ctx->pc = 0x1FF244u;
    SET_GPR_U32(ctx, 31, 0x1FF24Cu);
    ctx->pc = 0x1FF248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF244u;
    // 0x1ff248: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2028A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2028A8u, 0x1FF244u, 0x1FF24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF24Cu;
label_1ff24c:
    // 0x1ff24c: 0x9243019b  lbu         $v1, 0x19B($s2)
    ctx->pc = 0x1ff24cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 411)));
label_1ff250:
    // 0x1ff250: 0x2c62002f  sltiu       $v0, $v1, 0x2F
    ctx->pc = 0x1ff250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
    // 0x1ff254: 0x504002dc  beql        $v0, $zero, . + 4 + (0x2DC << 2)
    ctx->pc = 0x1FF254u;
    {
        const bool branch_taken_0x1ff254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff254) {
            ctx->pc = 0x1FF258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF254u;
            // 0x1ff258: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF25Cu;
    // 0x1ff25c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ff25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ff260: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1ff260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1ff264: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ff264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ff268: 0x8c633880  lw          $v1, 0x3880($v1)
    ctx->pc = 0x1ff268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14464)));
    // 0x1ff26c: 0x600008  jr          $v1
    ctx->pc = 0x1FF26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF278u: goto label_1ff278;
            case 0x1FF280u: goto label_1ff280;
            case 0x1FF338u: goto label_1ff338;
            case 0x1FF518u: goto label_1ff518;
            case 0x1FF528u: goto label_1ff528;
            case 0x1FF538u: goto label_1ff538;
            case 0x1FF548u: goto label_1ff548;
            case 0x1FF558u: goto label_1ff558;
            case 0x1FF568u: goto label_1ff568;
            case 0x1FF578u: goto label_1ff578;
            case 0x1FF588u: goto label_1ff588;
            case 0x1FF598u: goto label_1ff598;
            case 0x1FF5C0u: goto label_1ff5c0;
            case 0x1FF5E8u: goto label_1ff5e8;
            case 0x1FF610u: goto label_1ff610;
            case 0x1FF638u: goto label_1ff638;
            case 0x1FF64Cu: goto label_1ff64c;
            case 0x1FF668u: goto label_1ff668;
            case 0x1FF690u: goto label_1ff690;
            case 0x1FF6B8u: goto label_1ff6b8;
            case 0x1FF6E0u: goto label_1ff6e0;
            case 0x1FF708u: goto label_1ff708;
            case 0x1FF71Cu: goto label_1ff71c;
            case 0x1FF738u: goto label_1ff738;
            case 0x1FF858u: goto label_1ff858;
            case 0x1FF950u: goto label_1ff950;
            case 0x1FF9A0u: goto label_1ff9a0;
            case 0x1FF9F8u: goto label_1ff9f8;
            case 0x1FFAF8u: goto label_1ffaf8;
            case 0x1FFBB8u: goto label_1ffbb8;
            case 0x1FFBC8u: goto label_1ffbc8;
            case 0x1FFBD8u: goto label_1ffbd8;
            case 0x1FFBE8u: goto label_1ffbe8;
            case 0x1FFBF8u: goto label_1ffbf8;
            case 0x1FFC08u: goto label_1ffc08;
            case 0x1FFC60u: goto label_1ffc60;
            case 0x1FFC78u: goto label_1ffc78;
            case 0x1FFC90u: goto label_1ffc90;
            case 0x1FFCA8u: goto label_1ffca8;
            case 0x1FFCC0u: goto label_1ffcc0;
            case 0x1FFCD8u: goto label_1ffcd8;
            case 0x1FFD60u: goto label_1ffd60;
            case 0x1FFDC4u: goto label_1ffdc4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF26Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FF274u;
    // 0x1ff274: 0x0  nop
    ctx->pc = 0x1ff274u;
    // NOP
label_1ff278:
    // 0x1ff278: 0x100002d1  b           . + 4 + (0x2D1 << 2)
    ctx->pc = 0x1FF278u;
    {
        const bool branch_taken_0x1ff278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF278u;
        // 0x1ff27c: 0x9642000e  lhu         $v0, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff278) {
            ctx->pc = 0x1FFDC0u;
            goto label_1ffdc0;
        }
    }
    ctx->pc = 0x1FF280u;
label_1ff280:
    // 0x1ff280: 0x8e5000c4  lw          $s0, 0xC4($s2)
    ctx->pc = 0x1ff280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1ff284: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ff284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff288: 0x96530096  lhu         $s3, 0x96($s2)
    ctx->pc = 0x1ff288u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x1ff28c: 0x24051555  addiu       $a1, $zero, 0x1555
    ctx->pc = 0x1ff28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5461));
    // 0x1ff290: 0x96020044  lhu         $v0, 0x44($s0)
    ctx->pc = 0x1ff290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1ff294: 0x9644008a  lhu         $a0, 0x8A($s2)
    ctx->pc = 0x1ff294u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
    // 0x1ff298: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1ff298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1ff29c: 0x9655007a  lhu         $s5, 0x7A($s2)
    ctx->pc = 0x1ff29cu;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1ff2a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ff2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ff2a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ff2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff2a8: 0x952023  subu        $a0, $a0, $s5
    ctx->pc = 0x1ff2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x1ff2ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1ff2acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ff2b0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ff2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ff2b4: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x1ff2b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ff2b8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1ff2b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1ff2bc: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1ff2bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1ff2c0: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x1ff2c0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ff2c4: 0x2012  mflo        $a0
    ctx->pc = 0x1ff2c4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1ff2c8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ff2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ff2cc: 0xc07f8ac  jal         func_1FE2B0
    ctx->pc = 0x1FF2CCu;
    SET_GPR_U32(ctx, 31, 0x1FF2D4u);
    ctx->pc = 0x1FF2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF2CCu;
    // 0x1ff2d0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2B0u, 0x1FF2CCu, 0x1FF2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF2D4u;
label_1ff2d4:
    // 0x1ff2d4: 0x9654008e  lhu         $s4, 0x8E($s2)
    ctx->pc = 0x1ff2d4u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 142)));
    // 0x1ff2d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ff2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff2dc: 0x8645008e  lh          $a1, 0x8E($s2)
    ctx->pc = 0x1ff2dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 142)));
    // 0x1ff2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff2e4: 0xc07f8ba  jal         func_1FE2E8
    ctx->pc = 0x1FF2E4u;
    SET_GPR_U32(ctx, 31, 0x1FF2ECu);
    ctx->pc = 0x1FF2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF2E4u;
    // 0x1ff2e8: 0x24067fff  addiu       $a2, $zero, 0x7FFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2E8u, 0x1FF2E4u, 0x1FF2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF2ECu;
label_1ff2ec:
    // 0x1ff2ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ff2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff2f0: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x1ff2f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ff2f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF2F4u;
    {
        const bool branch_taken_0x1ff2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2F4u;
        // 0x1ff2f8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2f4) {
            ctx->pc = 0x1FF304u;
            goto label_1ff304;
        }
    }
    ctx->pc = 0x1FF2FCu;
    // 0x1ff2fc: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1ff2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff300: 0xa242019b  sb          $v0, 0x19B($s2)
    ctx->pc = 0x1ff300u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 411), (uint8_t)GPR_U32(ctx, 2));
label_1ff304:
    // 0x1ff304: 0x2352021  addu        $a0, $s1, $s5
    ctx->pc = 0x1ff304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1ff308: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x1ff308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1ff30c: 0xa642008e  sh          $v0, 0x8E($s2)
    ctx->pc = 0x1ff30cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 142), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ff310: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x1ff310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x1ff314: 0xa644000e  sh          $a0, 0xE($s2)
    ctx->pc = 0x1ff314u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff318: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1ff318u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1ff31c: 0xa644007a  sh          $a0, 0x7A($s2)
    ctx->pc = 0x1ff31cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff320: 0x96020044  lhu         $v0, 0x44($s0)
    ctx->pc = 0x1ff320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1ff324: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1ff324u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ff328: 0x546002a7  bnel        $v1, $zero, . + 4 + (0x2A7 << 2)
    ctx->pc = 0x1FF328u;
    {
        const bool branch_taken_0x1ff328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff328) {
            ctx->pc = 0x1FF32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF328u;
            // 0x1ff32c: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF330u;
    // 0x1ff330: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x1FF330u;
    {
        const bool branch_taken_0x1ff330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF330u;
        // 0x1ff334: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff330) {
            ctx->pc = 0x1FF850u;
            goto label_1ff850;
        }
    }
    ctx->pc = 0x1FF338u;
label_1ff338:
    // 0x1ff338: 0x9251019b  lbu         $s1, 0x19B($s2)
    ctx->pc = 0x1ff338u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 411)));
    // 0x1ff33c: 0x86e302ba  lh          $v1, 0x2BA($s7)
    ctx->pc = 0x1ff33cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 698)));
    // 0x1ff340: 0x262200fb  addiu       $v0, $s1, 0xFB
    ctx->pc = 0x1ff340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 251));
    // 0x1ff344: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ff344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ff348: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1FF348u;
    {
        const bool branch_taken_0x1ff348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF348u;
        // 0x1ff34c: 0x2c490002  sltiu       $t1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff348) {
            ctx->pc = 0x1FF3F0u;
            goto label_1ff3f0;
        }
    }
    ctx->pc = 0x1FF350u;
    // 0x1ff350: 0x92420196  lbu         $v0, 0x196($s2)
    ctx->pc = 0x1ff350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 406)));
    // 0x1ff354: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FF354u;
    {
        const bool branch_taken_0x1ff354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff354) {
            ctx->pc = 0x1FF358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF354u;
            // 0x1ff358: 0x8e5000c4  lw          $s0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF3F4u;
            goto label_1ff3f4;
        }
    }
    ctx->pc = 0x1FF35Cu;
    // 0x1ff35c: 0x8642009c  lh          $v0, 0x9C($s2)
    ctx->pc = 0x1ff35cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1ff360: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1ff360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ff364: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FF364u;
    {
        const bool branch_taken_0x1ff364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff364) {
            ctx->pc = 0x1FF368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF364u;
            // 0x1ff368: 0x8e5000c4  lw          $s0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF3F4u;
            goto label_1ff3f4;
        }
    }
    ctx->pc = 0x1FF36Cu;
    // 0x1ff36c: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1ff36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1ff370: 0x96440096  lhu         $a0, 0x96($s2)
    ctx->pc = 0x1ff370u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x1ff374: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x1ff374u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1ff378: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1ff378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ff37c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1ff37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff380: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF380u;
    {
        const bool branch_taken_0x1ff380 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1FF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF380u;
        // 0x1ff384: 0xa64202b2  sh          $v0, 0x2B2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff380) {
            ctx->pc = 0x1FF390u;
            goto label_1ff390;
        }
    }
    ctx->pc = 0x1FF388u;
    // 0x1ff388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff38c: 0xa64202b2  sh          $v0, 0x2B2($s2)
    ctx->pc = 0x1ff38cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 2));
label_1ff390:
    // 0x1ff390: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF390u;
    {
        const bool branch_taken_0x1ff390 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF390u;
        // 0x1ff394: 0x96420078  lhu         $v0, 0x78($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff390) {
            ctx->pc = 0x1FF3B0u;
            goto label_1ff3b0;
        }
    }
    ctx->pc = 0x1FF398u;
    // 0x1ff398: 0x9643007a  lhu         $v1, 0x7A($s2)
    ctx->pc = 0x1ff398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1ff39c: 0x864402b2  lh          $a0, 0x2B2($s2)
    ctx->pc = 0x1ff39cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 690)));
    // 0x1ff3a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ff3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ff3a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF3A4u;
    {
        const bool branch_taken_0x1ff3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3A4u;
        // 0x1ff3a8: 0x24428000  addiu       $v0, $v0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3a4) {
            ctx->pc = 0x1FF3BCu;
            goto label_1ff3bc;
        }
    }
    ctx->pc = 0x1FF3ACu;
    // 0x1ff3ac: 0x0  nop
    ctx->pc = 0x1ff3acu;
    // NOP
label_1ff3b0:
    // 0x1ff3b0: 0x9643007a  lhu         $v1, 0x7A($s2)
    ctx->pc = 0x1ff3b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1ff3b4: 0x864402b2  lh          $a0, 0x2B2($s2)
    ctx->pc = 0x1ff3b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 690)));
    // 0x1ff3b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ff3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ff3bc:
    // 0x1ff3bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ff3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff3c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1ff3c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ff3c4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1ff3c4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ff3c8: 0x1012  mflo        $v0
    ctx->pc = 0x1ff3c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ff3cc: 0xa64202b4  sh          $v0, 0x2B4($s2)
    ctx->pc = 0x1ff3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 692), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ff3d0: 0x864402b4  lh          $a0, 0x2B4($s2)
    ctx->pc = 0x1ff3d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1ff3d4: 0xc07f8ac  jal         func_1FE2B0
    ctx->pc = 0x1FF3D4u;
    SET_GPR_U32(ctx, 31, 0x1FF3DCu);
    ctx->pc = 0x1FF3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF3D4u;
    // 0x1ff3d8: 0x240509f4  addiu       $a1, $zero, 0x9F4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2B0u, 0x1FF3D4u, 0x1FF3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3DCu;
label_1ff3dc:
    // 0x1ff3dc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1ff3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ff3e0: 0xa64202b4  sh          $v0, 0x2B4($s2)
    ctx->pc = 0x1ff3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 692), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ff3e4: 0x10000277  b           . + 4 + (0x277 << 2)
    ctx->pc = 0x1FF3E4u;
    {
        const bool branch_taken_0x1ff3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3E4u;
        // 0x1ff3e8: 0xa243019b  sb          $v1, 0x19B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3e4) {
            ctx->pc = 0x1FFDC4u;
            goto label_1ffdc4;
        }
    }
    ctx->pc = 0x1FF3ECu;
    // 0x1ff3ec: 0x0  nop
    ctx->pc = 0x1ff3ecu;
    // NOP
label_1ff3f0:
    // 0x1ff3f0: 0x8e5000c4  lw          $s0, 0xC4($s2)
    ctx->pc = 0x1ff3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_1ff3f4:
    // 0x1ff3f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff3f8: 0x96530096  lhu         $s3, 0x96($s2)
    ctx->pc = 0x1ff3f8u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x1ff3fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ff3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff400: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1ff400u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff404: 0x924401f9  lbu         $a0, 0x1F9($s2)
    ctx->pc = 0x1ff404u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 505)));
    // 0x1ff408: 0x96c20044  lhu         $v0, 0x44($s6)
    ctx->pc = 0x1ff408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x1ff40c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1ff40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1ff410: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ff410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ff414: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ff414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff418: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x1ff418u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ff41c: 0x6182a  slt         $v1, $zero, $a2
    ctx->pc = 0x1ff41cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ff420: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF420u;
    {
        const bool branch_taken_0x1ff420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF420u;
        // 0x1ff424: 0xa3300a  movz        $a2, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff420) {
            ctx->pc = 0x1FF43Cu;
            goto label_1ff43c;
        }
    }
    ctx->pc = 0x1FF428u;
    // 0x1ff428: 0x8642009c  lh          $v0, 0x9C($s2)
    ctx->pc = 0x1ff428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1ff42c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ff42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ff430: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x1ff430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ff434: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1ff434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ff438: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x1ff438u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_1ff43c:
    // 0x1ff43c: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x1ff43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1ff440: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x1ff440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1ff444: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1ff444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ff448: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x1ff448u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1ff44c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1ff44cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ff450: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ff450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ff454: 0x1012  mflo        $v0
    ctx->pc = 0x1ff454u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ff458: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x1ff458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff45c: 0x10e40004  beq         $a3, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF45Cu;
    {
        const bool branch_taken_0x1ff45c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF45Cu;
        // 0x1ff460: 0x54403  sra         $t0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff45c) {
            ctx->pc = 0x1FF470u;
            goto label_1ff470;
        }
    }
    ctx->pc = 0x1FF464u;
    // 0x1ff464: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ff464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ff468: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF468u;
    {
        const bool branch_taken_0x1ff468 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ff468) {
            ctx->pc = 0x1FF474u;
            goto label_1ff474;
        }
    }
    ctx->pc = 0x1FF470u;
label_1ff470:
    // 0x1ff470: 0x54443  sra         $t0, $a1, 17
    ctx->pc = 0x1ff470u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 17));
label_1ff474:
    // 0x1ff474: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF474u;
    {
        const bool branch_taken_0x1ff474 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF474u;
        // 0x1ff478: 0x96420078  lhu         $v0, 0x78($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff474) {
            ctx->pc = 0x1FF490u;
            goto label_1ff490;
        }
    }
    ctx->pc = 0x1FF47Cu;
    // 0x1ff47c: 0x9655007a  lhu         $s5, 0x7A($s2)
    ctx->pc = 0x1ff47cu;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1ff480: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1ff480u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1ff484: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF484u;
    {
        const bool branch_taken_0x1ff484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF484u;
        // 0x1ff488: 0x24428000  addiu       $v0, $v0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff484) {
            ctx->pc = 0x1FF498u;
            goto label_1ff498;
        }
    }
    ctx->pc = 0x1FF48Cu;
    // 0x1ff48c: 0x0  nop
    ctx->pc = 0x1ff48cu;
    // NOP
label_1ff490:
    // 0x1ff490: 0x9655007a  lhu         $s5, 0x7A($s2)
    ctx->pc = 0x1ff490u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1ff494: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1ff494u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1ff498:
    // 0x1ff498: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ff498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff49c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1ff49cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ff4a0: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x1ff4a0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ff4a4: 0x1012  mflo        $v0
    ctx->pc = 0x1ff4a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ff4a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ff4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff4ac: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x1ff4acu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ff4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff4b4: 0xc07f8ac  jal         func_1FE2B0
    ctx->pc = 0x1FF4B4u;
    SET_GPR_U32(ctx, 31, 0x1FF4BCu);
    ctx->pc = 0x1FF4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF4B4u;
    // 0x1ff4b8: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2B0u, 0x1FF4B4u, 0x1FF4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4BCu;
label_1ff4bc:
    // 0x1ff4bc: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1ff4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1ff4c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ff4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff4c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ff4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ff4c8: 0x8645008e  lh          $a1, 0x8E($s2)
    ctx->pc = 0x1ff4c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 142)));
    // 0x1ff4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff4d0: 0x24065555  addiu       $a2, $zero, 0x5555
    ctx->pc = 0x1ff4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
    // 0x1ff4d4: 0xc07f8ba  jal         func_1FE2E8
    ctx->pc = 0x1FF4D4u;
    SET_GPR_U32(ctx, 31, 0x1FF4DCu);
    ctx->pc = 0x1FF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF4D4u;
    // 0x1ff4d8: 0x9654008e  lhu         $s4, 0x8E($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 142)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2E8u, 0x1FF4D4u, 0x1FF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4DCu;
label_1ff4dc:
    // 0x1ff4dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ff4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff4e0: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x1ff4e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ff4e4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF4E4u;
    {
        const bool branch_taken_0x1ff4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff4e4) {
            ctx->pc = 0x1FF4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF4E4u;
            // 0x1ff4e8: 0x2141821  addu        $v1, $s0, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF4FCu;
            goto label_1ff4fc;
        }
    }
    ctx->pc = 0x1FF4ECu;
    // 0x1ff4ec: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ff4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ff4f0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1ff4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff4f4: 0xa242019b  sb          $v0, 0x19B($s2)
    ctx->pc = 0x1ff4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 411), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ff4f8: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x1ff4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_1ff4fc:
    // 0x1ff4fc: 0x2152021  addu        $a0, $s0, $s5
    ctx->pc = 0x1ff4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x1ff500: 0xa643008e  sh          $v1, 0x8E($s2)
    ctx->pc = 0x1ff500u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 142), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ff504: 0x131400  sll         $v0, $s3, 16
    ctx->pc = 0x1ff504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x1ff508: 0xa644007a  sh          $a0, 0x7A($s2)
    ctx->pc = 0x1ff508u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff50c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1ff50cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ff510: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x1FF510u;
    {
        const bool branch_taken_0x1ff510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF510u;
        // 0x1ff514: 0x96c30044  lhu         $v1, 0x44($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff510) {
            ctx->pc = 0x1FF840u;
            goto label_1ff840;
        }
    }
    ctx->pc = 0x1FF518u;
label_1ff518:
    // 0x1ff518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff51c: 0x24050222  addiu       $a1, $zero, 0x222
    ctx->pc = 0x1ff51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x1ff520: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1FF520u;
    {
        const bool branch_taken_0x1ff520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF520u;
        // 0x1ff524: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff520) {
            ctx->pc = 0x1FF658u;
            goto label_1ff658;
        }
    }
    ctx->pc = 0x1FF528u;
label_1ff528:
    // 0x1ff528: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff52c: 0x240502d8  addiu       $a1, $zero, 0x2D8
    ctx->pc = 0x1ff52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 728));
    // 0x1ff530: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1FF530u;
    {
        const bool branch_taken_0x1ff530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF530u;
        // 0x1ff534: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff530) {
            ctx->pc = 0x1FF658u;
            goto label_1ff658;
        }
    }
    ctx->pc = 0x1FF538u;
label_1ff538:
    // 0x1ff538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff53c: 0x240504fa  addiu       $a1, $zero, 0x4FA
    ctx->pc = 0x1ff53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1274));
    // 0x1ff540: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1FF540u;
    {
        const bool branch_taken_0x1ff540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF540u;
        // 0x1ff544: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff540) {
            ctx->pc = 0x1FF658u;
            goto label_1ff658;
        }
    }
    ctx->pc = 0x1FF548u;
label_1ff548:
    // 0x1ff548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff54c: 0x240509f4  addiu       $a1, $zero, 0x9F4
    ctx->pc = 0x1ff54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2548));
    // 0x1ff550: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1FF550u;
    {
        const bool branch_taken_0x1ff550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF550u;
        // 0x1ff554: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff550) {
            ctx->pc = 0x1FF658u;
            goto label_1ff658;
        }
    }
    ctx->pc = 0x1FF558u;
label_1ff558:
    // 0x1ff558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff55c: 0x24050222  addiu       $a1, $zero, 0x222
    ctx->pc = 0x1ff55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x1ff560: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1FF560u;
    {
        const bool branch_taken_0x1ff560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF560u;
        // 0x1ff564: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff560) {
            ctx->pc = 0x1FF728u;
            goto label_1ff728;
        }
    }
    ctx->pc = 0x1FF568u;
label_1ff568:
    // 0x1ff568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff56c: 0x240502d8  addiu       $a1, $zero, 0x2D8
    ctx->pc = 0x1ff56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 728));
    // 0x1ff570: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1FF570u;
    {
        const bool branch_taken_0x1ff570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF570u;
        // 0x1ff574: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff570) {
            ctx->pc = 0x1FF728u;
            goto label_1ff728;
        }
    }
    ctx->pc = 0x1FF578u;
label_1ff578:
    // 0x1ff578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff57c: 0x240504fa  addiu       $a1, $zero, 0x4FA
    ctx->pc = 0x1ff57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1274));
    // 0x1ff580: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1FF580u;
    {
        const bool branch_taken_0x1ff580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF580u;
        // 0x1ff584: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff580) {
            ctx->pc = 0x1FF728u;
            goto label_1ff728;
        }
    }
    ctx->pc = 0x1FF588u;
label_1ff588:
    // 0x1ff588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff58c: 0x240509f4  addiu       $a1, $zero, 0x9F4
    ctx->pc = 0x1ff58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2548));
    // 0x1ff590: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1FF590u;
    {
        const bool branch_taken_0x1ff590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF590u;
        // 0x1ff594: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff590) {
            ctx->pc = 0x1FF728u;
            goto label_1ff728;
        }
    }
    ctx->pc = 0x1FF598u;
label_1ff598:
    // 0x1ff598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff59c: 0xc07f918  jal         func_1FE460
    ctx->pc = 0x1FF59Cu;
    SET_GPR_U32(ctx, 31, 0x1FF5A4u);
    ctx->pc = 0x1FF5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF59Cu;
    // 0x1ff5a0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE460u, 0x1FF59Cu, 0x1FF5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5A4u;
label_1ff5a4:
    // 0x1ff5a4: 0x54400208  bnel        $v0, $zero, . + 4 + (0x208 << 2)
    ctx->pc = 0x1FF5A4u;
    {
        const bool branch_taken_0x1ff5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5a4) {
            ctx->pc = 0x1FF5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF5A4u;
            // 0x1ff5a8: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF5ACu;
    // 0x1ff5ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff5b0: 0x24050222  addiu       $a1, $zero, 0x222
    ctx->pc = 0x1ff5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x1ff5b4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1FF5B4u;
    {
        const bool branch_taken_0x1ff5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5B4u;
        // 0x1ff5b8: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5b4) {
            ctx->pc = 0x1FF658u;
            goto label_1ff658;
        }
    }
    ctx->pc = 0x1FF5BCu;
    // 0x1ff5bc: 0x0  nop
    ctx->pc = 0x1ff5bcu;
    // NOP
label_1ff5c0:
    // 0x1ff5c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff5c4: 0xc07f918  jal         func_1FE460
    ctx->pc = 0x1FF5C4u;
    SET_GPR_U32(ctx, 31, 0x1FF5CCu);
    ctx->pc = 0x1FF5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF5C4u;
    // 0x1ff5c8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE460u, 0x1FF5C4u, 0x1FF5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5CCu;
label_1ff5cc:
    // 0x1ff5cc: 0x544001fe  bnel        $v0, $zero, . + 4 + (0x1FE << 2)
    ctx->pc = 0x1FF5CCu;
    {
        const bool branch_taken_0x1ff5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5cc) {
            ctx->pc = 0x1FF5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF5CCu;
            // 0x1ff5d0: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF5D4u;
    // 0x1ff5d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff5d8: 0x240502d8  addiu       $a1, $zero, 0x2D8
    ctx->pc = 0x1ff5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 728));
    // 0x1ff5dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1FF5DCu;
    {
        const bool branch_taken_0x1ff5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5DCu;
        // 0x1ff5e0: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5dc) {
            ctx->pc = 0x1FF658u;
            goto label_1ff658;
        }
    }
    ctx->pc = 0x1FF5E4u;
    // 0x1ff5e4: 0x0  nop
    ctx->pc = 0x1ff5e4u;
    // NOP
label_1ff5e8:
    // 0x1ff5e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff5ec: 0xc07f918  jal         func_1FE460
    ctx->pc = 0x1FF5ECu;
    SET_GPR_U32(ctx, 31, 0x1FF5F4u);
    ctx->pc = 0x1FF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF5ECu;
    // 0x1ff5f0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE460u, 0x1FF5ECu, 0x1FF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5F4u;
label_1ff5f4:
    // 0x1ff5f4: 0x544001f4  bnel        $v0, $zero, . + 4 + (0x1F4 << 2)
    ctx->pc = 0x1FF5F4u;
    {
        const bool branch_taken_0x1ff5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5f4) {
            ctx->pc = 0x1FF5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF5F4u;
            // 0x1ff5f8: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF5FCu;
    // 0x1ff5fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff600: 0x240504fa  addiu       $a1, $zero, 0x4FA
    ctx->pc = 0x1ff600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1274));
    // 0x1ff604: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF604u;
    {
        const bool branch_taken_0x1ff604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF604u;
        // 0x1ff608: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff604) {
            ctx->pc = 0x1FF658u;
            goto label_1ff658;
        }
    }
    ctx->pc = 0x1FF60Cu;
    // 0x1ff60c: 0x0  nop
    ctx->pc = 0x1ff60cu;
    // NOP
label_1ff610:
    // 0x1ff610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff614: 0xc07f918  jal         func_1FE460
    ctx->pc = 0x1FF614u;
    SET_GPR_U32(ctx, 31, 0x1FF61Cu);
    ctx->pc = 0x1FF618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF614u;
    // 0x1ff618: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE460u, 0x1FF614u, 0x1FF61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF61Cu;
label_1ff61c:
    // 0x1ff61c: 0x544001ea  bnel        $v0, $zero, . + 4 + (0x1EA << 2)
    ctx->pc = 0x1FF61Cu;
    {
        const bool branch_taken_0x1ff61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff61c) {
            ctx->pc = 0x1FF620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF61Cu;
            // 0x1ff620: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF624u;
    // 0x1ff624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff628: 0x240509f4  addiu       $a1, $zero, 0x9F4
    ctx->pc = 0x1ff628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2548));
    // 0x1ff62c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FF62Cu;
    {
        const bool branch_taken_0x1ff62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF62Cu;
        // 0x1ff630: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff62c) {
            ctx->pc = 0x1FF658u;
            goto label_1ff658;
        }
    }
    ctx->pc = 0x1FF634u;
    // 0x1ff634: 0x0  nop
    ctx->pc = 0x1ff634u;
    // NOP
label_1ff638:
    // 0x1ff638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff63c: 0xc07f918  jal         func_1FE460
    ctx->pc = 0x1FF63Cu;
    SET_GPR_U32(ctx, 31, 0x1FF644u);
    ctx->pc = 0x1FF640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF63Cu;
    // 0x1ff640: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE460u, 0x1FF63Cu, 0x1FF644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF644u;
label_1ff644:
    // 0x1ff644: 0x544001e0  bnel        $v0, $zero, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x1FF644u;
    {
        const bool branch_taken_0x1ff644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff644) {
            ctx->pc = 0x1FF648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF644u;
            // 0x1ff648: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF64Cu;
label_1ff64c:
    // 0x1ff64c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff650: 0x2405105a  addiu       $a1, $zero, 0x105A
    ctx->pc = 0x1ff650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4186));
    // 0x1ff654: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x1ff654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_1ff658:
    // 0x1ff658: 0xc07f942  jal         func_1FE508
    ctx->pc = 0x1FF658u;
    SET_GPR_U32(ctx, 31, 0x1FF660u);
    ctx->pc = 0x1FF65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF658u;
    // 0x1ff65c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE508u, 0x1FF658u, 0x1FF660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF660u;
label_1ff660:
    // 0x1ff660: 0x100001d9  b           . + 4 + (0x1D9 << 2)
    ctx->pc = 0x1FF660u;
    {
        const bool branch_taken_0x1ff660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF660u;
        // 0x1ff664: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff660) {
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF668u;
label_1ff668:
    // 0x1ff668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff66c: 0xc07f918  jal         func_1FE460
    ctx->pc = 0x1FF66Cu;
    SET_GPR_U32(ctx, 31, 0x1FF674u);
    ctx->pc = 0x1FF670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF66Cu;
    // 0x1ff670: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE460u, 0x1FF66Cu, 0x1FF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF674u;
label_1ff674:
    // 0x1ff674: 0x544001d4  bnel        $v0, $zero, . + 4 + (0x1D4 << 2)
    ctx->pc = 0x1FF674u;
    {
        const bool branch_taken_0x1ff674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff674) {
            ctx->pc = 0x1FF678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF674u;
            // 0x1ff678: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF67Cu;
    // 0x1ff67c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff680: 0x24050222  addiu       $a1, $zero, 0x222
    ctx->pc = 0x1ff680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x1ff684: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1FF684u;
    {
        const bool branch_taken_0x1ff684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF684u;
        // 0x1ff688: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff684) {
            ctx->pc = 0x1FF728u;
            goto label_1ff728;
        }
    }
    ctx->pc = 0x1FF68Cu;
    // 0x1ff68c: 0x0  nop
    ctx->pc = 0x1ff68cu;
    // NOP
label_1ff690:
    // 0x1ff690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff694: 0xc07f918  jal         func_1FE460
    ctx->pc = 0x1FF694u;
    SET_GPR_U32(ctx, 31, 0x1FF69Cu);
    ctx->pc = 0x1FF698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF694u;
    // 0x1ff698: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE460u, 0x1FF694u, 0x1FF69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF69Cu;
label_1ff69c:
    // 0x1ff69c: 0x544001ca  bnel        $v0, $zero, . + 4 + (0x1CA << 2)
    ctx->pc = 0x1FF69Cu;
    {
        const bool branch_taken_0x1ff69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff69c) {
            ctx->pc = 0x1FF6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF69Cu;
            // 0x1ff6a0: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF6A4u;
    // 0x1ff6a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6a8: 0x240502d8  addiu       $a1, $zero, 0x2D8
    ctx->pc = 0x1ff6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 728));
    // 0x1ff6ac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1FF6ACu;
    {
        const bool branch_taken_0x1ff6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6ACu;
        // 0x1ff6b0: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6ac) {
            ctx->pc = 0x1FF728u;
            goto label_1ff728;
        }
    }
    ctx->pc = 0x1FF6B4u;
    // 0x1ff6b4: 0x0  nop
    ctx->pc = 0x1ff6b4u;
    // NOP
label_1ff6b8:
    // 0x1ff6b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6bc: 0xc07f918  jal         func_1FE460
    ctx->pc = 0x1FF6BCu;
    SET_GPR_U32(ctx, 31, 0x1FF6C4u);
    ctx->pc = 0x1FF6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF6BCu;
    // 0x1ff6c0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE460u, 0x1FF6BCu, 0x1FF6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6C4u;
label_1ff6c4:
    // 0x1ff6c4: 0x544001c0  bnel        $v0, $zero, . + 4 + (0x1C0 << 2)
    ctx->pc = 0x1FF6C4u;
    {
        const bool branch_taken_0x1ff6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff6c4) {
            ctx->pc = 0x1FF6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF6C4u;
            // 0x1ff6c8: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF6CCu;
    // 0x1ff6cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6d0: 0x240504fa  addiu       $a1, $zero, 0x4FA
    ctx->pc = 0x1ff6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1274));
    // 0x1ff6d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF6D4u;
    {
        const bool branch_taken_0x1ff6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6D4u;
        // 0x1ff6d8: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6d4) {
            ctx->pc = 0x1FF728u;
            goto label_1ff728;
        }
    }
    ctx->pc = 0x1FF6DCu;
    // 0x1ff6dc: 0x0  nop
    ctx->pc = 0x1ff6dcu;
    // NOP
label_1ff6e0:
    // 0x1ff6e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6e4: 0xc07f918  jal         func_1FE460
    ctx->pc = 0x1FF6E4u;
    SET_GPR_U32(ctx, 31, 0x1FF6ECu);
    ctx->pc = 0x1FF6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF6E4u;
    // 0x1ff6e8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE460u, 0x1FF6E4u, 0x1FF6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6ECu;
label_1ff6ec:
    // 0x1ff6ec: 0x544001b6  bnel        $v0, $zero, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x1FF6ECu;
    {
        const bool branch_taken_0x1ff6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff6ec) {
            ctx->pc = 0x1FF6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF6ECu;
            // 0x1ff6f0: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF6F4u;
    // 0x1ff6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6f8: 0x240509f4  addiu       $a1, $zero, 0x9F4
    ctx->pc = 0x1ff6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2548));
    // 0x1ff6fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FF6FCu;
    {
        const bool branch_taken_0x1ff6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6FCu;
        // 0x1ff700: 0x24065555  addiu       $a2, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6fc) {
            ctx->pc = 0x1FF728u;
            goto label_1ff728;
        }
    }
    ctx->pc = 0x1FF704u;
    // 0x1ff704: 0x0  nop
    ctx->pc = 0x1ff704u;
    // NOP
label_1ff708:
    // 0x1ff708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff70c: 0xc07f918  jal         func_1FE460
    ctx->pc = 0x1FF70Cu;
    SET_GPR_U32(ctx, 31, 0x1FF714u);
    ctx->pc = 0x1FF710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF70Cu;
    // 0x1ff710: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE460u, 0x1FF70Cu, 0x1FF714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF714u;
label_1ff714:
    // 0x1ff714: 0x544001ac  bnel        $v0, $zero, . + 4 + (0x1AC << 2)
    ctx->pc = 0x1FF714u;
    {
        const bool branch_taken_0x1ff714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff714) {
            ctx->pc = 0x1FF718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF714u;
            // 0x1ff718: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF71Cu;
label_1ff71c:
    // 0x1ff71c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff720: 0x2405105a  addiu       $a1, $zero, 0x105A
    ctx->pc = 0x1ff720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4186));
    // 0x1ff724: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x1ff724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_1ff728:
    // 0x1ff728: 0xc07f942  jal         func_1FE508
    ctx->pc = 0x1FF728u;
    SET_GPR_U32(ctx, 31, 0x1FF730u);
    ctx->pc = 0x1FF72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF728u;
    // 0x1ff72c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE508u, 0x1FF728u, 0x1FF730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF730u;
label_1ff730:
    // 0x1ff730: 0x100001a5  b           . + 4 + (0x1A5 << 2)
    ctx->pc = 0x1FF730u;
    {
        const bool branch_taken_0x1ff730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF730u;
        // 0x1ff734: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff730) {
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF738u;
label_1ff738:
    // 0x1ff738: 0x864402b2  lh          $a0, 0x2B2($s2)
    ctx->pc = 0x1ff738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 690)));
    // 0x1ff73c: 0x548001a2  bnel        $a0, $zero, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x1FF73Cu;
    {
        const bool branch_taken_0x1ff73c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff73c) {
            ctx->pc = 0x1FF740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF73Cu;
            // 0x1ff740: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF744u;
    // 0x1ff744: 0x86e202ba  lh          $v0, 0x2BA($s7)
    ctx->pc = 0x1ff744u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 698)));
    // 0x1ff748: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF748u;
    {
        const bool branch_taken_0x1ff748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff748) {
            ctx->pc = 0x1FF74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF748u;
            // 0x1ff74c: 0x8e5000c4  lw          $s0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF760u;
            goto label_1ff760;
        }
    }
    ctx->pc = 0x1FF750u;
    // 0x1ff750: 0x92420196  lbu         $v0, 0x196($s2)
    ctx->pc = 0x1ff750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 406)));
    // 0x1ff754: 0x5440019c  bnel        $v0, $zero, . + 4 + (0x19C << 2)
    ctx->pc = 0x1FF754u;
    {
        const bool branch_taken_0x1ff754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff754) {
            ctx->pc = 0x1FF758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF754u;
            // 0x1ff758: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF75Cu;
    // 0x1ff75c: 0x8e5000c4  lw          $s0, 0xC4($s2)
    ctx->pc = 0x1ff75cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_1ff760:
    // 0x1ff760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff764: 0x96530096  lhu         $s3, 0x96($s2)
    ctx->pc = 0x1ff764u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x1ff768: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ff768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff76c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1ff76cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff770: 0x96430078  lhu         $v1, 0x78($s2)
    ctx->pc = 0x1ff770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1ff774: 0x96a20044  lhu         $v0, 0x44($s5)
    ctx->pc = 0x1ff774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1ff778: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1ff778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff77c: 0x9653007a  lhu         $s3, 0x7A($s2)
    ctx->pc = 0x1ff77cu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1ff780: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x1ff780u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1ff784: 0x924601f9  lbu         $a2, 0x1F9($s2)
    ctx->pc = 0x1ff784u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 505)));
    // 0x1ff788: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ff788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ff78c: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x1ff78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1ff790: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ff790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff794: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ff794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ff798: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1ff798u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ff79c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1ff79cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1ff7a0: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x1ff7a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ff7a4: 0x44280b  movn        $a1, $v0, $a0
    ctx->pc = 0x1ff7a4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1ff7a8: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1ff7a8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ff7ac: 0x1812  mflo        $v1
    ctx->pc = 0x1ff7acu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1ff7b0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ff7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ff7b4: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF7B4u;
    {
        const bool branch_taken_0x1ff7b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7B4u;
        // 0x1ff7b8: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff7b4) {
            ctx->pc = 0x1FF7D0u;
            goto label_1ff7d0;
        }
    }
    ctx->pc = 0x1FF7BCu;
    // 0x1ff7bc: 0x8642009c  lh          $v0, 0x9C($s2)
    ctx->pc = 0x1ff7bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1ff7c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ff7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff7c4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1ff7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ff7c8: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1ff7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ff7cc: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x1ff7ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_1ff7d0:
    // 0x1ff7d0: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x1ff7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1ff7d4: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x1ff7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1ff7d8: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x1ff7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1ff7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff7e0: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1ff7e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ff7e4: 0x2812  mflo        $a1
    ctx->pc = 0x1ff7e4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1ff7e8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1ff7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1ff7ec: 0xc07f8ac  jal         func_1FE2B0
    ctx->pc = 0x1FF7ECu;
    SET_GPR_U32(ctx, 31, 0x1FF7F4u);
    ctx->pc = 0x1FF7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF7ECu;
    // 0x1ff7f0: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2B0u, 0x1FF7ECu, 0x1FF7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF7F4u;
label_1ff7f4:
    // 0x1ff7f4: 0x9651008e  lhu         $s1, 0x8E($s2)
    ctx->pc = 0x1ff7f4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 142)));
    // 0x1ff7f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ff7f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff7fc: 0x8645008e  lh          $a1, 0x8E($s2)
    ctx->pc = 0x1ff7fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 142)));
    // 0x1ff800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff804: 0xc07f8ba  jal         func_1FE2E8
    ctx->pc = 0x1FF804u;
    SET_GPR_U32(ctx, 31, 0x1FF80Cu);
    ctx->pc = 0x1FF808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF804u;
    // 0x1ff808: 0x24060e38  addiu       $a2, $zero, 0xE38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2E8u, 0x1FF804u, 0x1FF80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF80Cu;
label_1ff80c:
    // 0x1ff80c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ff80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff810: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x1ff810u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ff814: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF814u;
    {
        const bool branch_taken_0x1ff814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF814u;
        // 0x1ff818: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff814) {
            ctx->pc = 0x1FF824u;
            goto label_1ff824;
        }
    }
    ctx->pc = 0x1FF81Cu;
    // 0x1ff81c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1ff81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff820: 0xa242019b  sb          $v0, 0x19B($s2)
    ctx->pc = 0x1ff820u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 411), (uint8_t)GPR_U32(ctx, 2));
label_1ff824:
    // 0x1ff824: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1ff824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1ff828: 0x2132021  addu        $a0, $s0, $s3
    ctx->pc = 0x1ff828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1ff82c: 0xa643008e  sh          $v1, 0x8E($s2)
    ctx->pc = 0x1ff82cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 142), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ff830: 0x141400  sll         $v0, $s4, 16
    ctx->pc = 0x1ff830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x1ff834: 0xa644007a  sh          $a0, 0x7A($s2)
    ctx->pc = 0x1ff834u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff838: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1ff838u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ff83c: 0x96a30044  lhu         $v1, 0x44($s5)
    ctx->pc = 0x1ff83cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 68)));
label_1ff840:
    // 0x1ff840: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ff840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ff844: 0x54400160  bnel        $v0, $zero, . + 4 + (0x160 << 2)
    ctx->pc = 0x1FF844u;
    {
        const bool branch_taken_0x1ff844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff844) {
            ctx->pc = 0x1FF848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF844u;
            // 0x1ff848: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF84Cu;
    // 0x1ff84c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ff84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ff850:
    // 0x1ff850: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x1FF850u;
    {
        const bool branch_taken_0x1ff850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF850u;
        // 0x1ff854: 0xa242019b  sb          $v0, 0x19B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 411), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff850) {
            ctx->pc = 0x1FFDC4u;
            goto label_1ffdc4;
        }
    }
    ctx->pc = 0x1FF858u;
label_1ff858:
    // 0x1ff858: 0x8642014e  lh          $v0, 0x14E($s2)
    ctx->pc = 0x1ff858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 334)));
    // 0x1ff85c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FF85Cu;
    {
        const bool branch_taken_0x1ff85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff85c) {
            ctx->pc = 0x1FF860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF85Cu;
            // 0x1ff860: 0x96530096  lhu         $s3, 0x96($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF8A0u;
            goto label_1ff8a0;
        }
    }
    ctx->pc = 0x1FF864u;
    // 0x1ff864: 0x8e5000c4  lw          $s0, 0xC4($s2)
    ctx->pc = 0x1ff864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1ff868: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x1ff868u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x1ff86c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FF86Cu;
    {
        const bool branch_taken_0x1ff86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF86Cu;
        // 0x1ff870: 0x96530096  lhu         $s3, 0x96($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff86c) {
            ctx->pc = 0x1FF8A4u;
            goto label_1ff8a4;
        }
    }
    ctx->pc = 0x1FF874u;
    // 0x1ff874: 0x924201f9  lbu         $v0, 0x1F9($s2)
    ctx->pc = 0x1ff874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 505)));
    // 0x1ff878: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FF878u;
    {
        const bool branch_taken_0x1ff878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff878) {
            ctx->pc = 0x1FF8A4u;
            goto label_1ff8a4;
        }
    }
    ctx->pc = 0x1FF880u;
    // 0x1ff880: 0x86420096  lh          $v0, 0x96($s2)
    ctx->pc = 0x1ff880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x1ff884: 0x96030046  lhu         $v1, 0x46($s0)
    ctx->pc = 0x1ff884u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x1ff888: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ff888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ff88c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF88Cu;
    {
        const bool branch_taken_0x1ff88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF88Cu;
        // 0x1ff890: 0x131c00  sll         $v1, $s3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff88c) {
            ctx->pc = 0x1FF8A8u;
            goto label_1ff8a8;
        }
    }
    ctx->pc = 0x1FF894u;
    // 0x1ff894: 0xa64002b2  sh          $zero, 0x2B2($s2)
    ctx->pc = 0x1ff894u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ff898: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x1FF898u;
    {
        const bool branch_taken_0x1ff898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF898u;
        // 0x1ff89c: 0xa64002b4  sh          $zero, 0x2B4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 692), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff898) {
            ctx->pc = 0x1FFDC4u;
            goto label_1ffdc4;
        }
    }
    ctx->pc = 0x1FF8A0u;
label_1ff8a0:
    // 0x1ff8a0: 0x8e5000c4  lw          $s0, 0xC4($s2)
    ctx->pc = 0x1ff8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_1ff8a4:
    // 0x1ff8a4: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x1ff8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_1ff8a8:
    // 0x1ff8a8: 0x96050044  lhu         $a1, 0x44($s0)
    ctx->pc = 0x1ff8a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1ff8ac: 0x32403  sra         $a0, $v1, 16
    ctx->pc = 0x1ff8acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1ff8b0: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x1ff8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ff8b4: 0x50400144  beql        $v0, $zero, . + 4 + (0x144 << 2)
    ctx->pc = 0x1FF8B4u;
    {
        const bool branch_taken_0x1ff8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff8b4) {
            ctx->pc = 0x1FF8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF8B4u;
            // 0x1ff8b8: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF8BCu;
    // 0x1ff8bc: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x1ff8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ff8c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ff8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ff8c4: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1ff8c4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ff8c8: 0x1810  mfhi        $v1
    ctx->pc = 0x1ff8c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ff8cc: 0x5460013e  bnel        $v1, $zero, . + 4 + (0x13E << 2)
    ctx->pc = 0x1FF8CCu;
    {
        const bool branch_taken_0x1ff8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff8cc) {
            ctx->pc = 0x1FF8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF8CCu;
            // 0x1ff8d0: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF8D4u;
    // 0x1ff8d4: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x1ff8d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1ff8d8: 0x28425556  slti        $v0, $v0, 0x5556
    ctx->pc = 0x1ff8d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21846) ? 1 : 0);
    // 0x1ff8dc: 0x5040013a  beql        $v0, $zero, . + 4 + (0x13A << 2)
    ctx->pc = 0x1FF8DCu;
    {
        const bool branch_taken_0x1ff8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff8dc) {
            ctx->pc = 0x1FF8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF8DCu;
            // 0x1ff8e0: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF8E4u;
    // 0x1ff8e4: 0x96030024  lhu         $v1, 0x24($s0)
    ctx->pc = 0x1ff8e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ff8e8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x1ff8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff8ec: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x1ff8ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ff8f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF8F0u;
    {
        const bool branch_taken_0x1ff8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff8f0) {
            ctx->pc = 0x1FF8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF8F0u;
            // 0x1ff8f4: 0xa64502b2  sh          $a1, 0x2B2($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF900u;
            goto label_1ff900;
        }
    }
    ctx->pc = 0x1FF8F8u;
    // 0x1ff8f8: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x1ff8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1ff8fc: 0xa64202b2  sh          $v0, 0x2B2($s2)
    ctx->pc = 0x1ff8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 2));
label_1ff900:
    // 0x1ff900: 0x864402b2  lh          $a0, 0x2B2($s2)
    ctx->pc = 0x1ff900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 690)));
    // 0x1ff904: 0x4830004  bgezl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF904u;
    {
        const bool branch_taken_0x1ff904 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1ff904) {
            ctx->pc = 0x1FF908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF904u;
            // 0x1ff908: 0x9643007a  lhu         $v1, 0x7A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF918u;
            goto label_1ff918;
        }
    }
    ctx->pc = 0x1FF90Cu;
    // 0x1ff90c: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x1FF90Cu;
    {
        const bool branch_taken_0x1ff90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF90Cu;
        // 0x1ff910: 0xa64002b2  sh          $zero, 0x2B2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff90c) {
            ctx->pc = 0x1FFDC4u;
            goto label_1ffdc4;
        }
    }
    ctx->pc = 0x1FF914u;
    // 0x1ff914: 0x0  nop
    ctx->pc = 0x1ff914u;
    // NOP
label_1ff918:
    // 0x1ff918: 0x24050222  addiu       $a1, $zero, 0x222
    ctx->pc = 0x1ff918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x1ff91c: 0x9642008a  lhu         $v0, 0x8A($s2)
    ctx->pc = 0x1ff91cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
    // 0x1ff920: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ff920u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ff924: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ff924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff928: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1ff928u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ff92c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1ff92cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ff930: 0x1012  mflo        $v0
    ctx->pc = 0x1ff930u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ff934: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1ff934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ff938: 0xa64202b4  sh          $v0, 0x2B4($s2)
    ctx->pc = 0x1ff938u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 692), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ff93c: 0xc07f8ac  jal         func_1FE2B0
    ctx->pc = 0x1FF93Cu;
    SET_GPR_U32(ctx, 31, 0x1FF944u);
    ctx->pc = 0x1FF940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF93Cu;
    // 0x1ff940: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2B0u, 0x1FF93Cu, 0x1FF944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF944u;
label_1ff944:
    // 0x1ff944: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x1FF944u;
    {
        const bool branch_taken_0x1ff944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF944u;
        // 0x1ff948: 0xa64202b4  sh          $v0, 0x2B4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 692), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff944) {
            ctx->pc = 0x1FFDC4u;
            goto label_1ffdc4;
        }
    }
    ctx->pc = 0x1FF94Cu;
    // 0x1ff94c: 0x0  nop
    ctx->pc = 0x1ff94cu;
    // NOP
label_1ff950:
    // 0x1ff950: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1ff950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1ff954: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x1ff954u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1ff958: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF958u;
    {
        const bool branch_taken_0x1ff958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff958) {
            ctx->pc = 0x1FF95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF958u;
            // 0x1ff95c: 0x94630024  lhu         $v1, 0x24($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF964u;
            goto label_1ff964;
        }
    }
    ctx->pc = 0x1FF960u;
    // 0x1ff960: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ff960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff964:
    // 0x1ff964: 0x86460096  lh          $a2, 0x96($s2)
    ctx->pc = 0x1ff964u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x1ff968: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x1ff968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ff96c: 0x54400116  bnel        $v0, $zero, . + 4 + (0x116 << 2)
    ctx->pc = 0x1FF96Cu;
    {
        const bool branch_taken_0x1ff96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff96c) {
            ctx->pc = 0x1FF970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF96Cu;
            // 0x1ff970: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF974u;
    // 0x1ff974: 0x9650007a  lhu         $s0, 0x7A($s2)
    ctx->pc = 0x1ff974u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1ff978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff97c: 0x9644008a  lhu         $a0, 0x8A($s2)
    ctx->pc = 0x1ff97cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
    // 0x1ff980: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x1ff980u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1ff984: 0x2405038e  addiu       $a1, $zero, 0x38E
    ctx->pc = 0x1ff984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 910));
    // 0x1ff988: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x1ff988u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1ff98c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ff98cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ff990: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1ff990u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1ff994: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x1ff994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ff998: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FF998u;
    {
        const bool branch_taken_0x1ff998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF998u;
        // 0x1ff99c: 0x7083001a  div1        $zero, $a0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3); int32_t dividend = GPR_S32(ctx, 4); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff998) {
            ctx->pc = 0x1FF9DCu;
            goto label_1ff9dc;
        }
    }
    ctx->pc = 0x1FF9A0u;
label_1ff9a0:
    // 0x1ff9a0: 0x8646009c  lh          $a2, 0x9C($s2)
    ctx->pc = 0x1ff9a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1ff9a4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1ff9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ff9a8: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x1ff9a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ff9ac: 0xe2300a  movz        $a2, $a3, $v0
    ctx->pc = 0x1ff9acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x1ff9b0: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x1ff9b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ff9b4: 0x54600104  bnel        $v1, $zero, . + 4 + (0x104 << 2)
    ctx->pc = 0x1FF9B4u;
    {
        const bool branch_taken_0x1ff9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9b4) {
            ctx->pc = 0x1FF9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF9B4u;
            // 0x1ff9b8: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FF9BCu;
    // 0x1ff9bc: 0x9650007a  lhu         $s0, 0x7A($s2)
    ctx->pc = 0x1ff9bcu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1ff9c0: 0x2405071c  addiu       $a1, $zero, 0x71C
    ctx->pc = 0x1ff9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x1ff9c4: 0x9644008a  lhu         $a0, 0x8A($s2)
    ctx->pc = 0x1ff9c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
    // 0x1ff9c8: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x1ff9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1ff9cc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ff9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ff9d0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1ff9d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1ff9d4: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x1ff9d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ff9d8: 0x7087001a  div1        $zero, $a0, $a3
    ctx->pc = 0x1ff9d8u;
    { int32_t divisor = GPR_S32(ctx, 7); int32_t dividend = GPR_S32(ctx, 4); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_1ff9dc:
    // 0x1ff9dc: 0x70002012  mflo1       $a0
    ctx->pc = 0x1ff9dcu;
    SET_GPR_U64(ctx, 4, ctx->lo1);
    // 0x1ff9e0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ff9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ff9e4: 0xc07f8ac  jal         func_1FE2B0
    ctx->pc = 0x1FF9E4u;
    SET_GPR_U32(ctx, 31, 0x1FF9ECu);
    ctx->pc = 0x1FF9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF9E4u;
    // 0x1ff9e8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2B0u, 0x1FF9E4u, 0x1FF9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF9ECu;
label_1ff9ec:
    // 0x1ff9ec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ff9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ff9f0: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x1FF9F0u;
    {
        const bool branch_taken_0x1ff9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9F0u;
        // 0x1ff9f4: 0xa650007a  sh          $s0, 0x7A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff9f0) {
            ctx->pc = 0x1FFDC4u;
            goto label_1ffdc4;
        }
    }
    ctx->pc = 0x1FF9F8u;
label_1ff9f8:
    // 0x1ff9f8: 0xc7819724  lwc1        $f1, -0x68DC($gp)
    ctx->pc = 0x1ff9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff9fc: 0x3c014496  lui         $at, 0x4496
    ctx->pc = 0x1ff9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17558 << 16));
    // 0x1ffa00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ffa00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ffa04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ffa04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ffa08: 0x450300ef  bc1tl       . + 4 + (0xEF << 2)
    ctx->pc = 0x1FFA08u;
    {
        const bool branch_taken_0x1ffa08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ffa08) {
            ctx->pc = 0x1FFA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFA08u;
            // 0x1ffa0c: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FFA10u;
    // 0x1ffa10: 0xc6400750  lwc1        $f0, 0x750($s2)
    ctx->pc = 0x1ffa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffa14: 0xc6410758  lwc1        $f1, 0x758($s2)
    ctx->pc = 0x1ffa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ffa18: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ffa18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1ffa1c: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1ffa1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ffa20: 0x8e4300ec  lw          $v1, 0xEC($s2)
    ctx->pc = 0x1ffa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1ffa24: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ffa24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ffa28: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ffa28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ffa2c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1ffa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ffa30: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1ffa30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ffa34: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1ffa34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ffa38: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1ffa38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ffa3c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1ffa3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ffa40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ffa40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ffa44: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x1FFA44u;
    SET_GPR_U32(ctx, 31, 0x1FFA4Cu);
    ctx->pc = 0x1FFA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA44u;
    // 0x1ffa48: 0x46806b60  cvt.s.w     $f13, $f13 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x1FFA44u, 0x1FFA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA4Cu;
label_1ffa4c:
    // 0x1ffa4c: 0xc78182b8  lwc1        $f1, -0x7D48($gp)
    ctx->pc = 0x1ffa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ffa50: 0x9650000e  lhu         $s0, 0xE($s2)
    ctx->pc = 0x1ffa50u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffa54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ffa54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ffa58: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ffa58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ffa5c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1ffa5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ffa60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ffa60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ffa64: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1ffa64u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ffa68: 0x2051823  subu        $v1, $s0, $a1
    ctx->pc = 0x1ffa68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1ffa6c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ffa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ffa70: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1ffa70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1ffa74: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FFA74u;
    {
        const bool branch_taken_0x1ffa74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA74u;
        // 0x1ffa78: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa74) {
            ctx->pc = 0x1FFA90u;
            goto label_1ffa90;
        }
    }
    ctx->pc = 0x1FFA7Cu;
    // 0x1ffa7c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ffa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ffa80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ffa80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ffa84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ffa84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ffa88: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x1ffa88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ffa8c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1ffa8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1ffa90:
    // 0x1ffa90: 0x2c424000  sltiu       $v0, $v0, 0x4000
    ctx->pc = 0x1ffa90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1ffa94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFA94u;
    {
        const bool branch_taken_0x1ffa94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA94u;
        // 0x1ffa98: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa94) {
            ctx->pc = 0x1FFAA8u;
            goto label_1ffaa8;
        }
    }
    ctx->pc = 0x1FFA9Cu;
    // 0x1ffa9c: 0x24a28000  addiu       $v0, $a1, -0x8000
    ctx->pc = 0x1ffa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1ffaa0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ffaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ffaa4: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x1ffaa4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_1ffaa8:
    // 0x1ffaa8: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x1ffaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1ffaac: 0x86460096  lh          $a2, 0x96($s2)
    ctx->pc = 0x1ffaacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x1ffab0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ffab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ffab4: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1ffab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1ffab8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1ffab8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1ffabc: 0x240505b0  addiu       $a1, $zero, 0x5B0
    ctx->pc = 0x1ffabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1456));
    // 0x1ffac0: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x1ffac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ffac4: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x1ffac4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1ffac8: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1ffac8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ffacc: 0x2012  mflo        $a0
    ctx->pc = 0x1ffaccu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1ffad0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ffad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ffad4: 0xc07f8ac  jal         func_1FE2B0
    ctx->pc = 0x1FFAD4u;
    SET_GPR_U32(ctx, 31, 0x1FFADCu);
    ctx->pc = 0x1FFAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAD4u;
    // 0x1ffad8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2B0u, 0x1FFAD4u, 0x1FFADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFADCu;
label_1ffadc:
    // 0x1ffadc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ffadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffae0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ffae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ffae4: 0xa24301b8  sb          $v1, 0x1B8($s2)
    ctx->pc = 0x1ffae4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 440), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffae8: 0xa642007a  sh          $v0, 0x7A($s2)
    ctx->pc = 0x1ffae8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ffaec: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1FFAECu;
    {
        const bool branch_taken_0x1ffaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAECu;
        // 0x1ffaf0: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffaec) {
            ctx->pc = 0x1FFDC4u;
            goto label_1ffdc4;
        }
    }
    ctx->pc = 0x1FFAF4u;
    // 0x1ffaf4: 0x0  nop
    ctx->pc = 0x1ffaf4u;
    // NOP
label_1ffaf8:
    // 0x1ffaf8: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1ffaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1ffafc: 0x86500096  lh          $s0, 0x96($s2)
    ctx->pc = 0x1ffafcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x1ffb00: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x1ffb00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1ffb04: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1ffb04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ffb08: 0x544000af  bnel        $v0, $zero, . + 4 + (0xAF << 2)
    ctx->pc = 0x1FFB08u;
    {
        const bool branch_taken_0x1ffb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffb08) {
            ctx->pc = 0x1FFB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFB08u;
            // 0x1ffb0c: 0x8643015c  lh          $v1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FFB10u;
    // 0x1ffb10: 0xc64c0068  lwc1        $f12, 0x68($s2)
    ctx->pc = 0x1ffb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ffb14: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x1FFB14u;
    SET_GPR_U32(ctx, 31, 0x1FFB1Cu);
    ctx->pc = 0x1FFB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB14u;
    // 0x1ffb18: 0xc64d0070  lwc1        $f13, 0x70($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x1FFB14u, 0x1FFB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB1Cu;
label_1ffb1c:
    // 0x1ffb1c: 0xc78182bc  lwc1        $f1, -0x7D44($gp)
    ctx->pc = 0x1ffb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ffb20: 0x86440040  lh          $a0, 0x40($s2)
    ctx->pc = 0x1ffb20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1ffb24: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ffb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ffb28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ffb28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ffb2c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ffb2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ffb30: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1ffb30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ffb34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ffb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ffb38: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFB38u;
    {
        const bool branch_taken_0x1ffb38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB38u;
        // 0x1ffb3c: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb38) {
            ctx->pc = 0x1FFB50u;
            goto label_1ffb50;
        }
    }
    ctx->pc = 0x1FFB40u;
    // 0x1ffb40: 0x86430086  lh          $v1, 0x86($s2)
    ctx->pc = 0x1ffb40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
    // 0x1ffb44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ffb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffb48: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFB48u;
    {
        const bool branch_taken_0x1ffb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB48u;
        // 0x1ffb4c: 0x2404f8e4  addiu       $a0, $zero, -0x71C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965476));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb48) {
            ctx->pc = 0x1FFB54u;
            goto label_1ffb54;
        }
    }
    ctx->pc = 0x1FFB50u;
label_1ffb50:
    // 0x1ffb50: 0x240411c7  addiu       $a0, $zero, 0x11C7
    ctx->pc = 0x1ffb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4551));
label_1ffb54:
    // 0x1ffb54: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFB54u;
    {
        const bool branch_taken_0x1ffb54 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1FFB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB54u;
        // 0x1ffb58: 0x901018  mult        $v0, $a0, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb54) {
            ctx->pc = 0x1FFB6Cu;
            goto label_1ffb6c;
        }
    }
    ctx->pc = 0x1FFB5Cu;
    // 0x1ffb5c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1ffb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1ffb60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ffb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ffb64: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x1ffb64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ffb68: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x1ffb68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ffb6c:
    // 0x1ffb6c: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x1ffb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1ffb70: 0x9647008a  lhu         $a3, 0x8A($s2)
    ctx->pc = 0x1ffb70u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
    // 0x1ffb74: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1ffb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ffb78: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x1ffb78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1ffb7c: 0x8645007a  lh          $a1, 0x7A($s2)
    ctx->pc = 0x1ffb7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1ffb80: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1ffb80u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ffb84: 0x1012  mflo        $v0
    ctx->pc = 0x1ffb84u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ffb88: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ffb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ffb8c: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x1ffb8cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ffb90: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x1ffb90u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1ffb94: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x1ffb94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1ffb98: 0xa647000e  sh          $a3, 0xE($s2)
    ctx->pc = 0x1ffb98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x1ffb9c: 0xc07f8e8  jal         func_1FE3A0
    ctx->pc = 0x1FFB9Cu;
    SET_GPR_U32(ctx, 31, 0x1FFBA4u);
    ctx->pc = 0x1FFBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB9Cu;
    // 0x1ffba0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE3A0u, 0x1FFB9Cu, 0x1FFBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFBA4u;
label_1ffba4:
    // 0x1ffba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ffba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffba8: 0xa642007a  sh          $v0, 0x7A($s2)
    ctx->pc = 0x1ffba8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ffbac: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1FFBACu;
    {
        const bool branch_taken_0x1ffbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBACu;
        // 0x1ffbb0: 0xa24301b8  sb          $v1, 0x1B8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 440), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbac) {
            ctx->pc = 0x1FFDC4u;
            goto label_1ffdc4;
        }
    }
    ctx->pc = 0x1FFBB4u;
    // 0x1ffbb4: 0x0  nop
    ctx->pc = 0x1ffbb4u;
    // NOP
label_1ffbb8:
    // 0x1ffbb8: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x1ffbb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffbbc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1ffbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ffbc0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1FFBC0u;
    {
        const bool branch_taken_0x1ffbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBC0u;
        // 0x1ffbc4: 0x86440078  lh          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbc0) {
            ctx->pc = 0x1FFD38u;
            goto label_1ffd38;
        }
    }
    ctx->pc = 0x1FFBC8u;
label_1ffbc8:
    // 0x1ffbc8: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x1ffbc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffbcc: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1ffbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ffbd0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1FFBD0u;
    {
        const bool branch_taken_0x1ffbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBD0u;
        // 0x1ffbd4: 0x86440078  lh          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbd0) {
            ctx->pc = 0x1FFD38u;
            goto label_1ffd38;
        }
    }
    ctx->pc = 0x1FFBD8u;
label_1ffbd8:
    // 0x1ffbd8: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x1ffbd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffbdc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1ffbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ffbe0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1FFBE0u;
    {
        const bool branch_taken_0x1ffbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBE0u;
        // 0x1ffbe4: 0x86440078  lh          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbe0) {
            ctx->pc = 0x1FFD38u;
            goto label_1ffd38;
        }
    }
    ctx->pc = 0x1FFBE8u;
label_1ffbe8:
    // 0x1ffbe8: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x1ffbe8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffbec: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ffbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ffbf0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1FFBF0u;
    {
        const bool branch_taken_0x1ffbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBF0u;
        // 0x1ffbf4: 0x86440078  lh          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbf0) {
            ctx->pc = 0x1FFD38u;
            goto label_1ffd38;
        }
    }
    ctx->pc = 0x1FFBF8u;
label_1ffbf8:
    // 0x1ffbf8: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x1ffbf8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffbfc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1ffbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ffc00: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1FFC00u;
    {
        const bool branch_taken_0x1ffc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC00u;
        // 0x1ffc04: 0x86440078  lh          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc00) {
            ctx->pc = 0x1FFD38u;
            goto label_1ffd38;
        }
    }
    ctx->pc = 0x1FFC08u;
label_1ffc08:
    // 0x1ffc08: 0xc7809724  lwc1        $f0, -0x68DC($gp)
    ctx->pc = 0x1ffc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffc0c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1ffc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1ffc10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ffc10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ffc14: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ffc14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1ffc18: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1ffc18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ffc1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ffc1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ffc20: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1FFC20u;
    {
        const bool branch_taken_0x1ffc20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FFC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC20u;
        // 0x1ffc24: 0x24621388  addiu       $v0, $v1, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc20) {
            ctx->pc = 0x1FFC40u;
            goto label_1ffc40;
        }
    }
    ctx->pc = 0x1FFC28u;
    // 0x1ffc28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ffc28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ffc2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ffc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ffc30: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ffc30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ffc34: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1ffc34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ffc38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ffc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ffc3c: 0x24621388  addiu       $v0, $v1, 0x1388
    ctx->pc = 0x1ffc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
label_1ffc40:
    // 0x1ffc40: 0x3406c350  ori         $a2, $zero, 0xC350
    ctx->pc = 0x1ffc40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x1ffc44: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x1ffc44u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1ffc48: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x1ffc48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffc4c: 0x86440078  lh          $a0, 0x78($s2)
    ctx->pc = 0x1ffc4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1ffc50: 0x3012  mflo        $a2
    ctx->pc = 0x1ffc50u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1ffc54: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1ffc54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1ffc58: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1FFC58u;
    {
        const bool branch_taken_0x1ffc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC58u;
        // 0x1ffc5c: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc58) {
            ctx->pc = 0x1FFD38u;
            goto label_1ffd38;
        }
    }
    ctx->pc = 0x1FFC60u;
label_1ffc60:
    // 0x1ffc60: 0xc07f8d0  jal         func_1FE340
    ctx->pc = 0x1FFC60u;
    SET_GPR_U32(ctx, 31, 0x1FFC68u);
    ctx->pc = 0x1FFC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC60u;
    // 0x1ffc64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE340u, 0x1FFC60u, 0x1FFC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC68u;
label_1ffc68:
    // 0x1ffc68: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x1ffc68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffc6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc70: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1FFC70u;
    {
        const bool branch_taken_0x1ffc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC70u;
        // 0x1ffc74: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc70) {
            ctx->pc = 0x1FFD38u;
            goto label_1ffd38;
        }
    }
    ctx->pc = 0x1FFC78u;
label_1ffc78:
    // 0x1ffc78: 0xc07f8d0  jal         func_1FE340
    ctx->pc = 0x1FFC78u;
    SET_GPR_U32(ctx, 31, 0x1FFC80u);
    ctx->pc = 0x1FFC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC78u;
    // 0x1ffc7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE340u, 0x1FFC78u, 0x1FFC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC80u;
label_1ffc80:
    // 0x1ffc80: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x1ffc80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffc84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc88: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1FFC88u;
    {
        const bool branch_taken_0x1ffc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC88u;
        // 0x1ffc8c: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc88) {
            ctx->pc = 0x1FFD38u;
            goto label_1ffd38;
        }
    }
    ctx->pc = 0x1FFC90u;
label_1ffc90:
    // 0x1ffc90: 0xc07f8d0  jal         func_1FE340
    ctx->pc = 0x1FFC90u;
    SET_GPR_U32(ctx, 31, 0x1FFC98u);
    ctx->pc = 0x1FFC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC90u;
    // 0x1ffc94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE340u, 0x1FFC90u, 0x1FFC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC98u;
label_1ffc98:
    // 0x1ffc98: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x1ffc98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffc9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffca0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1FFCA0u;
    {
        const bool branch_taken_0x1ffca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCA0u;
        // 0x1ffca4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffca0) {
            ctx->pc = 0x1FFD38u;
            goto label_1ffd38;
        }
    }
    ctx->pc = 0x1FFCA8u;
label_1ffca8:
    // 0x1ffca8: 0xc07f8d0  jal         func_1FE340
    ctx->pc = 0x1FFCA8u;
    SET_GPR_U32(ctx, 31, 0x1FFCB0u);
    ctx->pc = 0x1FFCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFCA8u;
    // 0x1ffcac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE340u, 0x1FFCA8u, 0x1FFCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCB0u;
label_1ffcb0:
    // 0x1ffcb0: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x1ffcb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffcb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffcb8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1FFCB8u;
    {
        const bool branch_taken_0x1ffcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCB8u;
        // 0x1ffcbc: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcb8) {
            ctx->pc = 0x1FFD38u;
            goto label_1ffd38;
        }
    }
    ctx->pc = 0x1FFCC0u;
label_1ffcc0:
    // 0x1ffcc0: 0xc07f8d0  jal         func_1FE340
    ctx->pc = 0x1FFCC0u;
    SET_GPR_U32(ctx, 31, 0x1FFCC8u);
    ctx->pc = 0x1FFCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFCC0u;
    // 0x1ffcc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE340u, 0x1FFCC0u, 0x1FFCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFCC8u;
label_1ffcc8:
    // 0x1ffcc8: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x1ffcc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffcd0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1FFCD0u;
    {
        const bool branch_taken_0x1ffcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCD0u;
        // 0x1ffcd4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcd0) {
            ctx->pc = 0x1FFD38u;
            goto label_1ffd38;
        }
    }
    ctx->pc = 0x1FFCD8u;
label_1ffcd8:
    // 0x1ffcd8: 0xc7809724  lwc1        $f0, -0x68DC($gp)
    ctx->pc = 0x1ffcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffcdc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1ffcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1ffce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ffce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ffce4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ffce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1ffce8: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1ffce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ffcec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ffcecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ffcf0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1FFCF0u;
    {
        const bool branch_taken_0x1ffcf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCF0u;
        // 0x1ffcf4: 0x24621388  addiu       $v0, $v1, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcf0) {
            ctx->pc = 0x1FFD10u;
            goto label_1ffd10;
        }
    }
    ctx->pc = 0x1FFCF8u;
    // 0x1ffcf8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ffcf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ffcfc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ffcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ffd00: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ffd00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ffd04: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1ffd04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ffd08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ffd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ffd0c: 0x24621388  addiu       $v0, $v1, 0x1388
    ctx->pc = 0x1ffd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
label_1ffd10:
    // 0x1ffd10: 0x3410c350  ori         $s0, $zero, 0xC350
    ctx->pc = 0x1ffd10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x1ffd14: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x1ffd14u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1ffd18: 0x8012  mflo        $s0
    ctx->pc = 0x1ffd18u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1ffd1c: 0xc07f8d0  jal         func_1FE340
    ctx->pc = 0x1FFD1Cu;
    SET_GPR_U32(ctx, 31, 0x1FFD24u);
    ctx->pc = 0x1FFD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD1Cu;
    // 0x1ffd20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE340u, 0x1FFD1Cu, 0x1FFD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD24u;
label_1ffd24:
    // 0x1ffd24: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x1ffd24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1ffd28: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x1ffd28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffd2c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x1ffd2cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x1ffd30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ffd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ffd38:
    // 0x1ffd38: 0xc07f8e8  jal         func_1FE3A0
    ctx->pc = 0x1FFD38u;
    SET_GPR_U32(ctx, 31, 0x1FFD40u);
    ctx->pc = 0x1FE3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE3A0u, 0x1FFD38u, 0x1FFD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD40u;
label_1ffd40:
    // 0x1ffd40: 0x924301f7  lbu         $v1, 0x1F7($s2)
    ctx->pc = 0x1ffd40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 503)));
    // 0x1ffd44: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x1ffd44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ffd48: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FFD48u;
    {
        const bool branch_taken_0x1ffd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD48u;
        // 0x1ffd4c: 0xa642007a  sh          $v0, 0x7A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd48) {
            ctx->pc = 0x1FFDC4u;
            goto label_1ffdc4;
        }
    }
    ctx->pc = 0x1FFD50u;
    // 0x1ffd50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffd54: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1FFD54u;
    {
        const bool branch_taken_0x1ffd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD54u;
        // 0x1ffd58: 0xa24201b8  sb          $v0, 0x1B8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 440), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd54) {
            ctx->pc = 0x1FFDC4u;
            goto label_1ffdc4;
        }
    }
    ctx->pc = 0x1FFD5Cu;
    // 0x1ffd5c: 0x0  nop
    ctx->pc = 0x1ffd5cu;
    // NOP
label_1ffd60:
    // 0x1ffd60: 0xc6420758  lwc1        $f2, 0x758($s2)
    ctx->pc = 0x1ffd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ffd64: 0xc6410750  lwc1        $f1, 0x750($s2)
    ctx->pc = 0x1ffd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ffd68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ffd68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ffd6c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1ffd6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ffd70: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1ffd70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1ffd74: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ffd74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1ffd78: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1ffd78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ffd7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ffd7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ffd80: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1ffd80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ffd84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ffd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ffd88: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1ffd88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ffd8c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1ffd8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ffd90: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x1FFD90u;
    SET_GPR_U32(ctx, 31, 0x1FFD98u);
    ctx->pc = 0x1FFD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD90u;
    // 0x1ffd94: 0x46806b60  cvt.s.w     $f13, $f13 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x1FFD90u, 0x1FFD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD98u;
label_1ffd98:
    // 0x1ffd98: 0xc78182c0  lwc1        $f1, -0x7D40($gp)
    ctx->pc = 0x1ffd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ffd9c: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x1ffd9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1ffda0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1ffda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ffda4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ffda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ffda8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ffda8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ffdac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ffdacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ffdb0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ffdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ffdb4: 0xc07f8e8  jal         func_1FE3A0
    ctx->pc = 0x1FFDB4u;
    SET_GPR_U32(ctx, 31, 0x1FFDBCu);
    ctx->pc = 0x1FFDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFDB4u;
    // 0x1ffdb8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE3A0u, 0x1FFDB4u, 0x1FFDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDBCu;
label_1ffdbc:
    // 0x1ffdbc: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x1ffdbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
label_1ffdc0:
    // 0x1ffdc0: 0xa642007a  sh          $v0, 0x7A($s2)
    ctx->pc = 0x1ffdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 2));
label_1ffdc4:
    // 0x1ffdc4: 0x8643015c  lh          $v1, 0x15C($s2)
    ctx->pc = 0x1ffdc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
label_1ffdc8:
    // 0x1ffdc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ffdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ffdcc: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1FFDCCu;
    {
        const bool branch_taken_0x1ffdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDCCu;
        // 0x1ffdd0: 0x9644015c  lhu         $a0, 0x15C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdcc) {
            ctx->pc = 0x1FFF18u;
            goto label_1fff18;
        }
    }
    ctx->pc = 0x1FFDD4u;
    // 0x1ffdd4: 0x924201f7  lbu         $v0, 0x1F7($s2)
    ctx->pc = 0x1ffdd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 503)));
    // 0x1ffdd8: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x1FFDD8u;
    {
        const bool branch_taken_0x1ffdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdd8) {
            ctx->pc = 0x1FFDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFDD8u;
            // 0x1ffddc: 0x964202c4  lhu         $v0, 0x2C4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFF1Cu;
            goto label_1fff1c;
        }
    }
    ctx->pc = 0x1FFDE0u;
    // 0x1ffde0: 0x9642007a  lhu         $v0, 0x7A($s2)
    ctx->pc = 0x1ffde0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x1ffde4: 0xc78182c4  lwc1        $f1, -0x7D3C($gp)
    ctx->pc = 0x1ffde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ffde8: 0x3c21023  subu        $v0, $fp, $v0
    ctx->pc = 0x1ffde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1ffdec: 0xc78282c8  lwc1        $f2, -0x7D38($gp)
    ctx->pc = 0x1ffdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ffdf0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ffdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ffdf4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1ffdf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ffdf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ffdf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ffdfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ffdfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ffe00: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ffe00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1ffe04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ffe04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ffe08: 0x0  nop
    ctx->pc = 0x1ffe08u;
    // NOP
    // 0x1ffe0c: 0x0  nop
    ctx->pc = 0x1ffe0cu;
    // NOP
    // 0x1ffe10: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1ffe10u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[2];
    // 0x1ffe14: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1ffe14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ffe18: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFE18u;
    {
        const bool branch_taken_0x1ffe18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ffe18) {
            ctx->pc = 0x1FFE30u;
            goto label_1ffe30;
        }
    }
    ctx->pc = 0x1FFE20u;
    // 0x1ffe20: 0xc78082cc  lwc1        $f0, -0x7D34($gp)
    ctx->pc = 0x1ffe20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffe24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FFE24u;
    {
        const bool branch_taken_0x1ffe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE24u;
        // 0x1ffe28: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe24) {
            ctx->pc = 0x1FFE48u;
            goto label_1ffe48;
        }
    }
    ctx->pc = 0x1FFE2Cu;
    // 0x1ffe2c: 0x0  nop
    ctx->pc = 0x1ffe2cu;
    // NOP
label_1ffe30:
    // 0x1ffe30: 0xc78082d0  lwc1        $f0, -0x7D30($gp)
    ctx->pc = 0x1ffe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffe34: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1ffe34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ffe38: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFE38u;
    {
        const bool branch_taken_0x1ffe38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FFE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE38u;
        // 0x1ffe3c: 0x41c00  sll         $v1, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe38) {
            ctx->pc = 0x1FFE4Cu;
            goto label_1ffe4c;
        }
    }
    ctx->pc = 0x1FFE40u;
    // 0x1ffe40: 0xc78082d4  lwc1        $f0, -0x7D2C($gp)
    ctx->pc = 0x1ffe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffe44: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1ffe44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_1ffe48:
    // 0x1ffe48: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x1ffe48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1ffe4c:
    // 0x1ffe4c: 0x8e440894  lw          $a0, 0x894($s2)
    ctx->pc = 0x1ffe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x1ffe50: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1ffe50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1ffe54: 0xc6400750  lwc1        $f0, 0x750($s2)
    ctx->pc = 0x1ffe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffe58: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ffe58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ffe5c: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x1ffe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ffe60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ffe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ffe64: 0xc6430758  lwc1        $f3, 0x758($s2)
    ctx->pc = 0x1ffe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ffe68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ffe68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ffe6c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1ffe6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ffe70: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ffe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ffe74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ffe74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ffe78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ffe78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ffe7c: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x1ffe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ffe80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ffe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe84: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1ffe84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1ffe88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ffe88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ffe8c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1ffe8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ffe90: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x1ffe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffe94: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1ffe94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1ffe98: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1ffe98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1ffe9c: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x1FFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1FFEA4u);
    ctx->pc = 0x1FFEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE9Cu;
    // 0x1ffea0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x1FFE9Cu, 0x1FFEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFEA4u;
label_1ffea4:
    // 0x1ffea4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1ffea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ffea8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ffea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffeac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ffeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffeb0: 0xc08491e  jal         func_212478
    ctx->pc = 0x1FFEB0u;
    SET_GPR_U32(ctx, 31, 0x1FFEB8u);
    ctx->pc = 0x1FFEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFEB0u;
    // 0x1ffeb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x1FFEB0u, 0x1FFEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFEB8u;
label_1ffeb8:
    // 0x1ffeb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ffeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffebc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ffebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ffec0: 0xc084784  jal         func_211E10
    ctx->pc = 0x1FFEC0u;
    SET_GPR_U32(ctx, 31, 0x1FFEC8u);
    ctx->pc = 0x1FFEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFEC0u;
    // 0x1ffec4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x1FFEC0u, 0x1FFEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFEC8u;
label_1ffec8:
    // 0x1ffec8: 0xc6470000  lwc1        $f7, 0x0($s2)
    ctx->pc = 0x1ffec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1ffecc: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1ffeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ffed0: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x1ffed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1ffed4: 0xc6460008  lwc1        $f6, 0x8($s2)
    ctx->pc = 0x1ffed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1ffed8: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x1ffed8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x1ffedc: 0xc6430750  lwc1        $f3, 0x750($s2)
    ctx->pc = 0x1ffedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ffee0: 0xc6440758  lwc1        $f4, 0x758($s2)
    ctx->pc = 0x1ffee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ffee4: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x1ffee4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1ffee8: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1ffee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ffeec: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1ffeecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ffef0: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1ffef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffef4: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x1ffef4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x1ffef8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ffef8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ffefc: 0xe6470000  swc1        $f7, 0x0($s2)
    ctx->pc = 0x1ffefcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1fff00: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1fff00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1fff04: 0xe6460008  swc1        $f6, 0x8($s2)
    ctx->pc = 0x1fff04u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1fff08: 0xe6430750  swc1        $f3, 0x750($s2)
    ctx->pc = 0x1fff08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1872), bits); }
    // 0x1fff0c: 0xe6440758  swc1        $f4, 0x758($s2)
    ctx->pc = 0x1fff0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1880), bits); }
    // 0x1fff10: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x1fff10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1fff14: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1fff14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_1fff18:
    // 0x1fff18: 0x964202c4  lhu         $v0, 0x2C4($s2)
    ctx->pc = 0x1fff18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 708)));
label_1fff1c:
    // 0x1fff1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fff20: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1fff20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1fff24: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFF24u;
    {
        const bool branch_taken_0x1fff24 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF24u;
        // 0x1fff28: 0xa64202c4  sh          $v0, 0x2C4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 708), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff24) {
            ctx->pc = 0x1FFF30u;
            goto label_1fff30;
        }
    }
    ctx->pc = 0x1FFF2Cu;
    // 0x1fff2c: 0xa64002c4  sh          $zero, 0x2C4($s2)
    ctx->pc = 0x1fff2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 708), (uint16_t)GPR_U32(ctx, 0));
label_1fff30:
    // 0x1fff30: 0x864202ba  lh          $v0, 0x2BA($s2)
    ctx->pc = 0x1fff30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 698)));
    // 0x1fff34: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFF34u;
    {
        const bool branch_taken_0x1fff34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF34u;
        // 0x1fff38: 0x964302ba  lhu         $v1, 0x2BA($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 698)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff34) {
            ctx->pc = 0x1FFF44u;
            goto label_1fff44;
        }
    }
    ctx->pc = 0x1FFF3Cu;
    // 0x1fff3c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1fff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fff40: 0xa64202ba  sh          $v0, 0x2BA($s2)
    ctx->pc = 0x1fff40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 698), (uint16_t)GPR_U32(ctx, 2));
label_1fff44:
    // 0x1fff44: 0x864202a2  lh          $v0, 0x2A2($s2)
    ctx->pc = 0x1fff44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 674)));
    // 0x1fff48: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFF48u;
    {
        const bool branch_taken_0x1fff48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF48u;
        // 0x1fff4c: 0x964302a2  lhu         $v1, 0x2A2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 674)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff48) {
            ctx->pc = 0x1FFF58u;
            goto label_1fff58;
        }
    }
    ctx->pc = 0x1FFF50u;
    // 0x1fff50: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1fff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fff54: 0xa64202a2  sh          $v0, 0x2A2($s2)
    ctx->pc = 0x1fff54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 674), (uint16_t)GPR_U32(ctx, 2));
label_1fff58:
    // 0x1fff58: 0x964202c8  lhu         $v0, 0x2C8($s2)
    ctx->pc = 0x1fff58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 712)));
    // 0x1fff5c: 0x3404fffe  ori         $a0, $zero, 0xFFFE
    ctx->pc = 0x1fff5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1fff60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fff60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fff68: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fff68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fff6c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFF6Cu;
    {
        const bool branch_taken_0x1fff6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF6Cu;
        // 0x1fff70: 0xa64202c8  sh          $v0, 0x2C8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 712), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff6c) {
            ctx->pc = 0x1FFF7Cu;
            goto label_1fff7c;
        }
    }
    ctx->pc = 0x1FFF74u;
    // 0x1fff74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fff78: 0xa64202c8  sh          $v0, 0x2C8($s2)
    ctx->pc = 0x1fff78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 712), (uint16_t)GPR_U32(ctx, 2));
label_1fff7c:
    // 0x1fff7c: 0x964202d2  lhu         $v0, 0x2D2($s2)
    ctx->pc = 0x1fff7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 722)));
    // 0x1fff80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fff80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fff88: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fff88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fff8c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFF8Cu;
    {
        const bool branch_taken_0x1fff8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF8Cu;
        // 0x1fff90: 0xa64202d2  sh          $v0, 0x2D2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 722), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff8c) {
            ctx->pc = 0x1FFF9Cu;
            goto label_1fff9c;
        }
    }
    ctx->pc = 0x1FFF94u;
    // 0x1fff94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fff94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fff98: 0xa64202d2  sh          $v0, 0x2D2($s2)
    ctx->pc = 0x1fff98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 722), (uint16_t)GPR_U32(ctx, 2));
label_1fff9c:
    // 0x1fff9c: 0x964202ca  lhu         $v0, 0x2CA($s2)
    ctx->pc = 0x1fff9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 714)));
    // 0x1fffa0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fffa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fffa4: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x1fffa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fffa8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1fffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1fffac: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFFACu;
    {
        const bool branch_taken_0x1fffac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFACu;
        // 0x1fffb0: 0xa64202ca  sh          $v0, 0x2CA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 714), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffac) {
            ctx->pc = 0x1FFFB8u;
            goto label_1fffb8;
        }
    }
    ctx->pc = 0x1FFFB4u;
    // 0x1fffb4: 0xa64002ca  sh          $zero, 0x2CA($s2)
    ctx->pc = 0x1fffb4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 714), (uint16_t)GPR_U32(ctx, 0));
label_1fffb8:
    // 0x1fffb8: 0x964202cc  lhu         $v0, 0x2CC($s2)
    ctx->pc = 0x1fffb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x1fffbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fffbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fffc0: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x1fffc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fffc4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1fffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1fffc8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFFC8u;
    {
        const bool branch_taken_0x1fffc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFC8u;
        // 0x1fffcc: 0xa64202cc  sh          $v0, 0x2CC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 716), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffc8) {
            ctx->pc = 0x1FFFD4u;
            goto label_1fffd4;
        }
    }
    ctx->pc = 0x1FFFD0u;
    // 0x1fffd0: 0xa64002cc  sh          $zero, 0x2CC($s2)
    ctx->pc = 0x1fffd0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 716), (uint16_t)GPR_U32(ctx, 0));
label_1fffd4:
    // 0x1fffd4: 0x8e5000c4  lw          $s0, 0xC4($s2)
    ctx->pc = 0x1fffd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fffd8: 0x86430096  lh          $v1, 0x96($s2)
    ctx->pc = 0x1fffd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x1fffdc: 0x96020044  lhu         $v0, 0x44($s0)
    ctx->pc = 0x1fffdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1fffe0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fffe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fffe4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1fffe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fffe8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FFFE8u;
    {
        const bool branch_taken_0x1fffe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFE8u;
        // 0x1fffec: 0x96460096  lhu         $a2, 0x96($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffe8) {
            ctx->pc = 0x200028u;
            return;
        }
    }
    ctx->pc = 0x1FFFF0u;
    // 0x1ffff0: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x1ffff0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x1ffff4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ffff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ffff8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FFFF8u;
    {
        const bool branch_taken_0x1ffff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffff8) {
            ctx->pc = 0x1FFFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFFF8u;
            // 0x1ffffc: 0xa2400201  sb          $zero, 0x201($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 513), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20002Cu;
            return;
        }
    }
    ctx->pc = 0x200000u;
    // 0x200000: 0x92020042  lbu         $v0, 0x42($s0)
    ctx->pc = 0x200000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x200004: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200004u;
    {
        const bool branch_taken_0x200004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200004u;
        // 0x200008: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200004) {
            ctx->pc = 0x200018u;
            goto label_200018;
        }
    }
    ctx->pc = 0x20000Cu;
    // 0x20000c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20000Cu;
    {
        const bool branch_taken_0x20000c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20000Cu;
        // 0x200010: 0xa2420201  sb          $v0, 0x201($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 513), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20000c) {
            ctx->pc = 0x20002Cu;
            return;
        }
    }
    ctx->pc = 0x200014u;
    // 0x200014: 0x0  nop
    ctx->pc = 0x200014u;
    // NOP
label_200018:
    // 0x200018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20001c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20001Cu;
    {
        const bool branch_taken_0x20001c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20001c) {
            ctx->pc = 0x20002Cu;
            return;
        }
    }
    ctx->pc = 0x200024u;
}

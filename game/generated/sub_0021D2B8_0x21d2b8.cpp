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

// Function: sub_0021D2B8
// Address: 0x21d2b8 - 0x21d430
void sub_0021D2B8_0x21d2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D2B8_0x21d2b8");
#endif

    switch (ctx->pc) {
        case 0x21d340u: goto label_21d340;
        case 0x21d348u: goto label_21d348;
        case 0x21d3d4u: goto label_21d3d4;
        default: break;
    }

    ctx->pc = 0x21d2b8u;

    // 0x21d2b8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x21d2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x21d2bc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x21d2c0: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x21d2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x21d2c4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21d2c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2c8: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x21d2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x21d2cc: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x21d2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21d2d0: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x21d2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x21d2d4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x21d2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2d8: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x21d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x21d2dc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x21d2dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2e0: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x21d2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x21d2e4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x21d2e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2e8: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x21d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x21d2ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21d2ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2f0: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x21d2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x21d2f4: 0x2e960001  sltiu       $s6, $s4, 0x1
    ctx->pc = 0x21d2f4u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x21d2f8: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x21d2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x21d2fc: 0x244269e0  addiu       $v0, $v0, 0x69E0
    ctx->pc = 0x21d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27104));
    // 0x21d300: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x21d300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x21d304: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x21d304u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21d308: 0x904b000e  lbu         $t3, 0xE($v0)
    ctx->pc = 0x21d308u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x21d30c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21d310: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d314: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x21d314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21d318: 0x8ca56ab0  lw          $a1, 0x6AB0($a1)
    ctx->pc = 0x21d318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27312)));
    // 0x21d31c: 0x135800b  movn        $s0, $t1, $s5
    ctx->pc = 0x21d31cu;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 9));
    // 0x21d320: 0xdc4a0000  ld          $t2, 0x0($v0)
    ctx->pc = 0x21d320u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d324: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x21d324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21d328: 0x9446000c  lhu         $a2, 0xC($v0)
    ctx->pc = 0x21d328u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21d32c: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x21d32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
    // 0x21d330: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x21d330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x21d334: 0xa7a6001c  sh          $a2, 0x1C($sp)
    ctx->pc = 0x21d334u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x21d338: 0xc04a38c  jal         func_128E30
    ctx->pc = 0x21D338u;
    SET_GPR_U32(ctx, 31, 0x21D340u);
    ctx->pc = 0x21D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D338u;
    // 0x21d33c: 0xa3ab001e  sb          $t3, 0x1E($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128E30u, 0x21D338u, 0x21D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D340u;
label_21d340:
    // 0x21d340: 0xc0a6402  jal         func_299008
    ctx->pc = 0x21D340u;
    SET_GPR_U32(ctx, 31, 0x21D348u);
    ctx->pc = 0x21D344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D340u;
    // 0x21d344: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299008u, 0x21D340u, 0x21D348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D348u;
label_21d348:
    // 0x21d348: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x21d348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x21d34c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x21d34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x21d350: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21d350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d354: 0xc460bf1c  lwc1        $f0, -0x40E4($v1)
    ctx->pc = 0x21d354u;
    { uint32_t bits = FAST_READ32(0x3BBF1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d358: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x21d358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x21d35c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21d35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21d360: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d364: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21d364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21d368: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x21d368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x21d36c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21d36cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d370: 0x436824  and         $t5, $v0, $v1
    ctx->pc = 0x21d370u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21d374: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x21d374u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d378: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x21d378u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d37c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21d380: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21d380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d384: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x21d384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21d388: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21d388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d38c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21d38cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x21d390: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x21d390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x21d394: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x21D394u;
    {
        const bool branch_taken_0x21d394 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D394u;
        // 0x21d398: 0x2409006e  addiu       $t1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d394) {
            ctx->pc = 0x21D3B0u;
            goto label_21d3b0;
        }
    }
    ctx->pc = 0x21D39Cu;
    // 0x21d39c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21d39cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21d3a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21d3a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x21d3a4: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x21d3a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x21d3a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x21d3ac: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x21d3acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_21d3b0:
    // 0x21d3b0: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x21d3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x21d3b4: 0x240c000d  addiu       $t4, $zero, 0xD
    ctx->pc = 0x21d3b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x21d3b8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x21d3bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d3c0: 0x1a84025  or          $t0, $t5, $t0
    ctx->pc = 0x21d3c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) | GPR_U64(ctx, 8));
    // 0x21d3c4: 0xa44c7cc2  sh          $t4, 0x7CC2($v0)
    ctx->pc = 0x21d3c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x3D7CC2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3D7CC2u, _value); } while (0);
    // 0x21d3c8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x21d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x21d3cc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21D3CCu;
    SET_GPR_U32(ctx, 31, 0x21D3D4u);
    ctx->pc = 0x21D3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3CCu;
    // 0x21d3d0: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21D3CCu, 0x21D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D3D4u;
label_21d3d4:
    // 0x21d3d4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x21d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x21d3d8: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x21d3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x21d3dc: 0x2442bed8  addiu       $v0, $v0, -0x4128
    ctx->pc = 0x21d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950616));
    // 0x21d3e0: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x21d3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x21d3e4: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x21d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x21d3e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21d3ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21d3f0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x21d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21d3f4: 0xac560004  sw          $s6, 0x4($v0)
    ctx->pc = 0x21d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 22));
    // 0x21d3f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d3fc: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x21d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x21d400: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x21d400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x21d404: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x21d404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21d408: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x21d408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x21d40c: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x21d40cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x21d410: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x21d410u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x21d414: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x21d414u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x21d418: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x21d418u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x21d41c: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x21d41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x21d420: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x21d420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x21d424: 0x3e00008  jr          $ra
    ctx->pc = 0x21D424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D424u;
        // 0x21d428: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D42Cu;
    // 0x21d42c: 0x0  nop
    ctx->pc = 0x21d42cu;
    // NOP
    ctx->pc = 0x21d430u;
}

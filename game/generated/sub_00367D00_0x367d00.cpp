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

// Function: sub_00367D00
// Address: 0x367d00 - 0x3681a0
void sub_00367D00_0x367d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367D00_0x367d00");
#endif

    switch (ctx->pc) {
        case 0x367d68u: goto label_367d68;
        case 0x367d7cu: goto label_367d7c;
        case 0x367d8cu: goto label_367d8c;
        case 0x367dacu: goto label_367dac;
        case 0x367dd4u: goto label_367dd4;
        case 0x367de0u: goto label_367de0;
        case 0x367e1cu: goto label_367e1c;
        case 0x367e2cu: goto label_367e2c;
        case 0x367e3cu: goto label_367e3c;
        case 0x367e48u: goto label_367e48;
        case 0x367e5cu: goto label_367e5c;
        case 0x367eecu: goto label_367eec;
        case 0x367f00u: goto label_367f00;
        case 0x367f20u: goto label_367f20;
        case 0x367f38u: goto label_367f38;
        case 0x367f60u: goto label_367f60;
        case 0x367f84u: goto label_367f84;
        case 0x367fa4u: goto label_367fa4;
        case 0x368038u: goto label_368038;
        case 0x368050u: goto label_368050;
        case 0x368078u: goto label_368078;
        case 0x368090u: goto label_368090;
        case 0x3680acu: goto label_3680ac;
        case 0x3680c8u: goto label_3680c8;
        case 0x3680dcu: goto label_3680dc;
        case 0x368110u: goto label_368110;
        case 0x368160u: goto label_368160;
        case 0x368178u: goto label_368178;
        case 0x368190u: goto label_368190;
        default: break;
    }

    ctx->pc = 0x367d00u;

    // 0x367d00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x367d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x367d04: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x367d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x367d08: 0x3c11001d  lui         $s1, 0x1D
    ctx->pc = 0x367d08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)29 << 16));
    // 0x367d0c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x367d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x367d10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x367d10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d14: 0x26316448  addiu       $s1, $s1, 0x6448
    ctx->pc = 0x367d14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25672));
    // 0x367d18: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x367d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x367d1c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x367d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x367d20: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x367d20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x367d24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x367d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x367d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x367d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d34: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x367d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x367d38: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x367d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d3c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x367d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x367d40: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x367d40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d44: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x367d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x367d48: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x367d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x367d4c: 0xe7b70090  swc1        $f23, 0x90($sp)
    ctx->pc = 0x367d4cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x367d50: 0xe7b60088  swc1        $f22, 0x88($sp)
    ctx->pc = 0x367d50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x367d54: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x367d54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x367d58: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x367d58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x367d5c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x367d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x367d60: 0xc0da4a0  jal         func_369280
    ctx->pc = 0x367D60u;
    SET_GPR_U32(ctx, 31, 0x367D68u);
    ctx->pc = 0x367D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D60u;
    // 0x367d64: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369280u, 0x367D60u, 0x367D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D68u;
label_367d68:
    // 0x367d68: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x367d68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x367d6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x367d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d70: 0x2626000c  addiu       $a2, $s1, 0xC
    ctx->pc = 0x367d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x367d74: 0xc0da4a0  jal         func_369280
    ctx->pc = 0x367D74u;
    SET_GPR_U32(ctx, 31, 0x367D7Cu);
    ctx->pc = 0x367D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D74u;
    // 0x367d78: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369280u, 0x367D74u, 0x367D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D7Cu;
label_367d7c:
    // 0x367d7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x367d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x367d80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x367d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x367d84: 0xc0da49a  jal         func_369268
    ctx->pc = 0x367D84u;
    SET_GPR_U32(ctx, 31, 0x367D8Cu);
    ctx->pc = 0x367D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D84u;
    // 0x367d88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369268u, 0x367D84u, 0x367D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D8Cu;
label_367d8c:
    // 0x367d8c: 0xc66d0010  lwc1        $f13, 0x10($s3)
    ctx->pc = 0x367d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x367d90: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x367d90u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x367d94: 0x92c40007  lbu         $a0, 0x7($s6)
    ctx->pc = 0x367d94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
    // 0x367d98: 0xc66e0014  lwc1        $f14, 0x14($s3)
    ctx->pc = 0x367d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x367d9c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x367d9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x367da0: 0xc66f000c  lwc1        $f15, 0xC($s3)
    ctx->pc = 0x367da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x367da4: 0xc0da200  jal         func_368800
    ctx->pc = 0x367DA4u;
    SET_GPR_U32(ctx, 31, 0x367DACu);
    ctx->pc = 0x367DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367DA4u;
    // 0x367da8: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x368800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368800u, 0x367DA4u, 0x367DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367DACu;
label_367dac:
    // 0x367dac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x367dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367db0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x367db0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x367db4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x367db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367db8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x367db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x367dbc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x367dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367dc0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x367dc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367dc4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x367DC4u;
    {
        const bool branch_taken_0x367dc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x367DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367DC4u;
        // 0x367dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367dc4) {
            ctx->pc = 0x367E20u;
            goto label_367e20;
        }
    }
    ctx->pc = 0x367DCCu;
    // 0x367dcc: 0xc0da4a0  jal         func_369280
    ctx->pc = 0x367DCCu;
    SET_GPR_U32(ctx, 31, 0x367DD4u);
    ctx->pc = 0x369280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369280u, 0x367DCCu, 0x367DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367DD4u;
label_367dd4:
    // 0x367dd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x367dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367dd8: 0xc0da338  jal         func_368CE0
    ctx->pc = 0x367DD8u;
    SET_GPR_U32(ctx, 31, 0x367DE0u);
    ctx->pc = 0x367DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367DD8u;
    // 0x367ddc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368CE0u, 0x367DD8u, 0x367DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367DE0u;
label_367de0:
    // 0x367de0: 0xc66e0000  lwc1        $f14, 0x0($s3)
    ctx->pc = 0x367de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x367de4: 0x46000406  mov.s       $f16, $f0
    ctx->pc = 0x367de4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[0]);
    // 0x367de8: 0x46107034  c.lt.s      $f14, $f16
    ctx->pc = 0x367de8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367dec: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x367DECu;
    {
        const bool branch_taken_0x367dec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x367dec) {
            ctx->pc = 0x367DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367DECu;
            // 0x367df0: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x367E20u;
            goto label_367e20;
        }
    }
    ctx->pc = 0x367DF4u;
    // 0x367df4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x367df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367df8: 0x46008034  c.lt.s      $f16, $f0
    ctx->pc = 0x367df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367dfc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x367DFCu;
    {
        const bool branch_taken_0x367dfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x367E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367DFCu;
        // 0x367e00: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x367dfc) {
            ctx->pc = 0x367E10u;
            goto label_367e10;
        }
    }
    ctx->pc = 0x367E04u;
    // 0x367e04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x367E04u;
    {
        const bool branch_taken_0x367e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367E04u;
        // 0x367e08: 0xc6750008  lwc1        $f21, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367e04) {
            ctx->pc = 0x367E20u;
            goto label_367e20;
        }
    }
    ctx->pc = 0x367E0Cu;
    // 0x367e0c: 0x0  nop
    ctx->pc = 0x367e0cu;
    // NOP
label_367e10:
    // 0x367e10: 0xc66d0008  lwc1        $f13, 0x8($s3)
    ctx->pc = 0x367e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x367e14: 0xc0da2f2  jal         func_368BC8
    ctx->pc = 0x367E14u;
    SET_GPR_U32(ctx, 31, 0x367E1Cu);
    ctx->pc = 0x367E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E14u;
    // 0x367e18: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x368BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368BC8u, 0x367E14u, 0x367E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E1Cu;
label_367e1c:
    // 0x367e1c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x367e1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_367e20:
    // 0x367e20: 0x92c40004  lbu         $a0, 0x4($s6)
    ctx->pc = 0x367e20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x367e24: 0xc0da36e  jal         func_368DB8
    ctx->pc = 0x367E24u;
    SET_GPR_U32(ctx, 31, 0x367E2Cu);
    ctx->pc = 0x367E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E24u;
    // 0x367e28: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x368DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368DB8u, 0x367E24u, 0x367E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E2Cu;
label_367e2c:
    // 0x367e2c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x367e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x367e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e34: 0xc0da260  jal         func_368980
    ctx->pc = 0x367E34u;
    SET_GPR_U32(ctx, 31, 0x367E3Cu);
    ctx->pc = 0x367E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E34u;
    // 0x367e38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368980u, 0x367E34u, 0x367E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E3Cu;
label_367e3c:
    // 0x367e3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x367e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e40: 0xc0da2b0  jal         func_368AC0
    ctx->pc = 0x367E40u;
    SET_GPR_U32(ctx, 31, 0x367E48u);
    ctx->pc = 0x367E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E40u;
    // 0x367e44: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x368AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368AC0u, 0x367E40u, 0x367E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E48u;
label_367e48:
    // 0x367e48: 0x4615b802  mul.s       $f0, $f23, $f21
    ctx->pc = 0x367e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x367e4c: 0xa6820004  sh          $v0, 0x4($s4)
    ctx->pc = 0x367e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x367e50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x367e50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x367e54: 0xc0da296  jal         func_368A58
    ctx->pc = 0x367E54u;
    SET_GPR_U32(ctx, 31, 0x367E5Cu);
    ctx->pc = 0x367E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E54u;
    // 0x367e58: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x368A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368A58u, 0x367E54u, 0x367E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E5Cu;
label_367e5c:
    // 0x367e5c: 0xa290000c  sb          $s0, 0xC($s4)
    ctx->pc = 0x367e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 16));
    // 0x367e60: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x367e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x367e64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x367e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e68: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x367e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367e6c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x367e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x367e70: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x367e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367e74: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x367e74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x367e78: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x367e78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x367e7c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x367e7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x367e80: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x367e80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x367e84: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x367e84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x367e88: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x367e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x367e8c: 0xc7b70090  lwc1        $f23, 0x90($sp)
    ctx->pc = 0x367e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x367e90: 0xc7b60088  lwc1        $f22, 0x88($sp)
    ctx->pc = 0x367e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x367e94: 0xc7b50080  lwc1        $f21, 0x80($sp)
    ctx->pc = 0x367e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x367e98: 0xc7b40078  lwc1        $f20, 0x78($sp)
    ctx->pc = 0x367e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x367e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x367E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367E9Cu;
        // 0x367ea0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367EA4u;
    // 0x367ea4: 0x0  nop
    ctx->pc = 0x367ea4u;
    // NOP
    // 0x367ea8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x367ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x367eac: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x367eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x367eb0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x367eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367eb4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x367eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x367eb8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x367eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x367ebc: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x367ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x367ec0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x367ec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ec4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x367ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x367ec8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x367ec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ecc: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x367eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x367ed0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x367ed0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ed4: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x367ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x367ed8: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x367ED8u;
    {
        const bool branch_taken_0x367ed8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x367EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367ED8u;
        // 0x367edc: 0xffbf00a0  sd          $ra, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367ed8) {
            ctx->pc = 0x367EF8u;
            goto label_367ef8;
        }
    }
    ctx->pc = 0x367EE0u;
    // 0x367ee0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x367ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x367ee4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x367EE4u;
    SET_GPR_U32(ctx, 31, 0x367EECu);
    ctx->pc = 0x367EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367EE4u;
    // 0x367ee8: 0x24847a40  addiu       $a0, $a0, 0x7A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x367EE4u, 0x367EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367EECu;
label_367eec:
    // 0x367eec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x367eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x367ef0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x367EF0u;
    {
        const bool branch_taken_0x367ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367EF0u;
        // 0x367ef4: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x367ef0) {
            ctx->pc = 0x367FA8u;
            goto label_367fa8;
        }
    }
    ctx->pc = 0x367EF8u;
label_367ef8:
    // 0x367ef8: 0xc0d741e  jal         func_35D078
    ctx->pc = 0x367EF8u;
    SET_GPR_U32(ctx, 31, 0x367F00u);
    ctx->pc = 0x367EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367EF8u;
    // 0x367efc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D078u, 0x367EF8u, 0x367F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F00u;
label_367f00:
    // 0x367f00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x367F00u;
    {
        const bool branch_taken_0x367f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x367f00) {
            ctx->pc = 0x367F18u;
            goto label_367f18;
        }
    }
    ctx->pc = 0x367F08u;
    // 0x367f08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x367f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x367f0c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x367F0Cu;
    {
        const bool branch_taken_0x367f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F0Cu;
        // 0x367f10: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f0c) {
            ctx->pc = 0x367FA8u;
            goto label_367fa8;
        }
    }
    ctx->pc = 0x367F14u;
    // 0x367f14: 0x0  nop
    ctx->pc = 0x367f14u;
    // NOP
label_367f18:
    // 0x367f18: 0xc0d751a  jal         func_35D468
    ctx->pc = 0x367F18u;
    SET_GPR_U32(ctx, 31, 0x367F20u);
    ctx->pc = 0x367F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F18u;
    // 0x367f1c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D468u, 0x367F18u, 0x367F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F20u;
label_367f20:
    // 0x367f20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x367f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f24: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x367F24u;
    {
        const bool branch_taken_0x367f24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x367f24) {
            ctx->pc = 0x367F70u;
            goto label_367f70;
        }
    }
    ctx->pc = 0x367F2Cu;
    // 0x367f2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x367f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f30: 0x2111017  dsrav       $v0, $s1, $s0
    ctx->pc = 0x367f30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (GPR_U32(ctx, 16) & 0x3F));
    // 0x367f34: 0x0  nop
    ctx->pc = 0x367f34u;
    // NOP
label_367f38:
    // 0x367f38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x367f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x367f3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x367f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x367f40: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x367f40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x367f44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x367F44u;
    {
        const bool branch_taken_0x367f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F44u;
        // 0x367f48: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f44) {
            ctx->pc = 0x367F60u;
            goto label_367f60;
        }
    }
    ctx->pc = 0x367F4Cu;
    // 0x367f4c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x367f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f54: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x367f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f58: 0xc0da068  jal         func_3681A0
    ctx->pc = 0x367F58u;
    SET_GPR_U32(ctx, 31, 0x367F60u);
    ctx->pc = 0x367F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F58u;
    // 0x367f5c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3681A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3681A0u, 0x367F58u, 0x367F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F60u;
label_367f60:
    // 0x367f60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x367f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x367f64: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x367f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x367f68: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x367F68u;
    {
        const bool branch_taken_0x367f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F68u;
        // 0x367f6c: 0x2111017  dsrav       $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (GPR_U32(ctx, 16) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f68) {
            ctx->pc = 0x367F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367f38;
        }
    }
    ctx->pc = 0x367F70u;
label_367f70:
    // 0x367f70: 0x640000d  bltz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x367F70u;
    {
        const bool branch_taken_0x367f70 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x367F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367F70u;
        // 0x367f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f70) {
            ctx->pc = 0x367FA8u;
            goto label_367fa8;
        }
    }
    ctx->pc = 0x367F78u;
    // 0x367f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f7c: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x367F7Cu;
    SET_GPR_U32(ctx, 31, 0x367F84u);
    ctx->pc = 0x367F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F7Cu;
    // 0x367f80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x367F7Cu, 0x367F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F84u;
label_367f84:
    // 0x367f84: 0x1228c0  sll         $a1, $s2, 3
    ctx->pc = 0x367f84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x367f88: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x367f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x367f8c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x367f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x367f90: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x367f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x367f94: 0x24216478  addiu       $at, $at, 0x6478
    ctx->pc = 0x367f94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 25720));
    // 0x367f98: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x367f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x367f9c: 0xc0d92a8  jal         func_364AA0
    ctx->pc = 0x367F9Cu;
    SET_GPR_U32(ctx, 31, 0x367FA4u);
    ctx->pc = 0x367FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F9Cu;
    // 0x367fa0: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364AA0u, 0x367F9Cu, 0x367FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FA4u;
label_367fa4:
    // 0x367fa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x367fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_367fa8:
    // 0x367fa8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x367fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x367fac: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x367facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x367fb0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x367fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x367fb4: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x367fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x367fb8: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x367fb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x367fbc: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x367fbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x367fc0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x367fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x367fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x367FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367FC4u;
        // 0x367fc8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367FCCu;
    // 0x367fcc: 0x0  nop
    ctx->pc = 0x367fccu;
    // NOP
    // 0x367fd0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x367fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x367fd4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x367fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x367fd8: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x367fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x367fdc: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x367fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367fe0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x367fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x367fe4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x367fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x367fe8: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x367fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x367fec: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x367fecu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x367ff0: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x367ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x367ff4: 0x4ac03  sra         $s5, $a0, 16
    ctx->pc = 0x367ff4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 4), 16));
    // 0x367ff8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x367ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x367ffc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x367ffcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368000: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x368000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x368004: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x368004u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368008: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x368008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x36800c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x36800cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368010: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x368010u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x368014: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x368014u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x368018: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x368018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x36801c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x36801cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x368020: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x368020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x368024: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x368024u;
    {
        const bool branch_taken_0x368024 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x368028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368024u;
        // 0x368028: 0xffbf00b8  sd          $ra, 0xB8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368024) {
            ctx->pc = 0x368048u;
            goto label_368048;
        }
    }
    ctx->pc = 0x36802Cu;
    // 0x36802c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36802cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x368030: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x368030u;
    SET_GPR_U32(ctx, 31, 0x368038u);
    ctx->pc = 0x368034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368030u;
    // 0x368034: 0x24847a78  addiu       $a0, $a0, 0x7A78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x368030u, 0x368038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368038u;
label_368038:
    // 0x368038: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x368038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x36803c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x36803Cu;
    {
        const bool branch_taken_0x36803c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36803Cu;
        // 0x368040: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36803c) {
            ctx->pc = 0x368114u;
            goto label_368114;
        }
    }
    ctx->pc = 0x368044u;
    // 0x368044: 0x0  nop
    ctx->pc = 0x368044u;
    // NOP
label_368048:
    // 0x368048: 0xc0d741e  jal         func_35D078
    ctx->pc = 0x368048u;
    SET_GPR_U32(ctx, 31, 0x368050u);
    ctx->pc = 0x36804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368048u;
    // 0x36804c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D078u, 0x368048u, 0x368050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368050u;
label_368050:
    // 0x368050: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x368050u;
    {
        const bool branch_taken_0x368050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368050) {
            ctx->pc = 0x368054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368050u;
            // 0x368054: 0xe6340010  swc1        $f20, 0x10($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x368068u;
            goto label_368068;
        }
    }
    ctx->pc = 0x368058u;
    // 0x368058: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x368058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x36805c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x36805Cu;
    {
        const bool branch_taken_0x36805c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36805Cu;
        // 0x368060: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36805c) {
            ctx->pc = 0x368114u;
            goto label_368114;
        }
    }
    ctx->pc = 0x368064u;
    // 0x368064: 0x0  nop
    ctx->pc = 0x368064u;
    // NOP
label_368068:
    // 0x368068: 0xa6350014  sh          $s5, 0x14($s1)
    ctx->pc = 0x368068u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 21));
    // 0x36806c: 0xa634001c  sh          $s4, 0x1C($s1)
    ctx->pc = 0x36806cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 20));
    // 0x368070: 0xc0d751a  jal         func_35D468
    ctx->pc = 0x368070u;
    SET_GPR_U32(ctx, 31, 0x368078u);
    ctx->pc = 0x368074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368070u;
    // 0x368074: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D468u, 0x368070u, 0x368078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368078u;
label_368078:
    // 0x368078: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x368078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36807c: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x36807Cu;
    {
        const bool branch_taken_0x36807c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x36807c) {
            ctx->pc = 0x3680ECu;
            goto label_3680ec;
        }
    }
    ctx->pc = 0x368084u;
    // 0x368084: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368088: 0x2131017  dsrav       $v0, $s3, $s0
    ctx->pc = 0x368088u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 19) >> (GPR_U32(ctx, 16) & 0x3F));
    // 0x36808c: 0x0  nop
    ctx->pc = 0x36808cu;
    // NOP
label_368090:
    // 0x368090: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x368090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x368094: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x368094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x368098: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x368098u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x36809c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x36809Cu;
    {
        const bool branch_taken_0x36809c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3680A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36809Cu;
        // 0x3680a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36809c) {
            ctx->pc = 0x3680DCu;
            goto label_3680dc;
        }
    }
    ctx->pc = 0x3680A4u;
    // 0x3680a4: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x3680A4u;
    SET_GPR_U32(ctx, 31, 0x3680ACu);
    ctx->pc = 0x3680A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3680A4u;
    // 0x3680a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x3680A4u, 0x3680ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3680ACu;
label_3680ac:
    // 0x3680ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3680acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3680b0: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x3680b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x3680b4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3680b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3680b8: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x3680b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3680bc: 0xa7b5005c  sh          $s5, 0x5C($sp)
    ctx->pc = 0x3680bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 92), (uint16_t)GPR_U32(ctx, 21));
    // 0x3680c0: 0xc0d738c  jal         func_35CE30
    ctx->pc = 0x3680C0u;
    SET_GPR_U32(ctx, 31, 0x3680C8u);
    ctx->pc = 0x3680C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3680C0u;
    // 0x3680c4: 0xa7b40064  sh          $s4, 0x64($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE30u, 0x3680C0u, 0x3680C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3680C8u;
label_3680c8:
    // 0x3680c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3680c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3680cc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3680ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3680d0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3680d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3680d4: 0xc0da068  jal         func_3681A0
    ctx->pc = 0x3680D4u;
    SET_GPR_U32(ctx, 31, 0x3680DCu);
    ctx->pc = 0x3680D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3680D4u;
    // 0x3680d8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3681A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3681A0u, 0x3680D4u, 0x3680DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3680DCu;
label_3680dc:
    // 0x3680dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3680dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3680e0: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x3680e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3680e4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3680E4u;
    {
        const bool branch_taken_0x3680e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3680E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3680E4u;
        // 0x3680e8: 0x2131017  dsrav       $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 19) >> (GPR_U32(ctx, 16) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3680e4) {
            ctx->pc = 0x368090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368090;
        }
    }
    ctx->pc = 0x3680ECu;
label_3680ec:
    // 0x3680ec: 0x6400008  bltz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3680ECu;
    {
        const bool branch_taken_0x3680ec = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3680F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3680ECu;
        // 0x3680f0: 0x1228c0  sll         $a1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3680ec) {
            ctx->pc = 0x368110u;
            goto label_368110;
        }
    }
    ctx->pc = 0x3680F4u;
    // 0x3680f4: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x3680f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x3680f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3680f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3680fc: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x3680fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x368100: 0x24216478  addiu       $at, $at, 0x6478
    ctx->pc = 0x368100u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 25720));
    // 0x368104: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x368104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x368108: 0xc0d92a8  jal         func_364AA0
    ctx->pc = 0x368108u;
    SET_GPR_U32(ctx, 31, 0x368110u);
    ctx->pc = 0x36810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368108u;
    // 0x36810c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364AA0u, 0x368108u, 0x368110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368110u;
label_368110:
    // 0x368110: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_368114:
    // 0x368114: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x368114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x368118: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x368118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x36811c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x36811cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x368120: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x368120u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x368124: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x368124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x368128: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x368128u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x36812c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x36812cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x368130: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x368130u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x368134: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x368134u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x368138: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x368138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36813c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x36813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x368140: 0x3e00008  jr          $ra
    ctx->pc = 0x368140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368140u;
        // 0x368144: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368148u;
    // 0x368148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36814c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36814cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x368150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368154: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x368154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x368158: 0xc0d741e  jal         func_35D078
    ctx->pc = 0x368158u;
    SET_GPR_U32(ctx, 31, 0x368160u);
    ctx->pc = 0x36815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368158u;
    // 0x36815c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D078u, 0x368158u, 0x368160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368160u;
label_368160:
    // 0x368160: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x368160u;
    {
        const bool branch_taken_0x368160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368160u;
        // 0x368164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368160) {
            ctx->pc = 0x368188u;
            goto label_368188;
        }
    }
    ctx->pc = 0x368168u;
    // 0x368168: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x368168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x36816c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36816cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x368170: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x368170u;
    SET_GPR_U32(ctx, 31, 0x368178u);
    ctx->pc = 0x368174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368170u;
    // 0x368174: 0x24847ab0  addiu       $a0, $a0, 0x7AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x368170u, 0x368178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368178u;
label_368178:
    // 0x368178: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x368178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x36817c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36817Cu;
    {
        const bool branch_taken_0x36817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36817Cu;
        // 0x368180: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36817c) {
            ctx->pc = 0x368190u;
            goto label_368190;
        }
    }
    ctx->pc = 0x368184u;
    // 0x368184: 0x0  nop
    ctx->pc = 0x368184u;
    // NOP
label_368188:
    // 0x368188: 0xc0d8540  jal         func_361500
    ctx->pc = 0x368188u;
    SET_GPR_U32(ctx, 31, 0x368190u);
    ctx->pc = 0x361500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361500u, 0x368188u, 0x368190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368190u;
label_368190:
    // 0x368190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368194: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x368194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368198: 0x3e00008  jr          $ra
    ctx->pc = 0x368198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368198u;
        // 0x36819c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3681A0u;
}

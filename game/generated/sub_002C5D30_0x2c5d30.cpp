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

// Function: sub_002C5D30
// Address: 0x2c5d30 - 0x2c5e70
void sub_002C5D30_0x2c5d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5D30_0x2c5d30");
#endif

    switch (ctx->pc) {
        case 0x2c5d8cu: goto label_2c5d8c;
        case 0x2c5d98u: goto label_2c5d98;
        case 0x2c5e1cu: goto label_2c5e1c;
        default: break;
    }

    ctx->pc = 0x2c5d30u;

    // 0x2c5d30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c5d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c5d34: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2c5d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2c5d38: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c5d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c5d3c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c5d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c5d40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d44: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2c5d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2c5d48: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2c5d48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c5d4c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2c5d4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c5d50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5d54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c5d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c5d58: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x2c5d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5d5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5d5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5d60: 0xc60c00ac  lwc1        $f12, 0xAC($s0)
    ctx->pc = 0x2c5d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c5d64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c5d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5d68: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c5d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c5d6c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2c5d6cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2c5d70: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x2c5d70u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x2c5d74: 0x46016328  max.s       $f12, $f12, $f1
    ctx->pc = 0x2c5d74u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[1]);
    // 0x2c5d78: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2c5d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2c5d7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c5d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c5d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d84: 0xc0b1472  jal         func_2C51C8
    ctx->pc = 0x2C5D84u;
    SET_GPR_U32(ctx, 31, 0x2C5D8Cu);
    ctx->pc = 0x2C5D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5D84u;
    // 0x2c5d88: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C51C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C51C8u, 0x2C5D84u, 0x2C5D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D8Cu;
label_2c5d8c:
    // 0x2c5d8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d90: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x2C5D90u;
    SET_GPR_U32(ctx, 31, 0x2C5D98u);
    ctx->pc = 0x2C5D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5D90u;
    // 0x2c5d94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x2C5D90u, 0x2C5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D98u;
label_2c5d98:
    // 0x2c5d98: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2c5d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2c5d9c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2c5d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5da0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c5da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c5da4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2c5da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5da8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2c5da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5dac: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2c5dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5db0: 0x46001540  add.s       $f21, $f2, $f0
    ctx->pc = 0x2c5db0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c5db4: 0x8e0207c8  lw          $v0, 0x7C8($s0)
    ctx->pc = 0x2c5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
    // 0x2c5db8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C5DB8u;
    {
        const bool branch_taken_0x2c5db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DB8u;
        // 0x2c5dbc: 0x46011d00  add.s       $f20, $f3, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5db8) {
            ctx->pc = 0x2C5E00u;
            goto label_2c5e00;
        }
    }
    ctx->pc = 0x2C5DC0u;
    // 0x2c5dc0: 0x8e0207fc  lw          $v0, 0x7FC($s0)
    ctx->pc = 0x2c5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2044)));
    // 0x2c5dc4: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C5DC4u;
    {
        const bool branch_taken_0x2c5dc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c5dc4) {
            ctx->pc = 0x2C5DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5DC4u;
            // 0x2c5dc8: 0xc6010068  lwc1        $f1, 0x68($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5E04u;
            goto label_2c5e04;
        }
    }
    ctx->pc = 0x2C5DCCu;
    // 0x2c5dcc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2c5dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c5dd0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2c5dd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c5dd4: 0xc60207e0  lwc1        $f2, 0x7E0($s0)
    ctx->pc = 0x2c5dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5dd8: 0xc6000804  lwc1        $f0, 0x804($s0)
    ctx->pc = 0x2c5dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5ddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5de0: 0xc60107e8  lwc1        $f1, 0x7E8($s0)
    ctx->pc = 0x2c5de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5de4: 0x0  nop
    ctx->pc = 0x2c5de4u;
    // NOP
    // 0x2c5de8: 0x0  nop
    ctx->pc = 0x2c5de8u;
    // NOP
    // 0x2c5dec: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2c5decu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x2c5df0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c5df0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5df4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c5df4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c5df8: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2c5df8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2c5dfc: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x2c5dfcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_2c5e00:
    // 0x2c5e00: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2c5e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c5e04:
    // 0x2c5e04: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x2c5e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5e08: 0x8606000e  lh          $a2, 0xE($s0)
    ctx->pc = 0x2c5e08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2c5e0c: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x2c5e0cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x2c5e10: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2c5e10u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2c5e14: 0xc0b73fc  jal         func_2DCFF0
    ctx->pc = 0x2C5E14u;
    SET_GPR_U32(ctx, 31, 0x2C5E1Cu);
    ctx->pc = 0x2C5E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5E14u;
    // 0x2c5e18: 0x63023  negu        $a2, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCFF0u, 0x2C5E14u, 0x2C5E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E1Cu;
label_2c5e1c:
    // 0x2c5e1c: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x2c5e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5e20: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c5e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5e24: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2c5e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5e28: 0x4600a142  mul.s       $f5, $f20, $f0
    ctx->pc = 0x2c5e28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c5e2c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2c5e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5e30: 0x4601a0c2  mul.s       $f3, $f20, $f1
    ctx->pc = 0x2c5e30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2c5e34: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2c5e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c5e38: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2c5e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2c5e3c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2c5e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5e40: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2c5e40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2c5e44: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2c5e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c5e48: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c5e48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c5e4c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2c5e4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2c5e50: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2c5e50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2c5e54: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2c5e54u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2c5e58: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2c5e58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c5e5c: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x2c5e5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c5e60: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c5e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5e64: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E64u;
        // 0x2c5e68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5E6Cu;
    // 0x2c5e6c: 0x0  nop
    ctx->pc = 0x2c5e6cu;
    // NOP
    ctx->pc = 0x2c5e70u;
}

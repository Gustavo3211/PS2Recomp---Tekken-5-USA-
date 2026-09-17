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

// Function: sub_00310DB8
// Address: 0x310db8 - 0x311058
void sub_00310DB8_0x310db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310DB8_0x310db8");
#endif

    switch (ctx->pc) {
        case 0x310e28u: goto label_310e28;
        case 0x310e88u: goto label_310e88;
        case 0x310f78u: goto label_310f78;
        case 0x310fc0u: goto label_310fc0;
        default: break;
    }

    ctx->pc = 0x310db8u;

    // 0x310db8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x310db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310dbc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x310dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x310dc0: 0x46282a  slt         $a1, $v0, $a2
    ctx->pc = 0x310dc0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x310dc4: 0x45300b  movn        $a2, $v0, $a1
    ctx->pc = 0x310dc4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x310dc8: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x310dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x310dcc: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x310DCCu;
    {
        const bool branch_taken_0x310dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x310DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DCCu;
        // 0x310dd0: 0x248d0120  addiu       $t5, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dcc) {
            ctx->pc = 0x310F30u;
            goto label_310f30;
        }
    }
    ctx->pc = 0x310DD4u;
    // 0x310dd4: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x310dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x310dd8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x310dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x310ddc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x310ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x310de0: 0x24a52a50  addiu       $a1, $a1, 0x2A50
    ctx->pc = 0x310de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10832));
    // 0x310de4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x310de4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x310de8: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x310de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x310dec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x310decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x310df0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x310df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x310df4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x310df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x310df8: 0x24842a20  addiu       $a0, $a0, 0x2A20
    ctx->pc = 0x310df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10784));
    // 0x310dfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x310dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x310e00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x310e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x310e04: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x310e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x310e08: 0x467021  addu        $t6, $v0, $a2
    ctx->pc = 0x310e08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x310e0c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x310e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x310e10: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x310e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x310e14: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x310e14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x310e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e1c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x310e1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e20: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x310e20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x310e24: 0x0  nop
    ctx->pc = 0x310e24u;
    // NOP
label_310e28:
    // 0x310e28: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x310e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310e2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x310e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e30: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x310e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310e34: 0xc5440004  lwc1        $f4, 0x4($t2)
    ctx->pc = 0x310e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310e38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x310e38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x310e3c: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x310e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310e40: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x310e40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x310e44: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x310e44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x310e48: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x310e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x310e4c: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x310e4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x310e50: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x310e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x310e54: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x310e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x310e58: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x310e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x310e5c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x310e5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x310e60: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x310e60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x310e64: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x310e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x310e68: 0x0  nop
    ctx->pc = 0x310e68u;
    // NOP
    // 0x310e6c: 0x0  nop
    ctx->pc = 0x310e6cu;
    // NOP
    // 0x310e70: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x310e70u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x310e74: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x310E74u;
    {
        const bool branch_taken_0x310e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x310E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E74u;
        // 0x310e78: 0x46050840  add.s       $f1, $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e74) {
            ctx->pc = 0x310EC0u;
            goto label_310ec0;
        }
    }
    ctx->pc = 0x310E7Cu;
    // 0x310e7c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x310e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x310e80: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x310e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x310e84: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x310e84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
label_310e88:
    // 0x310e88: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x310e88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310e8c: 0x1a64021  addu        $t0, $t5, $a2
    ctx->pc = 0x310e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x310e90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x310e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x310e94: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x310e94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x310e98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x310e98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x310e9c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x310E9Cu;
    {
        const bool branch_taken_0x310e9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E9Cu;
        // 0x310ea0: 0xc7182a  slt         $v1, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e9c) {
            ctx->pc = 0x310EB4u;
            goto label_310eb4;
        }
    }
    ctx->pc = 0x310EA4u;
    // 0x310ea4: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x310ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x310ea8: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x310ea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x310eac: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x310eacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x310eb0: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x310eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_310eb4:
    // 0x310eb4: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x310eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x310eb8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x310EB8u;
    {
        const bool branch_taken_0x310eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x310EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310EB8u;
        // 0x310ebc: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310eb8) {
            ctx->pc = 0x310E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310e88;
        }
    }
    ctx->pc = 0x310EC0u;
label_310ec0:
    // 0x310ec0: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x310ec0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x310ec4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x310ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ec8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x310ec8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x310ecc: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x310eccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x310ed0: 0x581ffd5  bgez        $t4, . + 4 + (-0x2B << 2)
    ctx->pc = 0x310ED0u;
    {
        const bool branch_taken_0x310ed0 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x310ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310ED0u;
        // 0x310ed4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ed0) {
            ctx->pc = 0x310E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310e28;
        }
    }
    ctx->pc = 0x310ED8u;
    // 0x310ed8: 0xc5c1002c  lwc1        $f1, 0x2C($t6)
    ctx->pc = 0x310ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310edc: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x310edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310ee0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x310ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x310ee4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x310ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x310ee8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x310ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x310eec: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x310eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x310ef0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x310ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310ef4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x310ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x310ef8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x310ef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x310efc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x310efcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310f00: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x310f00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x310f04: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x310f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x310f08: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x310F08u;
    {
        const bool branch_taken_0x310f08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310f08) {
            ctx->pc = 0x310F24u;
            goto label_310f24;
        }
    }
    ctx->pc = 0x310F10u;
    // 0x310f10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x310f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x310f14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x310f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x310f18: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x310f18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x310f1c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x310f1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x310f20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x310f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_310f24:
    // 0x310f24: 0x3e00008  jr          $ra
    ctx->pc = 0x310F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F24u;
        // 0x310f28: 0xa1a300ff  sb          $v1, 0xFF($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 255), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310F2Cu;
    // 0x310f2c: 0x0  nop
    ctx->pc = 0x310f2cu;
    // NOP
label_310f30:
    // 0x310f30: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x310f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x310f34: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x310f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x310f38: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x310f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x310f3c: 0x24842a20  addiu       $a0, $a0, 0x2A20
    ctx->pc = 0x310f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10784));
    // 0x310f40: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x310f40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x310f44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x310f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x310f48: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x310f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x310f4c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x310f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x310f50: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x310f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x310f54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x310f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x310f58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x310f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x310f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x310f60: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x310f60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x310f64: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x310f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x310f68: 0x24a52a50  addiu       $a1, $a1, 0x2A50
    ctx->pc = 0x310f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10832));
    // 0x310f6c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x310f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x310f70: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x310f70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f74: 0x0  nop
    ctx->pc = 0x310f74u;
    // NOP
label_310f78:
    // 0x310f78: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x310f78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x310f7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x310f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f80: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x310f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310f84: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x310f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310f88: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x310f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x310f8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x310f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x310f90: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x310f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x310f94: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x310f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x310f98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x310f98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x310f9c: 0x0  nop
    ctx->pc = 0x310f9cu;
    // NOP
    // 0x310fa0: 0x0  nop
    ctx->pc = 0x310fa0u;
    // NOP
    // 0x310fa4: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x310fa4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x310fa8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x310FA8u;
    {
        const bool branch_taken_0x310fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x310FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FA8u;
        // 0x310fac: 0x46040840  add.s       $f1, $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310fa8) {
            ctx->pc = 0x310FF8u;
            goto label_310ff8;
        }
    }
    ctx->pc = 0x310FB0u;
    // 0x310fb0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x310fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x310fb4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x310fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x310fb8: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x310fb8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x310fbc: 0x0  nop
    ctx->pc = 0x310fbcu;
    // NOP
label_310fc0:
    // 0x310fc0: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x310fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310fc4: 0x1a64021  addu        $t0, $t5, $a2
    ctx->pc = 0x310fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x310fc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x310fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x310fcc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x310fccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x310fd0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x310fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x310fd4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x310FD4u;
    {
        const bool branch_taken_0x310fd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FD4u;
        // 0x310fd8: 0xc7182a  slt         $v1, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310fd4) {
            ctx->pc = 0x310FECu;
            goto label_310fec;
        }
    }
    ctx->pc = 0x310FDCu;
    // 0x310fdc: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x310fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x310fe0: 0x46000164  .word       0x46000164                   # cvt.w.s     $f5, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x310fe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x310fe4: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x310fe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x310fe8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x310fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_310fec:
    // 0x310fec: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x310fecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x310ff0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x310FF0u;
    {
        const bool branch_taken_0x310ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x310FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FF0u;
        // 0x310ff4: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ff0) {
            ctx->pc = 0x310FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310fc0;
        }
    }
    ctx->pc = 0x310FF8u;
label_310ff8:
    // 0x310ff8: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x310ff8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x310ffc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x310ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311000: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x311000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x311004: 0x581ffdc  bgez        $t4, . + 4 + (-0x24 << 2)
    ctx->pc = 0x311004u;
    {
        const bool branch_taken_0x311004 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x311008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311004u;
        // 0x311008: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311004) {
            ctx->pc = 0x310F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310f78;
        }
    }
    ctx->pc = 0x31100Cu;
    // 0x31100c: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x31100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311010: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x311010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x311014: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311018: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x311018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31101c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31101cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x311020: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x311020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311024: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x311024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311028: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311028u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31102c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31102cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x311030: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x311030u;
    {
        const bool branch_taken_0x311030 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311030) {
            ctx->pc = 0x31104Cu;
            goto label_31104c;
        }
    }
    ctx->pc = 0x311038u;
    // 0x311038: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x311038u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x31103c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x311040: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311040u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x311044: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x311044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x311048: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x311048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31104c:
    // 0x31104c: 0x3e00008  jr          $ra
    ctx->pc = 0x31104Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31104Cu;
        // 0x311050: 0xa1a300ff  sb          $v1, 0xFF($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 255), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31104Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311054u;
    // 0x311054: 0x0  nop
    ctx->pc = 0x311054u;
    // NOP
    ctx->pc = 0x311058u;
}

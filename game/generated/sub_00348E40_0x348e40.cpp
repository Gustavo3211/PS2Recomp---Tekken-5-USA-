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

// Function: sub_00348E40
// Address: 0x348e40 - 0x349010
void sub_00348E40_0x348e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348E40_0x348e40");
#endif

    switch (ctx->pc) {
        case 0x348e70u: goto label_348e70;
        case 0x348e98u: goto label_348e98;
        case 0x348fa0u: goto label_348fa0;
        default: break;
    }

    ctx->pc = 0x348e40u;

    // 0x348e40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x348e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348e44: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x348e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x348e48: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x348e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x348e4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x348e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x348e50: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x348e50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x348e54: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x348e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x348e58: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x348e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x348e5c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x348e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x348e60: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x348e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x348e64: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x348e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x348e68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x348e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x348e6c: 0x24a2003a  addiu       $v0, $a1, 0x3A
    ctx->pc = 0x348e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 58));
label_348e70:
    // 0x348e70: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x348e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x348e74: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x348e74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x348e78: 0x0  nop
    ctx->pc = 0x348e78u;
    // NOP
    // 0x348e7c: 0x0  nop
    ctx->pc = 0x348e7cu;
    // NOP
    // 0x348e80: 0x0  nop
    ctx->pc = 0x348e80u;
    // NOP
    // 0x348e84: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x348E84u;
    {
        const bool branch_taken_0x348e84 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x348E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E84u;
        // 0x348e88: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348e84) {
            ctx->pc = 0x348E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348e70;
        }
    }
    ctx->pc = 0x348E8Cu;
    // 0x348e8c: 0xa0a00049  sb          $zero, 0x49($a1)
    ctx->pc = 0x348e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x348e90: 0x3e00008  jr          $ra
    ctx->pc = 0x348E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E90u;
        // 0x348e94: 0xa0a00048  sb          $zero, 0x48($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348E98u;
label_348e98:
    // 0x348e98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348e9c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x348e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348ea0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x348EA0u;
    {
        const bool branch_taken_0x348ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x348ea0) {
            ctx->pc = 0x348EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348EA0u;
            // 0x348ea4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x348EBCu;
            goto label_348ebc;
        }
    }
    ctx->pc = 0x348EA8u;
    // 0x348ea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x348ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x348eac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348eb0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x348eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348eb4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x348EB4u;
    {
        const bool branch_taken_0x348eb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x348eb4) {
            ctx->pc = 0x348EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348EB4u;
            // 0x348eb8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x348EBCu;
            goto label_348ebc;
        }
    }
    ctx->pc = 0x348EBCu;
label_348ebc:
    // 0x348ebc: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x348EBCu;
    {
        const bool branch_taken_0x348ebc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x348ebc) {
            ctx->pc = 0x348F08u;
            goto label_348f08;
        }
    }
    ctx->pc = 0x348EC4u;
    // 0x348ec4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x348ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x348ec8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348ecc: 0x46006064  .word       0x46006064                   # cvt.w.s     $f1, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x348eccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x348ed0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x348ed0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x348ed4: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x348ed4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348ed8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x348ED8u;
    {
        const bool branch_taken_0x348ed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x348ed8) {
            ctx->pc = 0x348EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348ED8u;
            // 0x348edc: 0x90820049  lbu         $v0, 0x49($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348EF8u;
            goto label_348ef8;
        }
    }
    ctx->pc = 0x348EE0u;
    // 0x348ee0: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x348ee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x348ee4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x348ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x348ee8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x348ee8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x348eec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x348eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x348ef0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348ef4: 0x90820049  lbu         $v0, 0x49($a0)
    ctx->pc = 0x348ef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
label_348ef8:
    // 0x348ef8: 0xa083003c  sb          $v1, 0x3C($a0)
    ctx->pc = 0x348ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 3));
    // 0x348efc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x348efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x348f00: 0x3e00008  jr          $ra
    ctx->pc = 0x348F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F00u;
        // 0x348f04: 0xa0820049  sb          $v0, 0x49($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 73), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348F08u;
label_348f08:
    // 0x348f08: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x348f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x348f0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348f10: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x348f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x348f14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x348f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x348f18: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x348f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x348f1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x348f1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348f20: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x348f20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x348f24: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x348f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x348f28: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x348F28u;
    {
        const bool branch_taken_0x348f28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x348f28) {
            ctx->pc = 0x348F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348F28u;
            // 0x348f2c: 0x90820049  lbu         $v0, 0x49($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348F48u;
            goto label_348f48;
        }
    }
    ctx->pc = 0x348F30u;
    // 0x348f30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x348f30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x348f34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x348f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x348f38: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x348f38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x348f3c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x348f3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x348f40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348f44: 0x90820049  lbu         $v0, 0x49($a0)
    ctx->pc = 0x348f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
label_348f48:
    // 0x348f48: 0xa083003d  sb          $v1, 0x3D($a0)
    ctx->pc = 0x348f48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 3));
    // 0x348f4c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x348f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x348f50: 0x3e00008  jr          $ra
    ctx->pc = 0x348F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F50u;
        // 0x348f54: 0xa0820049  sb          $v0, 0x49($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 73), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348F58u;
    // 0x348f58: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x348f58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x348f5c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x348f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x348f60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x348F60u;
    {
        const bool branch_taken_0x348f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348f60) {
            ctx->pc = 0x348F78u;
            goto label_348f78;
        }
    }
    ctx->pc = 0x348F68u;
    // 0x348f68: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x348f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x348f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x348F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F6Cu;
        // 0x348f70: 0x8c620060  lw          $v0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348F74u;
    // 0x348f74: 0x0  nop
    ctx->pc = 0x348f74u;
    // NOP
label_348f78:
    // 0x348f78: 0x3e00008  jr          $ra
    ctx->pc = 0x348F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F78u;
        // 0x348f7c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348F80u;
    // 0x348f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x348f84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x348f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x348f88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x348f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x348f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x348f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x348f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x348f98: 0xc0c952e  jal         func_3254B8
    ctx->pc = 0x348F98u;
    SET_GPR_U32(ctx, 31, 0x348FA0u);
    ctx->pc = 0x348F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348F98u;
    // 0x348f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3254B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3254B8u, 0x348F98u, 0x348FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348FA0u;
label_348fa0:
    // 0x348fa0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x348fa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348fa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x348FA4u;
    {
        const bool branch_taken_0x348fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x348FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FA4u;
        // 0x348fa8: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348fa4) {
            ctx->pc = 0x348FB8u;
            goto label_348fb8;
        }
    }
    ctx->pc = 0x348FACu;
    // 0x348fac: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x348facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x348fb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x348FB0u;
    {
        const bool branch_taken_0x348fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FB0u;
        // 0x348fb4: 0x34424000  ori         $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x348fb0) {
            ctx->pc = 0x348FC0u;
            goto label_348fc0;
        }
    }
    ctx->pc = 0x348FB8u;
label_348fb8:
    // 0x348fb8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x348fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x348fbc: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x348fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
label_348fc0:
    // 0x348fc0: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x348fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x348fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348fc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x348fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x348fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x348FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FD0u;
        // 0x348fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348FD8u;
    // 0x348fd8: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x348fd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x348fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x348FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FDCu;
        // 0x348fe0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348FE4u;
    // 0x348fe4: 0x0  nop
    ctx->pc = 0x348fe4u;
    // NOP
    // 0x348fe8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x348FE8u;
    {
        const bool branch_taken_0x348fe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x348FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FE8u;
        // 0x348fec: 0x94820016  lhu         $v0, 0x16($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348fe8) {
            ctx->pc = 0x349000u;
            goto label_349000;
        }
    }
    ctx->pc = 0x348FF0u;
    // 0x348ff0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x348ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x348ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x348FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FF4u;
        // 0x348ff8: 0xa4820016  sh          $v0, 0x16($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348FFCu;
    // 0x348ffc: 0x0  nop
    ctx->pc = 0x348ffcu;
    // NOP
label_349000:
    // 0x349000: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x349000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x349004: 0x3e00008  jr          $ra
    ctx->pc = 0x349004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349004u;
        // 0x349008: 0xa4820016  sh          $v0, 0x16($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34900Cu;
    // 0x34900c: 0x0  nop
    ctx->pc = 0x34900cu;
    // NOP
    ctx->pc = 0x349010u;
}

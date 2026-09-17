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

// Function: sub_0026CAA8
// Address: 0x26caa8 - 0x26cf58
void sub_0026CAA8_0x26caa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CAA8_0x26caa8");
#endif

    switch (ctx->pc) {
        case 0x26cb30u: goto label_26cb30;
        case 0x26cb54u: goto label_26cb54;
        case 0x26cbe8u: goto label_26cbe8;
        case 0x26cbf0u: goto label_26cbf0;
        case 0x26cc10u: goto label_26cc10;
        case 0x26cc18u: goto label_26cc18;
        case 0x26cc68u: goto label_26cc68;
        case 0x26cc88u: goto label_26cc88;
        case 0x26ccfcu: goto label_26ccfc;
        case 0x26cd48u: goto label_26cd48;
        case 0x26cd90u: goto label_26cd90;
        case 0x26cdccu: goto label_26cdcc;
        case 0x26ce20u: goto label_26ce20;
        case 0x26ce84u: goto label_26ce84;
        case 0x26cee0u: goto label_26cee0;
        case 0x26cf04u: goto label_26cf04;
        case 0x26cf38u: goto label_26cf38;
        default: break;
    }

    ctx->pc = 0x26caa8u;

    // 0x26caa8: 0xc780ca30  lwc1        $f0, -0x35D0($gp)
    ctx->pc = 0x26caa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26caac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26caacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26cab0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x26cab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x26cab4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26cab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26cab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26cabc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26cabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cac0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26cac0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26cac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26cac8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26cac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26cacc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26caccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x26cad0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x26cad0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26cad4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26CAD4u;
    {
        const bool branch_taken_0x26cad4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAD4u;
        // 0x26cad8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cad4) {
            ctx->pc = 0x26CAF0u;
            goto label_26caf0;
        }
    }
    ctx->pc = 0x26CADCu;
    // 0x26cadc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26cadcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26cae0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26cae4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26cae4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x26cae8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x26cae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26caec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26caecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_26caf0:
    // 0x26caf0: 0x2c630b87  sltiu       $v1, $v1, 0xB87
    ctx->pc = 0x26caf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2951) ? 1 : 0);
    // 0x26caf4: 0x10600112  beqz        $v1, . + 4 + (0x112 << 2)
    ctx->pc = 0x26CAF4u;
    {
        const bool branch_taken_0x26caf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAF4u;
        // 0x26caf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26caf4) {
            ctx->pc = 0x26CF40u;
            goto label_26cf40;
        }
    }
    ctx->pc = 0x26CAFCu;
    // 0x26cafc: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26cafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26cb00: 0x8ca202ac  lw          $v0, 0x2AC($a1)
    ctx->pc = 0x26cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 684)));
    // 0x26cb04: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26CB04u;
    {
        const bool branch_taken_0x26cb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB04u;
        // 0x26cb08: 0x24020217  addiu       $v0, $zero, 0x217 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb04) {
            ctx->pc = 0x26CB60u;
            goto label_26cb60;
        }
    }
    ctx->pc = 0x26CB0Cu;
    // 0x26cb0c: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x26cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x26cb10: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26CB10u;
    {
        const bool branch_taken_0x26cb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26cb10) {
            ctx->pc = 0x26CB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CB10u;
            // 0x26cb14: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CB3Cu;
            goto label_26cb3c;
        }
    }
    ctx->pc = 0x26CB18u;
    // 0x26cb18: 0x8ca203c8  lw          $v0, 0x3C8($a1)
    ctx->pc = 0x26cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 968)));
    // 0x26cb1c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26CB1Cu;
    {
        const bool branch_taken_0x26cb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cb1c) {
            ctx->pc = 0x26CB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CB1Cu;
            // 0x26cb20: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CB3Cu;
            goto label_26cb3c;
        }
    }
    ctx->pc = 0x26CB24u;
    // 0x26cb24: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26cb28: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26CB28u;
    SET_GPR_U32(ctx, 31, 0x26CB30u);
    ctx->pc = 0x26CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB28u;
    // 0x26cb2c: 0x2484c760  addiu       $a0, $a0, -0x38A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26CB28u, 0x26CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB30u;
label_26cb30:
    // 0x26cb30: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26cb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26cb34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26cb34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb38: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x26cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_26cb3c:
    // 0x26cb3c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x26cb3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26cb40: 0x544000ff  bnel        $v0, $zero, . + 4 + (0xFF << 2)
    ctx->pc = 0x26CB40u;
    {
        const bool branch_taken_0x26cb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cb40) {
            ctx->pc = 0x26CB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CB40u;
            // 0x26cb44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CF40u;
            goto label_26cf40;
        }
    }
    ctx->pc = 0x26CB48u;
    // 0x26cb48: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26cb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26cb4c: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26CB4Cu;
    SET_GPR_U32(ctx, 31, 0x26CB54u);
    ctx->pc = 0x26CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB4Cu;
    // 0x26cb50: 0x2484c7d8  addiu       $a0, $a0, -0x3828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26CB4Cu, 0x26CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB54u;
label_26cb54:
    // 0x26cb54: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x26CB54u;
    {
        const bool branch_taken_0x26cb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB54u;
        // 0x26cb58: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb54) {
            ctx->pc = 0x26CF3Cu;
            goto label_26cf3c;
        }
    }
    ctx->pc = 0x26CB5Cu;
    // 0x26cb5c: 0x0  nop
    ctx->pc = 0x26cb5cu;
    // NOP
label_26cb60:
    // 0x26cb60: 0x8ca2029c  lw          $v0, 0x29C($a1)
    ctx->pc = 0x26cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 668)));
    // 0x26cb64: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x26CB64u;
    {
        const bool branch_taken_0x26cb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB64u;
        // 0x26cb68: 0x2402031f  addiu       $v0, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb64) {
            ctx->pc = 0x26CF0Cu;
            goto label_26cf0c;
        }
    }
    ctx->pc = 0x26CB6Cu;
    // 0x26cb6c: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x26cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x26cb70: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x26CB70u;
    {
        const bool branch_taken_0x26cb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB70u;
        // 0x26cb74: 0x2c620320  sltiu       $v0, $v1, 0x320 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)800) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb70) {
            ctx->pc = 0x26CC80u;
            goto label_26cc80;
        }
    }
    ctx->pc = 0x26CB78u;
    // 0x26cb78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26CB78u;
    {
        const bool branch_taken_0x26cb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB78u;
        // 0x26cb7c: 0x24020512  addiu       $v0, $zero, 0x512 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb78) {
            ctx->pc = 0x26CBA0u;
            goto label_26cba0;
        }
    }
    ctx->pc = 0x26CB80u;
    // 0x26cb80: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x26cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x26cb84: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x26CB84u;
    {
        const bool branch_taken_0x26cb84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB84u;
        // 0x26cb88: 0x24020217  addiu       $v0, $zero, 0x217 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb84) {
            ctx->pc = 0x26CD70u;
            goto label_26cd70;
        }
    }
    ctx->pc = 0x26CB8Cu;
    // 0x26cb8c: 0x5062003a  beql        $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x26CB8Cu;
    {
        const bool branch_taken_0x26cb8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26cb8c) {
            ctx->pc = 0x26CB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CB8Cu;
            // 0x26cb90: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CC78u;
            goto label_26cc78;
        }
    }
    ctx->pc = 0x26CB94u;
    // 0x26cb94: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x26CB94u;
    {
        const bool branch_taken_0x26cb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB94u;
        // 0x26cb98: 0x8ca2002c  lw          $v0, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb94) {
            ctx->pc = 0x26CF10u;
            goto label_26cf10;
        }
    }
    ctx->pc = 0x26CB9Cu;
    // 0x26cb9c: 0x0  nop
    ctx->pc = 0x26cb9cu;
    // NOP
label_26cba0:
    // 0x26cba0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CBA0u;
    {
        const bool branch_taken_0x26cba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBA0u;
        // 0x26cba4: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cba0) {
            ctx->pc = 0x26CBB8u;
            goto label_26cbb8;
        }
    }
    ctx->pc = 0x26CBA8u;
    // 0x26cba8: 0x506200cb  beql        $v1, $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x26CBA8u;
    {
        const bool branch_taken_0x26cba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26cba8) {
            ctx->pc = 0x26CBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CBA8u;
            // 0x26cbac: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CED8u;
            goto label_26ced8;
        }
    }
    ctx->pc = 0x26CBB0u;
    // 0x26cbb0: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x26CBB0u;
    {
        const bool branch_taken_0x26cbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBB0u;
        // 0x26cbb4: 0x8ca2002c  lw          $v0, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbb0) {
            ctx->pc = 0x26CF10u;
            goto label_26cf10;
        }
    }
    ctx->pc = 0x26CBB8u;
label_26cbb8:
    // 0x26cbb8: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x26cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26cbbc: 0x24032821  addiu       $v1, $zero, 0x2821
    ctx->pc = 0x26cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10273));
    // 0x26cbc0: 0x944400cc  lhu         $a0, 0xCC($v0)
    ctx->pc = 0x26cbc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x26cbc4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CBC4u;
    {
        const bool branch_taken_0x26cbc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBC4u;
        // 0x26cbc8: 0x24023029  addiu       $v0, $zero, 0x3029 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12329));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbc4) {
            ctx->pc = 0x26CBD4u;
            goto label_26cbd4;
        }
    }
    ctx->pc = 0x26CBCCu;
    // 0x26cbcc: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26CBCCu;
    {
        const bool branch_taken_0x26cbcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26cbcc) {
            ctx->pc = 0x26CBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CBCCu;
            // 0x26cbd0: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CBE0u;
            goto label_26cbe0;
        }
    }
    ctx->pc = 0x26CBD4u;
label_26cbd4:
    // 0x26cbd4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26cbd8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x26CBD8u;
    {
        const bool branch_taken_0x26cbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBD8u;
        // 0x26cbdc: 0x2484c760  addiu       $a0, $a0, -0x38A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbd8) {
            ctx->pc = 0x26CD88u;
            goto label_26cd88;
        }
    }
    ctx->pc = 0x26CBE0u;
label_26cbe0:
    // 0x26cbe0: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26CBE0u;
    SET_GPR_U32(ctx, 31, 0x26CBE8u);
    ctx->pc = 0x26CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBE0u;
    // 0x26cbe4: 0x2484c730  addiu       $a0, $a0, -0x38D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26CBE0u, 0x26CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBE8u;
label_26cbe8:
    // 0x26cbe8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26CBE8u;
    SET_GPR_U32(ctx, 31, 0x26CBF0u);
    ctx->pc = 0x26CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBE8u;
    // 0x26cbec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26CBE8u, 0x26CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBF0u;
label_26cbf0:
    // 0x26cbf0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26cbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26cbf4: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x26cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x26cbf8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x26cbf8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26cbfc: 0x2010  mfhi        $a0
    ctx->pc = 0x26cbfcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x26cc00: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26CC00u;
    {
        const bool branch_taken_0x26cc00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC00u;
        // 0x26cc04: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc00) {
            ctx->pc = 0x26CC50u;
            goto label_26cc50;
        }
    }
    ctx->pc = 0x26CC08u;
    // 0x26cc08: 0xc09d3b6  jal         func_274ED8
    ctx->pc = 0x26CC08u;
    SET_GPR_U32(ctx, 31, 0x26CC10u);
    ctx->pc = 0x274ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274ED8u, 0x26CC08u, 0x26CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC10u;
label_26cc10:
    // 0x26cc10: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26CC10u;
    SET_GPR_U32(ctx, 31, 0x26CC18u);
    ctx->pc = 0x26CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CC10u;
    // 0x26cc14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26CC10u, 0x26CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC18u;
label_26cc18:
    // 0x26cc18: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x26cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x26cc1c: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26cc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26cc20: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x26cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26cc24: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x26cc24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x26cc28: 0x8ca403c8  lw          $a0, 0x3C8($a1)
    ctx->pc = 0x26cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 968)));
    // 0x26cc2c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x26cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26cc30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26cc34: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x26cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26cc38: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x26cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x26cc3c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26cc3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26cc40: 0x504000aa  beql        $v0, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x26CC40u;
    {
        const bool branch_taken_0x26cc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cc40) {
            ctx->pc = 0x26CC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CC40u;
            // 0x26cc44: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CEECu;
            goto label_26ceec;
        }
    }
    ctx->pc = 0x26CC48u;
    // 0x26cc48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26CC48u;
    {
        const bool branch_taken_0x26cc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC48u;
        // 0x26cc4c: 0x8ca203c8  lw          $v0, 0x3C8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc48) {
            ctx->pc = 0x26CC54u;
            goto label_26cc54;
        }
    }
    ctx->pc = 0x26CC50u;
label_26cc50:
    // 0x26cc50: 0x8ca203c8  lw          $v0, 0x3C8($a1)
    ctx->pc = 0x26cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 968)));
label_26cc54:
    // 0x26cc54: 0x504000a5  beql        $v0, $zero, . + 4 + (0xA5 << 2)
    ctx->pc = 0x26CC54u;
    {
        const bool branch_taken_0x26cc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cc54) {
            ctx->pc = 0x26CC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CC54u;
            // 0x26cc58: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CEECu;
            goto label_26ceec;
        }
    }
    ctx->pc = 0x26CC5Cu;
    // 0x26cc5c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26cc60: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26CC60u;
    SET_GPR_U32(ctx, 31, 0x26CC68u);
    ctx->pc = 0x26CC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CC60u;
    // 0x26cc64: 0x2484c760  addiu       $a0, $a0, -0x38A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26CC60u, 0x26CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC68u;
label_26cc68:
    // 0x26cc68: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26cc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26cc6c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x26CC6Cu;
    {
        const bool branch_taken_0x26cc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC6Cu;
        // 0x26cc70: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc6c) {
            ctx->pc = 0x26CEE8u;
            goto label_26cee8;
        }
    }
    ctx->pc = 0x26CC74u;
    // 0x26cc74: 0x0  nop
    ctx->pc = 0x26cc74u;
    // NOP
label_26cc78:
    // 0x26cc78: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x26CC78u;
    {
        const bool branch_taken_0x26cc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC78u;
        // 0x26cc7c: 0x2484c730  addiu       $a0, $a0, -0x38D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc78) {
            ctx->pc = 0x26CD88u;
            goto label_26cd88;
        }
    }
    ctx->pc = 0x26CC80u;
label_26cc80:
    // 0x26cc80: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26CC80u;
    SET_GPR_U32(ctx, 31, 0x26CC88u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26CC80u, 0x26CC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC88u;
label_26cc88:
    // 0x26cc88: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x26cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x26cc8c: 0x24728858  addiu       $s2, $v1, -0x77A8
    ctx->pc = 0x26cc8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x26cc90: 0x24053fff  addiu       $a1, $zero, 0x3FFF
    ctx->pc = 0x26cc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x26cc94: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x26cc94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x26cc98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26cc9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26cca0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x26cca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x26cca4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26cca8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x26cca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26ccac: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x26ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26ccb0: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x26ccb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x26ccb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26CCB4u;
    {
        const bool branch_taken_0x26ccb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCB4u;
        // 0x26ccb8: 0xae430064  sw          $v1, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccb4) {
            ctx->pc = 0x26CCC8u;
            goto label_26ccc8;
        }
    }
    ctx->pc = 0x26CCBCu;
    // 0x26ccbc: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26ccc0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x26CCC0u;
    {
        const bool branch_taken_0x26ccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCC0u;
        // 0x26ccc4: 0x2484c730  addiu       $a0, $a0, -0x38D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccc0) {
            ctx->pc = 0x26CD88u;
            goto label_26cd88;
        }
    }
    ctx->pc = 0x26CCC8u;
label_26ccc8:
    // 0x26ccc8: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26cccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ccd0: 0xac820268  sw          $v0, 0x268($a0)
    ctx->pc = 0x26ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 2));
    // 0x26ccd4: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x26ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x26ccd8: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x26ccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x26ccdc: 0x84650096  lh          $a1, 0x96($v1)
    ctx->pc = 0x26ccdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x26cce0: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x26cce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x26cce4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x26cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26cce8: 0x2451fffc  addiu       $s1, $v0, -0x4
    ctx->pc = 0x26cce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x26ccec: 0x1a200012  blez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x26CCECu;
    {
        const bool branch_taken_0x26ccec = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x26ccec) {
            ctx->pc = 0x26CD38u;
            goto label_26cd38;
        }
    }
    ctx->pc = 0x26CCF4u;
    // 0x26ccf4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26CCF4u;
    SET_GPR_U32(ctx, 31, 0x26CCFCu);
    ctx->pc = 0x26CCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CCF4u;
    // 0x26ccf8: 0x8f90aa78  lw          $s0, -0x5588($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26CCF4u, 0x26CCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCFCu;
label_26ccfc:
    // 0x26ccfc: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x26ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x26cd00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26cd04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26cd08: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x26cd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x26cd0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26cd10: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x26cd10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26cd14: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x26cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26cd18: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x26cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x26cd1c: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x26cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x26cd20: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x26cd20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x26cd24: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x26cd24u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x26cd28: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x26cd28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x26cd2c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26cd30: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x26CD30u;
    {
        const bool branch_taken_0x26cd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD30u;
        // 0x26cd34: 0xae02026c  sw          $v0, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd30) {
            ctx->pc = 0x26CED0u;
            goto label_26ced0;
        }
    }
    ctx->pc = 0x26CD38u;
label_26cd38:
    // 0x26cd38: 0x58400064  blezl       $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x26CD38u;
    {
        const bool branch_taken_0x26cd38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26cd38) {
            ctx->pc = 0x26CD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CD38u;
            // 0x26cd3c: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CECCu;
            goto label_26cecc;
        }
    }
    ctx->pc = 0x26CD40u;
    // 0x26cd40: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26CD40u;
    SET_GPR_U32(ctx, 31, 0x26CD48u);
    ctx->pc = 0x26CD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CD40u;
    // 0x26cd44: 0x8f90aa78  lw          $s0, -0x5588($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26CD40u, 0x26CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD48u;
label_26cd48:
    // 0x26cd48: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x26cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x26cd4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26cd50: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x26cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26cd54: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x26cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26cd58: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x26cd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x26cd5c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x26cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x26cd60: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x26cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x26cd64: 0xae440064  sw          $a0, 0x64($s2)
    ctx->pc = 0x26cd64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 4));
    // 0x26cd68: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x26CD68u;
    {
        const bool branch_taken_0x26cd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD68u;
        // 0x26cd6c: 0xae02026c  sw          $v0, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd68) {
            ctx->pc = 0x26CED0u;
            goto label_26ced0;
        }
    }
    ctx->pc = 0x26CD70u;
label_26cd70:
    // 0x26cd70: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x26cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x26cd74: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x26cd74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26cd78: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26CD78u;
    {
        const bool branch_taken_0x26cd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD78u;
        // 0x26cd7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd78) {
            ctx->pc = 0x26CDA0u;
            goto label_26cda0;
        }
    }
    ctx->pc = 0x26CD80u;
    // 0x26cd80: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26cd84: 0x2484c7d8  addiu       $a0, $a0, -0x3828
    ctx->pc = 0x26cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952920));
label_26cd88:
    // 0x26cd88: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26CD88u;
    SET_GPR_U32(ctx, 31, 0x26CD90u);
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26CD88u, 0x26CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD90u;
label_26cd90:
    // 0x26cd90: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26cd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26cd94: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x26CD94u;
    {
        const bool branch_taken_0x26cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD94u;
        // 0x26cd98: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd94) {
            ctx->pc = 0x26CF0Cu;
            goto label_26cf0c;
        }
    }
    ctx->pc = 0x26CD9Cu;
    // 0x26cd9c: 0x0  nop
    ctx->pc = 0x26cd9cu;
    // NOP
label_26cda0:
    // 0x26cda0: 0xaca20268  sw          $v0, 0x268($a1)
    ctx->pc = 0x26cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 616), GPR_U32(ctx, 2));
    // 0x26cda4: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x26cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x26cda8: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x26cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x26cdac: 0x84650096  lh          $a1, 0x96($v1)
    ctx->pc = 0x26cdacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x26cdb0: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x26cdb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x26cdb4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x26cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26cdb8: 0x2451fffc  addiu       $s1, $v0, -0x4
    ctx->pc = 0x26cdb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x26cdbc: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x26CDBCu;
    {
        const bool branch_taken_0x26cdbc = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x26cdbc) {
            ctx->pc = 0x26CE10u;
            goto label_26ce10;
        }
    }
    ctx->pc = 0x26CDC4u;
    // 0x26cdc4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26CDC4u;
    SET_GPR_U32(ctx, 31, 0x26CDCCu);
    ctx->pc = 0x26CDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CDC4u;
    // 0x26cdc8: 0x8f90aa78  lw          $s0, -0x5588($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26CDC4u, 0x26CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDCCu;
label_26cdcc:
    // 0x26cdcc: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x26cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x26cdd0: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x26cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x26cdd4: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x26cdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x26cdd8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26cddc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26cde0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x26cde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x26cde4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26cde8: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x26cde8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26cdec: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x26cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26cdf0: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x26cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x26cdf4: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x26cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x26cdf8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x26cdf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x26cdfc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x26cdfcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x26ce00: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x26ce00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x26ce04: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26ce08: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26CE08u;
    {
        const bool branch_taken_0x26ce08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE08u;
        // 0x26ce0c: 0xae02026c  sw          $v0, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce08) {
            ctx->pc = 0x26CE54u;
            goto label_26ce54;
        }
    }
    ctx->pc = 0x26CE10u;
label_26ce10:
    // 0x26ce10: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26CE10u;
    {
        const bool branch_taken_0x26ce10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE10u;
        // 0x26ce14: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce10) {
            ctx->pc = 0x26CE50u;
            goto label_26ce50;
        }
    }
    ctx->pc = 0x26CE18u;
    // 0x26ce18: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26CE18u;
    SET_GPR_U32(ctx, 31, 0x26CE20u);
    ctx->pc = 0x26CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE18u;
    // 0x26ce1c: 0x8f90aa78  lw          $s0, -0x5588($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26CE18u, 0x26CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE20u;
label_26ce20:
    // 0x26ce20: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x26ce20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x26ce24: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x26ce24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x26ce28: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x26ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x26ce2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26ce30: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x26ce30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26ce34: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x26ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26ce38: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x26ce38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x26ce3c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x26ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x26ce40: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x26ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x26ce44: 0xaca40064  sw          $a0, 0x64($a1)
    ctx->pc = 0x26ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 4));
    // 0x26ce48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26CE48u;
    {
        const bool branch_taken_0x26ce48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE48u;
        // 0x26ce4c: 0xae02026c  sw          $v0, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce48) {
            ctx->pc = 0x26CE54u;
            goto label_26ce54;
        }
    }
    ctx->pc = 0x26CE50u;
label_26ce50:
    // 0x26ce50: 0xac40026c  sw          $zero, 0x26C($v0)
    ctx->pc = 0x26ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 0));
label_26ce54:
    // 0x26ce54: 0x8f85aa80  lw          $a1, -0x5580($gp)
    ctx->pc = 0x26ce54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x26ce58: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x26ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x26ce5c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x26ce5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x26ce60: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x26ce60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x26ce64: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x26ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x26ce68: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x26ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x26ce6c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x26ce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x26ce70: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x26ce70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x26ce74: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x26CE74u;
    {
        const bool branch_taken_0x26ce74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE74u;
        // 0x26ce78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce74) {
            ctx->pc = 0x26CF40u;
            goto label_26cf40;
        }
    }
    ctx->pc = 0x26CE7Cu;
    // 0x26ce7c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26CE7Cu;
    SET_GPR_U32(ctx, 31, 0x26CE84u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26CE7Cu, 0x26CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE84u;
label_26ce84:
    // 0x26ce84: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x26ce84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x26ce88: 0x24c38858  addiu       $v1, $a2, -0x77A8
    ctx->pc = 0x26ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x26ce8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ce8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce90: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x26ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A888Cu));
    // 0x26ce94: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26ce94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26ce98: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x26ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26ce9c: 0x2c430004  sltiu       $v1, $v0, 0x4
    ctx->pc = 0x26ce9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x26cea0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CEA0u;
    {
        const bool branch_taken_0x26cea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cea0) {
            ctx->pc = 0x26CEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CEA0u;
            // 0x26cea4: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CEB0u;
            goto label_26ceb0;
        }
    }
    ctx->pc = 0x26CEA8u;
    // 0x26cea8: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x26cea8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x26ceac: 0x1010  mfhi        $v0
    ctx->pc = 0x26ceacu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_26ceb0:
    // 0x26ceb0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x26CEB0u;
    {
        const bool branch_taken_0x26ceb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CEB0u;
        // 0x26ceb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ceb0) {
            ctx->pc = 0x26CF40u;
            goto label_26cf40;
        }
    }
    ctx->pc = 0x26CEB8u;
    // 0x26ceb8: 0x24c28858  addiu       $v0, $a2, -0x77A8
    ctx->pc = 0x26ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x26cebc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x26cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x26cec0: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x26CEC0u;
    {
        const bool branch_taken_0x26cec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cec0) {
            ctx->pc = 0x26CEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CEC0u;
            // 0x26cec4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CF40u;
            goto label_26cf40;
        }
    }
    ctx->pc = 0x26CEC8u;
    // 0x26cec8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26cecc:
    // 0x26cecc: 0xac40026c  sw          $zero, 0x26C($v0)
    ctx->pc = 0x26ceccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 0));
label_26ced0:
    // 0x26ced0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26CED0u;
    {
        const bool branch_taken_0x26ced0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CED0u;
        // 0x26ced4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ced0) {
            ctx->pc = 0x26CF40u;
            goto label_26cf40;
        }
    }
    ctx->pc = 0x26CED8u;
label_26ced8:
    // 0x26ced8: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26CED8u;
    SET_GPR_U32(ctx, 31, 0x26CEE0u);
    ctx->pc = 0x26CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CED8u;
    // 0x26cedc: 0x2484c760  addiu       $a0, $a0, -0x38A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26CED8u, 0x26CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CEE0u;
label_26cee0:
    // 0x26cee0: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26cee4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26cee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26cee8:
    // 0x26cee8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x26cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_26ceec:
    // 0x26ceec: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x26ceecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26cef0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26CEF0u;
    {
        const bool branch_taken_0x26cef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cef0) {
            ctx->pc = 0x26CEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CEF0u;
            // 0x26cef4: 0x8ca2002c  lw          $v0, 0x2C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CF10u;
            goto label_26cf10;
        }
    }
    ctx->pc = 0x26CEF8u;
    // 0x26cef8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26cef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26cefc: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26CEFCu;
    SET_GPR_U32(ctx, 31, 0x26CF04u);
    ctx->pc = 0x26CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CEFCu;
    // 0x26cf00: 0x2484c7d8  addiu       $a0, $a0, -0x3828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26CEFCu, 0x26CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF04u;
label_26cf04:
    // 0x26cf04: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26cf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26cf08: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x26cf08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_26cf0c:
    // 0x26cf0c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x26cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_26cf10:
    // 0x26cf10: 0x2842ffba  slti        $v0, $v0, -0x46
    ctx->pc = 0x26cf10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967226) ? 1 : 0);
    // 0x26cf14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26CF14u;
    {
        const bool branch_taken_0x26cf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF14u;
        // 0x26cf18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf14) {
            ctx->pc = 0x26CF40u;
            goto label_26cf40;
        }
    }
    ctx->pc = 0x26CF1Cu;
    // 0x26cf1c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x26cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x26cf20: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x26cf20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26cf24: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26CF24u;
    {
        const bool branch_taken_0x26cf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cf24) {
            ctx->pc = 0x26CF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CF24u;
            // 0x26cf28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CF40u;
            goto label_26cf40;
        }
    }
    ctx->pc = 0x26CF2Cu;
    // 0x26cf2c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26cf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26cf30: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26CF30u;
    SET_GPR_U32(ctx, 31, 0x26CF38u);
    ctx->pc = 0x26CF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF30u;
    // 0x26cf34: 0x2484c7d8  addiu       $a0, $a0, -0x3828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26CF30u, 0x26CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF38u;
label_26cf38:
    // 0x26cf38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26cf38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26cf3c:
    // 0x26cf3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26cf3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26cf40:
    // 0x26cf40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26cf40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cf44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26cf44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26cf48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26cf48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26cf4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x26cf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26cf50: 0x3e00008  jr          $ra
    ctx->pc = 0x26CF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF50u;
        // 0x26cf54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26CF58u;
}

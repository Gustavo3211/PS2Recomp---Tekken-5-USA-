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

// Function: sub_00514330
// Address: 0x514330 - 0x514510
void sub_00514330_0x514330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00514330_0x514330");
#endif

    ctx->pc = 0x514330u;

    // 0x514330: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x514330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x514334: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x514334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x514338: 0x1443003a  bne         $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x514338u;
    {
        const bool branch_taken_0x514338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x51433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514338u;
        // 0x51433c: 0x2484012f  addiu       $a0, $a0, 0x12F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 303));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514338) {
            ctx->pc = 0x514424u;
            goto label_514424;
        }
    }
    ctx->pc = 0x514340u;
    // 0x514340: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x514340u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x514344: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x514344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x514348: 0x2c620090  sltiu       $v0, $v1, 0x90
    ctx->pc = 0x514348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x51434c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x51434Cu;
    {
        const bool branch_taken_0x51434c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x514350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51434Cu;
        // 0x514350: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51434c) {
            ctx->pc = 0x5143C0u;
            goto label_5143c0;
        }
    }
    ctx->pc = 0x514354u;
    // 0x514354: 0x24a20071  addiu       $v0, $a1, 0x71
    ctx->pc = 0x514354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 113));
    // 0x514358: 0x3c013f91  lui         $at, 0x3F91
    ctx->pc = 0x514358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16273 << 16));
    // 0x51435c: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x51435cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x514360: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x514360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x514364: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x514364u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x514368: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x514368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x51436c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51436cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x514370: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x514370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x514374: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x514374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x514378: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x514378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x51437c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x51437cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x514380: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x514380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x514384: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x514384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x514388: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x514388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x51438c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x51438cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x514390: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x514390u;
    {
        const bool branch_taken_0x514390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x514390) {
            ctx->pc = 0x514394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x514390u;
            // 0x514394: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x514398u;
            goto label_514398;
        }
    }
    ctx->pc = 0x514398u;
label_514398:
    // 0x514398: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x514398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x51439c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x51439cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5143a0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5143a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x5143a4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x5143a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x5143a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x5143a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5143ac: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x5143ACu;
    {
        const bool branch_taken_0x5143ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5143ac) {
            ctx->pc = 0x5143B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5143ACu;
            // 0x5143b0: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x514424u;
            goto label_514424;
        }
    }
    ctx->pc = 0x5143B4u;
    // 0x5143b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x5143B4u;
    {
        const bool branch_taken_0x5143b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5143B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5143B4u;
        // 0x5143b8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5143b4) {
            ctx->pc = 0x514408u;
            goto label_514408;
        }
    }
    ctx->pc = 0x5143BCu;
    // 0x5143bc: 0x0  nop
    ctx->pc = 0x5143bcu;
    // NOP
label_5143c0:
    // 0x5143c0: 0x2c62006f  sltiu       $v0, $v1, 0x6F
    ctx->pc = 0x5143c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)111) ? 1 : 0);
    // 0x5143c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x5143C4u;
    {
        const bool branch_taken_0x5143c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5143C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5143C4u;
        // 0x5143c8: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5143c4) {
            ctx->pc = 0x514420u;
            goto label_514420;
        }
    }
    ctx->pc = 0x5143CCu;
    // 0x5143cc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x5143ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5143d0: 0x3c013f91  lui         $at, 0x3F91
    ctx->pc = 0x5143d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16273 << 16));
    // 0x5143d4: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x5143d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x5143d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x5143d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5143dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5143dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5143e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5143e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x5143e4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x5143e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x5143e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x5143e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x5143ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5143ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x5143f0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x5143f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5143f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5143f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x5143f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x5143f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x5143fc: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x5143FCu;
    {
        const bool branch_taken_0x5143fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5143fc) {
            ctx->pc = 0x514400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5143FCu;
            // 0x514400: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x514424u;
            goto label_514424;
        }
    }
    ctx->pc = 0x514404u;
    // 0x514404: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x514404u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_514408:
    // 0x514408: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x514408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x51440c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x51440cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x514410: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x514410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x514414: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x514414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x514418: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x514418u;
    {
        const bool branch_taken_0x514418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514418u;
        // 0x51441c: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514418) {
            ctx->pc = 0x514424u;
            goto label_514424;
        }
    }
    ctx->pc = 0x514420u;
label_514420:
    // 0x514420: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x514420u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_514424:
    // 0x514424: 0x3e00008  jr          $ra
    ctx->pc = 0x514424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x514428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514424u;
        // 0x514428: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x51442Cu;
    // 0x51442c: 0x0  nop
    ctx->pc = 0x51442cu;
    // NOP
    // 0x514430: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x514430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x514434: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x514434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x514438: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x514438u;
    {
        const bool branch_taken_0x514438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x51443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514438u;
        // 0x51443c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514438) {
            ctx->pc = 0x51445Cu;
            goto label_51445c;
        }
    }
    ctx->pc = 0x514440u;
    // 0x514440: 0x9084012e  lbu         $a0, 0x12E($a0)
    ctx->pc = 0x514440u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 302)));
    // 0x514444: 0x2c8200f0  sltiu       $v0, $a0, 0xF0
    ctx->pc = 0x514444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
    // 0x514448: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x514448u;
    {
        const bool branch_taken_0x514448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514448u;
        // 0x51444c: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514448) {
            ctx->pc = 0x514458u;
            goto label_514458;
        }
    }
    ctx->pc = 0x514450u;
    // 0x514450: 0x9062aa38  lbu         $v0, -0x55C8($v1)
    ctx->pc = 0x514450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294945336)));
    // 0x514454: 0x2c4500e1  sltiu       $a1, $v0, 0xE1
    ctx->pc = 0x514454u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
label_514458:
    // 0x514458: 0xa064aa38  sb          $a0, -0x55C8($v1)
    ctx->pc = 0x514458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294945336), (uint8_t)GPR_U32(ctx, 4));
label_51445c:
    // 0x51445c: 0x3e00008  jr          $ra
    ctx->pc = 0x51445Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x514460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51445Cu;
        // 0x514460: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x51445Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x514464u;
    // 0x514464: 0x0  nop
    ctx->pc = 0x514464u;
    // NOP
    // 0x514468: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x514468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x51446c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x51446cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x514470: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x514470u;
    {
        const bool branch_taken_0x514470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x514474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514470u;
        // 0x514474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514470) {
            ctx->pc = 0x514498u;
            goto label_514498;
        }
    }
    ctx->pc = 0x514478u;
    // 0x514478: 0x9084012e  lbu         $a0, 0x12E($a0)
    ctx->pc = 0x514478u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 302)));
    // 0x51447c: 0x2c820011  sltiu       $v0, $a0, 0x11
    ctx->pc = 0x51447cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x514480: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x514480u;
    {
        const bool branch_taken_0x514480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x514484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514480u;
        // 0x514484: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514480) {
            ctx->pc = 0x514494u;
            goto label_514494;
        }
    }
    ctx->pc = 0x514488u;
    // 0x514488: 0x9062aa39  lbu         $v0, -0x55C7($v1)
    ctx->pc = 0x514488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294945337)));
    // 0x51448c: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x51448cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x514490: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x514490u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_514494:
    // 0x514494: 0xa064aa39  sb          $a0, -0x55C7($v1)
    ctx->pc = 0x514494u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294945337), (uint8_t)GPR_U32(ctx, 4));
label_514498:
    // 0x514498: 0x3e00008  jr          $ra
    ctx->pc = 0x514498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514498u;
        // 0x51449c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5144A0u;
    // 0x5144a0: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x5144a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x5144a4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x5144a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x5144a8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x5144A8u;
    {
        const bool branch_taken_0x5144a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x5144ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5144A8u;
        // 0x5144ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5144a8) {
            ctx->pc = 0x5144CCu;
            goto label_5144cc;
        }
    }
    ctx->pc = 0x5144B0u;
    // 0x5144b0: 0x9084012f  lbu         $a0, 0x12F($a0)
    ctx->pc = 0x5144b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 303)));
    // 0x5144b4: 0x2c8200f0  sltiu       $v0, $a0, 0xF0
    ctx->pc = 0x5144b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
    // 0x5144b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5144B8u;
    {
        const bool branch_taken_0x5144b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5144BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5144B8u;
        // 0x5144bc: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5144b8) {
            ctx->pc = 0x5144C8u;
            goto label_5144c8;
        }
    }
    ctx->pc = 0x5144C0u;
    // 0x5144c0: 0x9062aa3a  lbu         $v0, -0x55C6($v1)
    ctx->pc = 0x5144c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294945338)));
    // 0x5144c4: 0x2c4500e1  sltiu       $a1, $v0, 0xE1
    ctx->pc = 0x5144c4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
label_5144c8:
    // 0x5144c8: 0xa064aa3a  sb          $a0, -0x55C6($v1)
    ctx->pc = 0x5144c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294945338), (uint8_t)GPR_U32(ctx, 4));
label_5144cc:
    // 0x5144cc: 0x3e00008  jr          $ra
    ctx->pc = 0x5144CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5144D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5144CCu;
        // 0x5144d0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5144CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5144D4u;
    // 0x5144d4: 0x0  nop
    ctx->pc = 0x5144d4u;
    // NOP
    // 0x5144d8: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x5144d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x5144dc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x5144dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x5144e0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x5144E0u;
    {
        const bool branch_taken_0x5144e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x5144E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5144E0u;
        // 0x5144e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5144e0) {
            ctx->pc = 0x514508u;
            goto label_514508;
        }
    }
    ctx->pc = 0x5144E8u;
    // 0x5144e8: 0x9084012f  lbu         $a0, 0x12F($a0)
    ctx->pc = 0x5144e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 303)));
    // 0x5144ec: 0x2c820011  sltiu       $v0, $a0, 0x11
    ctx->pc = 0x5144ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x5144f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5144F0u;
    {
        const bool branch_taken_0x5144f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5144F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5144F0u;
        // 0x5144f4: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5144f0) {
            ctx->pc = 0x514504u;
            goto label_514504;
        }
    }
    ctx->pc = 0x5144F8u;
    // 0x5144f8: 0x9062aa3b  lbu         $v0, -0x55C5($v1)
    ctx->pc = 0x5144f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294945339)));
    // 0x5144fc: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x5144fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x514500: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x514500u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_514504:
    // 0x514504: 0xa064aa3b  sb          $a0, -0x55C5($v1)
    ctx->pc = 0x514504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294945339), (uint8_t)GPR_U32(ctx, 4));
label_514508:
    // 0x514508: 0x3e00008  jr          $ra
    ctx->pc = 0x514508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514508u;
        // 0x51450c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x514510u;
}

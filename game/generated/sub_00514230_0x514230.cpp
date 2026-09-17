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

// Function: sub_00514230
// Address: 0x514230 - 0x514330
void sub_00514230_0x514230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00514230_0x514230");
#endif

    ctx->pc = 0x514230u;

    // 0x514230: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x514230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x514234: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x514234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x514238: 0x1443003a  bne         $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x514238u;
    {
        const bool branch_taken_0x514238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x51423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514238u;
        // 0x51423c: 0x2484012e  addiu       $a0, $a0, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 302));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514238) {
            ctx->pc = 0x514324u;
            goto label_514324;
        }
    }
    ctx->pc = 0x514240u;
    // 0x514240: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x514240u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x514244: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x514244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x514248: 0x2c620090  sltiu       $v0, $v1, 0x90
    ctx->pc = 0x514248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x51424c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x51424Cu;
    {
        const bool branch_taken_0x51424c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x514250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51424Cu;
        // 0x514250: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51424c) {
            ctx->pc = 0x5142C0u;
            goto label_5142c0;
        }
    }
    ctx->pc = 0x514254u;
    // 0x514254: 0x24a20071  addiu       $v0, $a1, 0x71
    ctx->pc = 0x514254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 113));
    // 0x514258: 0x3c013f91  lui         $at, 0x3F91
    ctx->pc = 0x514258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16273 << 16));
    // 0x51425c: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x51425cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x514260: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x514260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x514264: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x514264u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x514268: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x514268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x51426c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51426cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x514270: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x514270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x514274: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x514274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x514278: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x514278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x51427c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x51427cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x514280: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x514280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x514284: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x514284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x514288: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x514288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x51428c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x51428cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x514290: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x514290u;
    {
        const bool branch_taken_0x514290 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x514290) {
            ctx->pc = 0x514294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x514290u;
            // 0x514294: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x514298u;
            goto label_514298;
        }
    }
    ctx->pc = 0x514298u;
label_514298:
    // 0x514298: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x514298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x51429c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x51429cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5142a0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5142a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x5142a4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x5142a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x5142a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x5142a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5142ac: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x5142ACu;
    {
        const bool branch_taken_0x5142ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5142ac) {
            ctx->pc = 0x5142B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5142ACu;
            // 0x5142b0: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x514324u;
            goto label_514324;
        }
    }
    ctx->pc = 0x5142B4u;
    // 0x5142b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x5142B4u;
    {
        const bool branch_taken_0x5142b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5142B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5142B4u;
        // 0x5142b8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5142b4) {
            ctx->pc = 0x514308u;
            goto label_514308;
        }
    }
    ctx->pc = 0x5142BCu;
    // 0x5142bc: 0x0  nop
    ctx->pc = 0x5142bcu;
    // NOP
label_5142c0:
    // 0x5142c0: 0x2c62006f  sltiu       $v0, $v1, 0x6F
    ctx->pc = 0x5142c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)111) ? 1 : 0);
    // 0x5142c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x5142C4u;
    {
        const bool branch_taken_0x5142c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5142C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5142C4u;
        // 0x5142c8: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5142c4) {
            ctx->pc = 0x514320u;
            goto label_514320;
        }
    }
    ctx->pc = 0x5142CCu;
    // 0x5142cc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x5142ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5142d0: 0x3c013f91  lui         $at, 0x3F91
    ctx->pc = 0x5142d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16273 << 16));
    // 0x5142d4: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x5142d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x5142d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x5142d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5142dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5142dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5142e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5142e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x5142e4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x5142e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x5142e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x5142e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x5142ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5142ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x5142f0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x5142f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5142f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5142f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x5142f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x5142f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x5142fc: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x5142FCu;
    {
        const bool branch_taken_0x5142fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5142fc) {
            ctx->pc = 0x514300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5142FCu;
            // 0x514300: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x514324u;
            goto label_514324;
        }
    }
    ctx->pc = 0x514304u;
    // 0x514304: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x514304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_514308:
    // 0x514308: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x514308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x51430c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x51430cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x514310: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x514310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x514314: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x514314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x514318: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x514318u;
    {
        const bool branch_taken_0x514318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514318u;
        // 0x51431c: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514318) {
            ctx->pc = 0x514324u;
            goto label_514324;
        }
    }
    ctx->pc = 0x514320u;
label_514320:
    // 0x514320: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x514320u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_514324:
    // 0x514324: 0x3e00008  jr          $ra
    ctx->pc = 0x514324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x514328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514324u;
        // 0x514328: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x51432Cu;
    // 0x51432c: 0x0  nop
    ctx->pc = 0x51432cu;
    // NOP
    ctx->pc = 0x514330u;
}

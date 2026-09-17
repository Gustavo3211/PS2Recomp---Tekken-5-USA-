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

// Function: sub_00293298
// Address: 0x293298 - 0x293448
void sub_00293298_0x293298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293298_0x293298");
#endif

    switch (ctx->pc) {
        case 0x29331cu: goto label_29331c;
        case 0x293330u: goto label_293330;
        case 0x29341cu: goto label_29341c;
        case 0x29342cu: goto label_29342c;
        default: break;
    }

    ctx->pc = 0x293298u;

    // 0x293298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x293298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29329c: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x29329cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x2932a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2932a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2932a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2932a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2932a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2932a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2932ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2932acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2932b0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2932b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2932b4: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2932B4u;
    {
        const bool branch_taken_0x2932b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2932B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932B4u;
        // 0x2932b8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932b4) {
            ctx->pc = 0x2933F8u;
            goto label_2933f8;
        }
    }
    ctx->pc = 0x2932BCu;
    // 0x2932bc: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x2932bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2932c0: 0x10a0005b  beqz        $a1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2932C0u;
    {
        const bool branch_taken_0x2932c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2932C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932C0u;
        // 0x2932c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932c0) {
            ctx->pc = 0x293430u;
            goto label_293430;
        }
    }
    ctx->pc = 0x2932C8u;
    // 0x2932c8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2932c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2932cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2932CCu;
    {
        const bool branch_taken_0x2932cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2932D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932CCu;
        // 0x2932d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932cc) {
            ctx->pc = 0x2932E8u;
            goto label_2932e8;
        }
    }
    ctx->pc = 0x2932D4u;
    // 0x2932d4: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2932D4u;
    {
        const bool branch_taken_0x2932d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2932D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932D4u;
        // 0x2932d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932d4) {
            ctx->pc = 0x293368u;
            goto label_293368;
        }
    }
    ctx->pc = 0x2932DCu;
    // 0x2932dc: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2932DCu;
    {
        const bool branch_taken_0x2932dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2932E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932DCu;
        // 0x2932e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932dc) {
            ctx->pc = 0x293434u;
            goto label_293434;
        }
    }
    ctx->pc = 0x2932E4u;
    // 0x2932e4: 0x0  nop
    ctx->pc = 0x2932e4u;
    // NOP
label_2932e8:
    // 0x2932e8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2932e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2932ec: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x2932ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2932f0: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x2932f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2932f4: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2932F4u;
    {
        const bool branch_taken_0x2932f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2932F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932F4u;
        // 0x2932f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932f4) {
            ctx->pc = 0x293430u;
            goto label_293430;
        }
    }
    ctx->pc = 0x2932FCu;
    // 0x2932fc: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x2932fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x293300: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x293300u;
    {
        const bool branch_taken_0x293300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293300u;
        // 0x293304: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293300) {
            ctx->pc = 0x293430u;
            goto label_293430;
        }
    }
    ctx->pc = 0x293308u;
    // 0x293308: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x293308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x29330c: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x29330Cu;
    {
        const bool branch_taken_0x29330c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29330c) {
            ctx->pc = 0x293310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29330Cu;
            // 0x293310: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293430u;
            goto label_293430;
        }
    }
    ctx->pc = 0x293314u;
    // 0x293314: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x293314u;
    SET_GPR_U32(ctx, 31, 0x29331Cu);
    ctx->pc = 0x293318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293314u;
    // 0x293318: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x293314u, 0x29331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29331Cu;
label_29331c:
    // 0x29331c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x29331Cu;
    {
        const bool branch_taken_0x29331c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29331Cu;
        // 0x293320: 0x26060008  addiu       $a2, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29331c) {
            ctx->pc = 0x2933F8u;
            goto label_2933f8;
        }
    }
    ctx->pc = 0x293324u;
    // 0x293324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293328: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x293328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29332c: 0x0  nop
    ctx->pc = 0x29332cu;
    // NOP
label_293330:
    // 0x293330: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x293330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x293334: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x293334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x293338: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x293338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x29333c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x29333Cu;
    {
        const bool branch_taken_0x29333c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29333Cu;
        // 0x293340: 0x28a40005  slti        $a0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29333c) {
            ctx->pc = 0x2933F8u;
            goto label_2933f8;
        }
    }
    ctx->pc = 0x293344u;
    // 0x293344: 0x0  nop
    ctx->pc = 0x293344u;
    // NOP
    // 0x293348: 0x0  nop
    ctx->pc = 0x293348u;
    // NOP
    // 0x29334c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29334Cu;
    {
        const bool branch_taken_0x29334c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x293350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29334Cu;
        // 0x293350: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29334c) {
            ctx->pc = 0x293330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293330;
        }
    }
    ctx->pc = 0x293354u;
    // 0x293354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293358: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x293358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x29335c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x29335Cu;
    {
        const bool branch_taken_0x29335c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29335Cu;
        // 0x293360: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29335c) {
            ctx->pc = 0x29342Cu;
            goto label_29342c;
        }
    }
    ctx->pc = 0x293364u;
    // 0x293364: 0x0  nop
    ctx->pc = 0x293364u;
    // NOP
label_293368:
    // 0x293368: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x293368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x29336c: 0x2862001f  slti        $v0, $v1, 0x1F
    ctx->pc = 0x29336cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x293370: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x293370u;
    {
        const bool branch_taken_0x293370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293370) {
            ctx->pc = 0x293390u;
            goto label_293390;
        }
    }
    ctx->pc = 0x293378u;
    // 0x293378: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x293378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29337c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29337cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x293380: 0xc7808fe4  lwc1        $f0, -0x701C($gp)
    ctx->pc = 0x293380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293384: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x293384u;
    {
        const bool branch_taken_0x293384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293384u;
        // 0x293388: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x293384) {
            ctx->pc = 0x293398u;
            goto label_293398;
        }
    }
    ctx->pc = 0x29338Cu;
    // 0x29338c: 0x0  nop
    ctx->pc = 0x29338cu;
    // NOP
label_293390:
    // 0x293390: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x293390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x293394: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x293394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_293398:
    // 0x293398: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x293398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x29339c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29339cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2933a0: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2933a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2933a4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2933a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2933a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2933a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2933ac: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2933ACu;
    {
        const bool branch_taken_0x2933ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2933B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933ACu;
        // 0x2933b0: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933ac) {
            ctx->pc = 0x2933D4u;
            goto label_2933d4;
        }
    }
    ctx->pc = 0x2933B4u;
    // 0x2933b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2933b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2933b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2933b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2933bc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2933bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2933c0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2933c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2933c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2933c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2933c8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2933c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2933cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2933ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2933d0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2933d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2933d4:
    // 0x2933d4: 0xc28825  or          $s1, $a2, $v0
    ctx->pc = 0x2933d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2933d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2933d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2933dc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2933DCu;
    {
        const bool branch_taken_0x2933dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2933E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933DCu;
        // 0x2933e0: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933dc) {
            ctx->pc = 0x293400u;
            goto label_293400;
        }
    }
    ctx->pc = 0x2933E4u;
    // 0x2933e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2933e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2933e8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2933e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2933ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2933ECu;
    {
        const bool branch_taken_0x2933ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2933ec) {
            ctx->pc = 0x293414u;
            goto label_293414;
        }
    }
    ctx->pc = 0x2933F4u;
    // 0x2933f4: 0x0  nop
    ctx->pc = 0x2933f4u;
    // NOP
label_2933f8:
    // 0x2933f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2933F8u;
    {
        const bool branch_taken_0x2933f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2933FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933F8u;
        // 0x2933fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933f8) {
            ctx->pc = 0x293430u;
            goto label_293430;
        }
    }
    ctx->pc = 0x293400u;
label_293400:
    // 0x293400: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x293400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x293404: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x293404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x293408: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x293408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29340c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x29340cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x293410: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x293410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_293414:
    // 0x293414: 0xc0a650c  jal         func_299430
    ctx->pc = 0x293414u;
    SET_GPR_U32(ctx, 31, 0x29341Cu);
    ctx->pc = 0x299430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299430u, 0x293414u, 0x29341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29341Cu;
label_29341c:
    // 0x29341c: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x29341cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x293420: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x293420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293424: 0xc0a64de  jal         func_299378
    ctx->pc = 0x293424u;
    SET_GPR_U32(ctx, 31, 0x29342Cu);
    ctx->pc = 0x293428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293424u;
    // 0x293428: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299378u, 0x293424u, 0x29342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29342Cu;
label_29342c:
    // 0x29342c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29342cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293430:
    // 0x293430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x293430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_293434:
    // 0x293434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x293434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x293438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x293438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29343c: 0x3e00008  jr          $ra
    ctx->pc = 0x29343Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29343Cu;
        // 0x293440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29343Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293444u;
    // 0x293444: 0x0  nop
    ctx->pc = 0x293444u;
    // NOP
    ctx->pc = 0x293448u;
}

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

// Function: sub_002D5038
// Address: 0x2d5038 - 0x2d5148
void sub_002D5038_0x2d5038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5038_0x2d5038");
#endif

    switch (ctx->pc) {
        case 0x2d5080u: goto label_2d5080;
        case 0x2d5094u: goto label_2d5094;
        case 0x2d509cu: goto label_2d509c;
        case 0x2d50b8u: goto label_2d50b8;
        case 0x2d512cu: goto label_2d512c;
        default: break;
    }

    ctx->pc = 0x2d5038u;

    // 0x2d5038: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d5038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d503c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2d503cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2d5040: 0x30910001  andi        $s1, $a0, 0x1
    ctx->pc = 0x2d5040u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2d5044: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2d5044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2d5048: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2d5048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2d504c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2d504cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2d5050: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d5050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5054: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2d5054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2d5058: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d5058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d505c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d505cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d5060: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d5060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2d5064: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d5064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d5068: 0x8c8488d0  lw          $a0, -0x7730($a0)
    ctx->pc = 0x2d5068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936784)));
    // 0x2d506c: 0x908201bd  lbu         $v0, 0x1BD($a0)
    ctx->pc = 0x2d506cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 445)));
    // 0x2d5070: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5070u;
    {
        const bool branch_taken_0x2d5070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5070u;
        // 0x2d5074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5070) {
            ctx->pc = 0x2D5084u;
            goto label_2d5084;
        }
    }
    ctx->pc = 0x2D5078u;
    // 0x2d5078: 0xc0a0b0e  jal         func_282C38
    ctx->pc = 0x2D5078u;
    SET_GPR_U32(ctx, 31, 0x2D5080u);
    ctx->pc = 0x282C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C38u, 0x2D5078u, 0x2D5080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5080u;
label_2d5080:
    // 0x2d5080: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d5080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5084:
    // 0x2d5084: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D5084u;
    {
        const bool branch_taken_0x2d5084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5084u;
        // 0x2d5088: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5084) {
            ctx->pc = 0x2D512Cu;
            goto label_2d512c;
        }
    }
    ctx->pc = 0x2D508Cu;
    // 0x2d508c: 0xc04a58e  jal         func_129638
    ctx->pc = 0x2D508Cu;
    SET_GPR_U32(ctx, 31, 0x2D5094u);
    ctx->pc = 0x2D5090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D508Cu;
    // 0x2d5090: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x2D508Cu, 0x2D5094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5094u;
label_2d5094:
    // 0x2d5094: 0xc0b53ea  jal         func_2D4FA8
    ctx->pc = 0x2D5094u;
    SET_GPR_U32(ctx, 31, 0x2D509Cu);
    ctx->pc = 0x2D5098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5094u;
    // 0x2d5098: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4FA8u, 0x2D5094u, 0x2D509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D509Cu;
label_2d509c:
    // 0x2d509c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2d509cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2d50a0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2d50a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d50a4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d50a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d50a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d50a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50ac: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d50acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d50b0: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x2D50B0u;
    SET_GPR_U32(ctx, 31, 0x2D50B8u);
    ctx->pc = 0x2D50B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D50B0u;
    // 0x2d50b4: 0xa3a00020  sb          $zero, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x2D50B0u, 0x2D50B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50B8u;
label_2d50b8:
    // 0x2d50b8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2d50b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d50bc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d50c0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2d50c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d50c4: 0x2463e7a0  addiu       $v1, $v1, -0x1860
    ctx->pc = 0x2d50c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961056));
    // 0x2d50c8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d50c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2d50cc: 0x440d1000  mfc1        $t5, $f2
    ctx->pc = 0x2d50ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x2d50d0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2d50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d50d4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d50d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d50d8: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x2d50d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x2d50dc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2d50dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d50e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d50e4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2d50e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d50e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d50e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d50ec: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2d50ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2d50f0: 0x1a56821  addu        $t5, $t5, $a1
    ctx->pc = 0x2d50f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x2d50f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d50f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50f8: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x2d50f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2d50fc: 0x2484eda8  addiu       $a0, $a0, -0x1258
    ctx->pc = 0x2d50fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962600));
    // 0x2d5100: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d5100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5104: 0x114040  sll         $t0, $s1, 1
    ctx->pc = 0x2d5104u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2d5108: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2d5108u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d510c: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x2d510cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5110: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2d5110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d5114: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x2d5114u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2d5118: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2d5118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2d511c: 0xa7a00050  sh          $zero, 0x50($sp)
    ctx->pc = 0x2d511cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d5120: 0xafac0060  sw          $t4, 0x60($sp)
    ctx->pc = 0x2d5120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 12));
    // 0x2d5124: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2D5124u;
    SET_GPR_U32(ctx, 31, 0x2D512Cu);
    ctx->pc = 0x2D5128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5124u;
    // 0x2d5128: 0xafad0064  sw          $t5, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2D5124u, 0x2D512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D512Cu;
label_2d512c:
    // 0x2d512c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2d512cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d5130: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2d5130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d5134: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2d5134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d5138: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2d5138u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2d513c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d513cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d5140: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5140u;
        // 0x2d5144: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5148u;
}

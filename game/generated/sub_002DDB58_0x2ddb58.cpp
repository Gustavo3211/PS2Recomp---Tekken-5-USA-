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

// Function: sub_002DDB58
// Address: 0x2ddb58 - 0x2ddc00
void sub_002DDB58_0x2ddb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDB58_0x2ddb58");
#endif

    switch (ctx->pc) {
        case 0x2ddb70u: goto label_2ddb70;
        case 0x2ddb7cu: goto label_2ddb7c;
        case 0x2ddbb8u: goto label_2ddbb8;
        default: break;
    }

    ctx->pc = 0x2ddb58u;

    // 0x2ddb58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ddb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ddb5c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2ddb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2ddb60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ddb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ddb64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ddb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ddb68: 0xc0b771c  jal         func_2DDC70
    ctx->pc = 0x2DDB68u;
    SET_GPR_U32(ctx, 31, 0x2DDB70u);
    ctx->pc = 0x2DDB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB68u;
    // 0x2ddb6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDC70u, 0x2DDB68u, 0x2DDB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB70u;
label_2ddb70:
    // 0x2ddb70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ddb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb74: 0xc0b774c  jal         func_2DDD30
    ctx->pc = 0x2DDB74u;
    SET_GPR_U32(ctx, 31, 0x2DDB7Cu);
    ctx->pc = 0x2DDB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB74u;
    // 0x2ddb78: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDD30u, 0x2DDB74u, 0x2DDB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB7Cu;
label_2ddb7c:
    // 0x2ddb7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ddb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb80: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2ddb80u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2ddb84: 0xc780950c  lwc1        $f0, -0x6AF4($gp)
    ctx->pc = 0x2ddb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddb88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ddb88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddb8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DDB8Cu;
    {
        const bool branch_taken_0x2ddb8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB8Cu;
        // 0x2ddb90: 0xe60100a8  swc1        $f1, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb8c) {
            ctx->pc = 0x2DDB98u;
            goto label_2ddb98;
        }
    }
    ctx->pc = 0x2DDB94u;
    // 0x2ddb94: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2ddb94u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2ddb98:
    // 0x2ddb98: 0xc60200ac  lwc1        $f2, 0xAC($s0)
    ctx->pc = 0x2ddb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ddb9c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2ddb9cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2ddba0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2ddba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddba4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DDBA4u;
    {
        const bool branch_taken_0x2ddba4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDBA4u;
        // 0x2ddba8: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddba4) {
            ctx->pc = 0x2DDBB0u;
            goto label_2ddbb0;
        }
    }
    ctx->pc = 0x2DDBACu;
    // 0x2ddbac: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x2ddbacu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_2ddbb0:
    // 0x2ddbb0: 0xc0b778c  jal         func_2DDE30
    ctx->pc = 0x2DDBB0u;
    SET_GPR_U32(ctx, 31, 0x2DDBB8u);
    ctx->pc = 0x2DDBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDBB0u;
    // 0x2ddbb4: 0xe60100ac  swc1        $f1, 0xAC($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDE30u, 0x2DDBB0u, 0x2DDBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBB8u;
label_2ddbb8:
    // 0x2ddbb8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2ddbb8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2ddbbc: 0xc7809510  lwc1        $f0, -0x6AF0($gp)
    ctx->pc = 0x2ddbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddbc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ddbc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddbc4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DDBC4u;
    {
        const bool branch_taken_0x2ddbc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDBC4u;
        // 0x2ddbc8: 0xe60100b0  swc1        $f1, 0xB0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddbc4) {
            ctx->pc = 0x2DDBD0u;
            goto label_2ddbd0;
        }
    }
    ctx->pc = 0x2DDBCCu;
    // 0x2ddbcc: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2ddbccu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2ddbd0:
    // 0x2ddbd0: 0xc60200b4  lwc1        $f2, 0xB4($s0)
    ctx->pc = 0x2ddbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ddbd4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2ddbd4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2ddbd8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2ddbd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddbdc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DDBDCu;
    {
        const bool branch_taken_0x2ddbdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDBDCu;
        // 0x2ddbe0: 0xe60000b0  swc1        $f0, 0xB0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddbdc) {
            ctx->pc = 0x2DDBE8u;
            goto label_2ddbe8;
        }
    }
    ctx->pc = 0x2DDBE4u;
    // 0x2ddbe4: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x2ddbe4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_2ddbe8:
    // 0x2ddbe8: 0xe60100b4  swc1        $f1, 0xB4($s0)
    ctx->pc = 0x2ddbe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x2ddbec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ddbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ddbf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ddbf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDBF4u;
        // 0x2ddbf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDBFCu;
    // 0x2ddbfc: 0x0  nop
    ctx->pc = 0x2ddbfcu;
    // NOP
    ctx->pc = 0x2ddc00u;
}

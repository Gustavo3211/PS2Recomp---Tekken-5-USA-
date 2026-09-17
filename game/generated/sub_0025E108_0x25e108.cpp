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

// Function: sub_0025E108
// Address: 0x25e108 - 0x25e1a0
void sub_0025E108_0x25e108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E108_0x25e108");
#endif

    switch (ctx->pc) {
        case 0x25e148u: goto label_25e148;
        case 0x25e190u: goto label_25e190;
        default: break;
    }

    ctx->pc = 0x25e108u;

    // 0x25e108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25e10c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x25e10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e114: 0x24c20820  addiu       $v0, $a2, 0x820
    ctx->pc = 0x25e114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
    // 0x25e118: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25e11c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25e11cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e120: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x25e120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x25e124: 0x84c30012  lh          $v1, 0x12($a2)
    ctx->pc = 0x25e124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x25e128: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x25e128u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x25e12c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25e12cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25e130: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25e130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25e134: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25e138: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x25e138u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x25e13c: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x25e13cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x25e140: 0x24e7e740  addiu       $a3, $a3, -0x18C0
    ctx->pc = 0x25e140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960960));
    // 0x25e144: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x25e144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_25e148:
    // 0x25e148: 0x8cc20894  lw          $v0, 0x894($a2)
    ctx->pc = 0x25e148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2196)));
    // 0x25e14c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x25e14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x25e150: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x25e150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x25e154: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x25e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x25e158: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25e158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25e15c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x25e15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x25e160: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x25e160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x25e164: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x25e164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x25e168: 0x4a1fff7  bgez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x25E168u;
    {
        const bool branch_taken_0x25e168 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x25E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E168u;
        // 0x25e16c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e168) {
            ctx->pc = 0x25E148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e148;
        }
    }
    ctx->pc = 0x25E170u;
    // 0x25e170: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x25e170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x25e174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25e174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e178: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25e178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25e17c: 0xa4e20006  sh          $v0, 0x6($a3)
    ctx->pc = 0x25e17cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e180: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x25e180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e184: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x25e184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x25e188: 0xc0977a0  jal         func_25DE80
    ctx->pc = 0x25E188u;
    SET_GPR_U32(ctx, 31, 0x25E190u);
    ctx->pc = 0x25E18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E188u;
    // 0x25e18c: 0xa4e20004  sh          $v0, 0x4($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DE80u, 0x25E188u, 0x25E190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E190u;
label_25e190:
    // 0x25e190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e194: 0x3e00008  jr          $ra
    ctx->pc = 0x25E194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E194u;
        // 0x25e198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E19Cu;
    // 0x25e19c: 0x0  nop
    ctx->pc = 0x25e19cu;
    // NOP
    ctx->pc = 0x25e1a0u;
}

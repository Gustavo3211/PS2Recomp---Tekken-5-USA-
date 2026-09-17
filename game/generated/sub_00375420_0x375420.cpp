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

// Function: sub_00375420
// Address: 0x375420 - 0x375510
void sub_00375420_0x375420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375420_0x375420");
#endif

    switch (ctx->pc) {
        case 0x375448u: goto label_375448;
        case 0x375470u: goto label_375470;
        case 0x3754a8u: goto label_3754a8;
        case 0x3754e0u: goto label_3754e0;
        default: break;
    }

    ctx->pc = 0x375420u;

    // 0x375420: 0x3e00008  jr          $ra
    ctx->pc = 0x375420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375420u;
        // 0x375424: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375428u;
    // 0x375428: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x375428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37542c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375430: 0x244220d8  addiu       $v0, $v0, 0x20D8
    ctx->pc = 0x375430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8408));
    // 0x375434: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x375434u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x375438: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x375438u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x37543c: 0x24e20030  addiu       $v0, $a3, 0x30
    ctx->pc = 0x37543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x375440: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375444: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x375444u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_375448:
    // 0x375448: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x375448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x37544c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x37544cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x375450: 0x0  nop
    ctx->pc = 0x375450u;
    // NOP
    // 0x375454: 0x0  nop
    ctx->pc = 0x375454u;
    // NOP
    // 0x375458: 0x0  nop
    ctx->pc = 0x375458u;
    // NOP
    // 0x37545c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x37545Cu;
    {
        const bool branch_taken_0x37545c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x375460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37545Cu;
        // 0x375460: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37545c) {
            ctx->pc = 0x375448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375448;
        }
    }
    ctx->pc = 0x375464u;
    // 0x375464: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375468: 0x24e20060  addiu       $v0, $a3, 0x60
    ctx->pc = 0x375468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x37546c: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x37546cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_375470:
    // 0x375470: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x375470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x375474: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x375474u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x375478: 0x0  nop
    ctx->pc = 0x375478u;
    // NOP
    // 0x37547c: 0x0  nop
    ctx->pc = 0x37547cu;
    // NOP
    // 0x375480: 0x0  nop
    ctx->pc = 0x375480u;
    // NOP
    // 0x375484: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x375484u;
    {
        const bool branch_taken_0x375484 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x375488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375484u;
        // 0x375488: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375484) {
            ctx->pc = 0x375470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375470;
        }
    }
    ctx->pc = 0x37548Cu;
    // 0x37548c: 0x24ea0004  addiu       $t2, $a3, 0x4
    ctx->pc = 0x37548cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x375490: 0x24eb0008  addiu       $t3, $a3, 0x8
    ctx->pc = 0x375490u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x375494: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x375494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375498: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x375498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37549c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x37549cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3754a0: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x3754a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3754a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3754a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3754a8:
    // 0x3754a8: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x3754a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3754ac: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x3754acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3754b0: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x3754b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3754b4: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x3754b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x3754b8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3754b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3754bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3754bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3754c0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3754c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3754c4: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3754C4u;
    {
        const bool branch_taken_0x3754c4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x3754C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3754C4u;
        // 0x3754c8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3754c4) {
            ctx->pc = 0x3754A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3754a8;
        }
    }
    ctx->pc = 0x3754CCu;
    // 0x3754cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3754ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3754d0: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3754d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3754d4: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x3754d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3754d8: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x3754d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x3754dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3754dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3754e0:
    // 0x3754e0: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x3754e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3754e4: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x3754e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3754e8: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x3754e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3754ec: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x3754ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x3754f0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3754f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3754f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3754f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3754f8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3754f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3754fc: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3754FCu;
    {
        const bool branch_taken_0x3754fc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x375500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3754FCu;
        // 0x375500: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3754fc) {
            ctx->pc = 0x3754E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3754e0;
        }
    }
    ctx->pc = 0x375504u;
    // 0x375504: 0x3e00008  jr          $ra
    ctx->pc = 0x375504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37550Cu;
    // 0x37550c: 0x0  nop
    ctx->pc = 0x37550cu;
    // NOP
    ctx->pc = 0x375510u;
}

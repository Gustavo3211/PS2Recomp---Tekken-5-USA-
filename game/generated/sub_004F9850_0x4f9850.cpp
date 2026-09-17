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

// Function: sub_004F9850
// Address: 0x4f9850 - 0x4f9900
void sub_004F9850_0x4f9850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9850_0x4f9850");
#endif

    switch (ctx->pc) {
        case 0x4f9864u: goto label_4f9864;
        case 0x4f9870u: goto label_4f9870;
        case 0x4f988cu: goto label_4f988c;
        case 0x4f98b0u: goto label_4f98b0;
        case 0x4f98b8u: goto label_4f98b8;
        default: break;
    }

    ctx->pc = 0x4f9850u;

    // 0x4f9850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f9850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f9854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f9854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f9858: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4f9858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4f985c: 0xc144eee  jal         func_513BB8
    ctx->pc = 0x4F985Cu;
    SET_GPR_U32(ctx, 31, 0x4F9864u);
    ctx->pc = 0x513BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513BB8u, 0x4F985Cu, 0x4F9864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9864u;
label_4f9864:
    // 0x4f9864: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4f9864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f9868: 0xc144f10  jal         func_513C40
    ctx->pc = 0x4F9868u;
    SET_GPR_U32(ctx, 31, 0x4F9870u);
    ctx->pc = 0x4F986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9868u;
    // 0x4f986c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513C40u, 0x4F9868u, 0x4F9870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9870u;
label_4f9870:
    // 0x4f9870: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4f9870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f9874: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x4f9874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x4f9878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f9878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f987c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4F987Cu;
    {
        const bool branch_taken_0x4f987c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F987Cu;
        // 0x4f9880: 0xac62cb10  sw          $v0, -0x34F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f987c) {
            ctx->pc = 0x4F98ECu;
            goto label_4f98ec;
        }
    }
    ctx->pc = 0x4F9884u;
    // 0x4f9884: 0xc144f10  jal         func_513C40
    ctx->pc = 0x4F9884u;
    SET_GPR_U32(ctx, 31, 0x4F988Cu);
    ctx->pc = 0x513C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513C40u, 0x4F9884u, 0x4F988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F988Cu;
label_4f988c:
    // 0x4f988c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f988cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f9890: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x4f9890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x4f9894: 0x24701280  addiu       $s0, $v1, 0x1280
    ctx->pc = 0x4f9894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4736));
    // 0x4f9898: 0xaca2cb14  sw          $v0, -0x34EC($a1)
    ctx->pc = 0x4f9898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x56CB14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56CB14u, _value); } while (0);
    // 0x4f989c: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x4f989cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x4f98a0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4F98A0u;
    {
        const bool branch_taken_0x4f98a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F98A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F98A0u;
        // 0x4f98a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f98a0) {
            ctx->pc = 0x4F98ECu;
            goto label_4f98ec;
        }
    }
    ctx->pc = 0x4F98A8u;
    // 0x4f98a8: 0xc13e4a6  jal         func_4F9298
    ctx->pc = 0x4F98A8u;
    SET_GPR_U32(ctx, 31, 0x4F98B0u);
    ctx->pc = 0x4F9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9298u, 0x4F98A8u, 0x4F98B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F98B0u;
label_4f98b0:
    // 0x4f98b0: 0xc122c2e  jal         func_48B0B8
    ctx->pc = 0x4F98B0u;
    SET_GPR_U32(ctx, 31, 0x4F98B8u);
    ctx->pc = 0x48B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B0B8u, 0x4F98B0u, 0x4F98B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F98B8u;
label_4f98b8:
    // 0x4f98b8: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x4f98b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x4f98bc: 0x240200a6  addiu       $v0, $zero, 0xA6
    ctx->pc = 0x4f98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x4f98c0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x4f98c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4f98c4: 0xa603001e  sh          $v1, 0x1E($s0)
    ctx->pc = 0x4f98c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f98c8: 0xa602006c  sh          $v0, 0x6C($s0)
    ctx->pc = 0x4f98c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f98cc: 0xa604000e  sh          $a0, 0xE($s0)
    ctx->pc = 0x4f98ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f98d0: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x4f98d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f98d4: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x4f98d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f98d8: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x4f98d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f98dc: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x4f98dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f98e0: 0xa6030018  sh          $v1, 0x18($s0)
    ctx->pc = 0x4f98e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f98e4: 0xa603001a  sh          $v1, 0x1A($s0)
    ctx->pc = 0x4f98e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f98e8: 0xa603001c  sh          $v1, 0x1C($s0)
    ctx->pc = 0x4f98e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
label_4f98ec:
    // 0x4f98ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f98ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f98f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f98f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f98f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F98F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F98F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F98F4u;
        // 0x4f98f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F98F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F98FCu;
    // 0x4f98fc: 0x0  nop
    ctx->pc = 0x4f98fcu;
    // NOP
    ctx->pc = 0x4f9900u;
}

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

// Function: sub_002992E8
// Address: 0x2992e8 - 0x299378
void sub_002992E8_0x2992e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002992E8_0x2992e8");
#endif

    switch (ctx->pc) {
        case 0x299318u: goto label_299318;
        case 0x299360u: goto label_299360;
        default: break;
    }

    ctx->pc = 0x2992e8u;

    // 0x2992e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2992e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2992ec: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2992ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x2992f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2992f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992f4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x2992f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2992f8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2992f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2992fc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2992fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x299300: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x299300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299304: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x299304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x299308: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x299308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29930c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x29930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x299310: 0xc0a6426  jal         func_299098
    ctx->pc = 0x299310u;
    SET_GPR_U32(ctx, 31, 0x299318u);
    ctx->pc = 0x299314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299310u;
    // 0x299314: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299098u, 0x299310u, 0x299318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299318u;
label_299318:
    // 0x299318: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x299318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x29931c: 0x8fac0018  lw          $t4, 0x18($sp)
    ctx->pc = 0x29931cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x299320: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x299320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x299324: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x299324u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x299328: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x299328u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29932c: 0x1836024  and         $t4, $t4, $v1
    ctx->pc = 0x29932cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x299330: 0x8faa0014  lw          $t2, 0x14($sp)
    ctx->pc = 0x299330u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x299334: 0x1906025  or          $t4, $t4, $s0
    ctx->pc = 0x299334u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 16));
    // 0x299338: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x299338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29933c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29933cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299340: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x299340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299344: 0x2484bfe8  addiu       $a0, $a0, -0x4018
    ctx->pc = 0x299344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950888));
    // 0x299348: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x299348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29934c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29934cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x299350: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x299350u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x299354: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x299354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x299358: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x299358u;
    SET_GPR_U32(ctx, 31, 0x299360u);
    ctx->pc = 0x29935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299358u;
    // 0x29935c: 0xafac0018  sw          $t4, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x299358u, 0x299360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299360u;
label_299360:
    // 0x299360: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x299360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299364: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x299364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x299368: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x299368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29936c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x29936cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x299370: 0x3e00008  jr          $ra
    ctx->pc = 0x299370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299370u;
        // 0x299374: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299378u;
}

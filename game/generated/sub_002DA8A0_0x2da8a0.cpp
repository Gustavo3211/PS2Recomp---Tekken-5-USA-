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

// Function: sub_002DA8A0
// Address: 0x2da8a0 - 0x2da9d8
void sub_002DA8A0_0x2da8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA8A0_0x2da8a0");
#endif

    switch (ctx->pc) {
        case 0x2da8f8u: goto label_2da8f8;
        case 0x2da908u: goto label_2da908;
        case 0x2da928u: goto label_2da928;
        case 0x2da968u: goto label_2da968;
        case 0x2da9b0u: goto label_2da9b0;
        case 0x2da9c0u: goto label_2da9c0;
        case 0x2da9c8u: goto label_2da9c8;
        default: break;
    }

    ctx->pc = 0x2da8a0u;

    // 0x2da8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2da8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2da8a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2da8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2da8a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2da8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2da8ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2da8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2da8b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2da8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da8b4: 0x8c43f4d0  lw          $v1, -0xB30($v0)
    ctx->pc = 0x2da8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF4D0u));
    // 0x2da8b8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2da8b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2da8bc: 0x1065000c  beq         $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DA8BCu;
    {
        const bool branch_taken_0x2da8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2DA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8BCu;
        // 0x2da8c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da8bc) {
            ctx->pc = 0x2DA8F0u;
            goto label_2da8f0;
        }
    }
    ctx->pc = 0x2DA8C4u;
    // 0x2da8c4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2da8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2da8c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA8C8u;
    {
        const bool branch_taken_0x2da8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da8c8) {
            ctx->pc = 0x2DA8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA8C8u;
            // 0x2da8cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA8E0u;
            goto label_2da8e0;
        }
    }
    ctx->pc = 0x2DA8D0u;
    // 0x2da8d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DA8D0u;
    {
        const bool branch_taken_0x2da8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da8d0) {
            ctx->pc = 0x2DA900u;
            goto label_2da900;
        }
    }
    ctx->pc = 0x2DA8D8u;
    // 0x2da8d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DA8D8u;
    {
        const bool branch_taken_0x2da8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8D8u;
        // 0x2da8dc: 0x8f84bbd0  lw          $a0, -0x4430($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da8d8) {
            ctx->pc = 0x2DA90Cu;
            goto label_2da90c;
        }
    }
    ctx->pc = 0x2DA8E0u;
label_2da8e0:
    // 0x2da8e0: 0x5062003a  beql        $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2DA8E0u;
    {
        const bool branch_taken_0x2da8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da8e0) {
            ctx->pc = 0x2DA8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA8E0u;
            // 0x2da8e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA9CCu;
            goto label_2da9cc;
        }
    }
    ctx->pc = 0x2DA8E8u;
    // 0x2da8e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA8E8u;
    {
        const bool branch_taken_0x2da8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8E8u;
        // 0x2da8ec: 0x8f84bbd0  lw          $a0, -0x4430($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da8e8) {
            ctx->pc = 0x2DA90Cu;
            goto label_2da90c;
        }
    }
    ctx->pc = 0x2DA8F0u;
label_2da8f0:
    // 0x2da8f0: 0xc0b66ea  jal         func_2D9BA8
    ctx->pc = 0x2DA8F0u;
    SET_GPR_U32(ctx, 31, 0x2DA8F8u);
    ctx->pc = 0x2DA8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA8F0u;
    // 0x2da8f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9BA8u, 0x2DA8F0u, 0x2DA8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8F8u;
label_2da8f8:
    // 0x2da8f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA8F8u;
    {
        const bool branch_taken_0x2da8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8F8u;
        // 0x2da8fc: 0x8f84bbd0  lw          $a0, -0x4430($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da8f8) {
            ctx->pc = 0x2DA90Cu;
            goto label_2da90c;
        }
    }
    ctx->pc = 0x2DA900u;
label_2da900:
    // 0x2da900: 0xc0b66ea  jal         func_2D9BA8
    ctx->pc = 0x2DA900u;
    SET_GPR_U32(ctx, 31, 0x2DA908u);
    ctx->pc = 0x2DA904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA900u;
    // 0x2da904: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9BA8u, 0x2DA900u, 0x2DA908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA908u;
label_2da908:
    // 0x2da908: 0x8f84bbd0  lw          $a0, -0x4430($gp)
    ctx->pc = 0x2da908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949840)));
label_2da90c:
    // 0x2da90c: 0x1080002e  beqz        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2DA90Cu;
    {
        const bool branch_taken_0x2da90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA90Cu;
        // 0x2da910: 0x8f83bbdc  lw          $v1, -0x4424($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da90c) {
            ctx->pc = 0x2DA9C8u;
            goto label_2da9c8;
        }
    }
    ctx->pc = 0x2DA914u;
    // 0x2da914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da918: 0x5062002c  beql        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2DA918u;
    {
        const bool branch_taken_0x2da918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da918) {
            ctx->pc = 0x2DA91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA918u;
            // 0x2da91c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA9CCu;
            goto label_2da9cc;
        }
    }
    ctx->pc = 0x2DA920u;
    // 0x2da920: 0xc0b65b0  jal         func_2D96C0
    ctx->pc = 0x2DA920u;
    SET_GPR_U32(ctx, 31, 0x2DA928u);
    ctx->pc = 0x2D96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96C0u, 0x2DA920u, 0x2DA928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA928u;
label_2da928:
    // 0x2da928: 0x8f83bbd8  lw          $v1, -0x4428($gp)
    ctx->pc = 0x2da928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949848)));
    // 0x2da92c: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x2da92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2da930: 0x278abbd8  addiu       $t2, $gp, -0x4428
    ctx->pc = 0x2da930u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949848));
    // 0x2da934: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x2da934u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x2da938: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2da938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2da93c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2da93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da940: 0xaf83bbd8  sw          $v1, -0x4428($gp)
    ctx->pc = 0x2da940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), GPR_U32(ctx, 3));
    // 0x2da944: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2da944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da948: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2da948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2da94c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x2da94cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x2da950: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x2da950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x2da954: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x2da954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x2da958: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2da958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da95c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2da95cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da960: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2DA960u;
    SET_GPR_U32(ctx, 31, 0x2DA968u);
    ctx->pc = 0x2DA964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA960u;
    // 0x2da964: 0x24080064  addiu       $t0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2DA960u, 0x2DA968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA968u;
label_2da968:
    // 0x2da968: 0x8f83bbe4  lw          $v1, -0x441C($gp)
    ctx->pc = 0x2da968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949860)));
    // 0x2da96c: 0x240205b8  addiu       $v0, $zero, 0x5B8
    ctx->pc = 0x2da96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1464));
    // 0x2da970: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DA970u;
    {
        const bool branch_taken_0x2da970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA970u;
        // 0x2da974: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da970) {
            ctx->pc = 0x2DA9B4u;
            goto label_2da9b4;
        }
    }
    ctx->pc = 0x2DA978u;
    // 0x2da978: 0x8f82bbd8  lw          $v0, -0x4428($gp)
    ctx->pc = 0x2da978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949848)));
    // 0x2da97c: 0x2442fcff  addiu       $v0, $v0, -0x301
    ctx->pc = 0x2da97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966527));
    // 0x2da980: 0x2c420123  sltiu       $v0, $v0, 0x123
    ctx->pc = 0x2da980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)291) ? 1 : 0);
    // 0x2da984: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DA984u;
    {
        const bool branch_taken_0x2da984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA984u;
        // 0x2da988: 0x2405006e  addiu       $a1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da984) {
            ctx->pc = 0x2DA9B8u;
            goto label_2da9b8;
        }
    }
    ctx->pc = 0x2DA98Cu;
    // 0x2da98c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2da98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2da990: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2da990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2da994: 0x3c080009  lui         $t0, 0x9
    ctx->pc = 0x2da994u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)9 << 16));
    // 0x2da998: 0x2484f260  addiu       $a0, $a0, -0xDA0
    ctx->pc = 0x2da998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963808));
    // 0x2da99c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2da99cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2da9a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2da9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da9a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2da9a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da9a8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2DA9A8u;
    SET_GPR_U32(ctx, 31, 0x2DA9B0u);
    ctx->pc = 0x2DA9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA9A8u;
    // 0x2da9ac: 0x35080008  ori         $t0, $t0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2DA9A8u, 0x2DA9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA9B0u;
label_2da9b0:
    // 0x2da9b0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2da9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2da9b4:
    // 0x2da9b4: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x2da9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_2da9b8:
    // 0x2da9b8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2DA9B8u;
    SET_GPR_U32(ctx, 31, 0x2DA9C0u);
    ctx->pc = 0x2DA9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA9B8u;
    // 0x2da9bc: 0x24844458  addiu       $a0, $a0, 0x4458 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2DA9B8u, 0x2DA9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA9C0u;
label_2da9c0:
    // 0x2da9c0: 0xc0b66ea  jal         func_2D9BA8
    ctx->pc = 0x2DA9C0u;
    SET_GPR_U32(ctx, 31, 0x2DA9C8u);
    ctx->pc = 0x2DA9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA9C0u;
    // 0x2da9c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9BA8u, 0x2DA9C0u, 0x2DA9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA9C8u;
label_2da9c8:
    // 0x2da9c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2da9c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2da9cc:
    // 0x2da9cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2da9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2da9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9D0u;
        // 0x2da9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA9D8u;
}

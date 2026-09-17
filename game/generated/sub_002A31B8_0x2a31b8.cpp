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

// Function: sub_002A31B8
// Address: 0x2a31b8 - 0x2a3270
void sub_002A31B8_0x2a31b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A31B8_0x2a31b8");
#endif

    switch (ctx->pc) {
        case 0x2a31d0u: goto label_2a31d0;
        case 0x2a31f4u: goto label_2a31f4;
        case 0x2a3228u: goto label_2a3228;
        case 0x2a3230u: goto label_2a3230;
        case 0x2a3258u: goto label_2a3258;
        default: break;
    }

    ctx->pc = 0x2a31b8u;

    // 0x2a31b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a31b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a31bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a31bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a31c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a31c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a31c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a31c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a31c8: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x2A31C8u;
    SET_GPR_U32(ctx, 31, 0x2A31D0u);
    ctx->pc = 0x2A31CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A31C8u;
    // 0x2a31cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x2A31C8u, 0x2A31D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A31D0u;
label_2a31d0:
    // 0x2a31d0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2a31d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2a31d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a31d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31d8: 0x26110150  addiu       $s1, $s0, 0x150
    ctx->pc = 0x2a31d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a31dc: 0x2463e630  addiu       $v1, $v1, -0x19D0
    ctx->pc = 0x2a31dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960688));
    // 0x2a31e0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2a31e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2a31e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a31e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31e8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2a31e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2a31ec: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2A31ECu;
    SET_GPR_U32(ctx, 31, 0x2A31F4u);
    ctx->pc = 0x2A31F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A31ECu;
    // 0x2a31f0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2A31ECu, 0x2A31F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A31F4u;
label_2a31f4:
    // 0x2a31f4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a31f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a31f8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2a31f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2a31fc: 0x2463d268  addiu       $v1, $v1, -0x2D98
    ctx->pc = 0x2a31fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955624));
    // 0x2a3200: 0x2484e600  addiu       $a0, $a0, -0x1A00
    ctx->pc = 0x2a3200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960640));
    // 0x2a3204: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x2a3204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x2a3208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a320c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2a320cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x2a3210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3214: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x2a3214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x2a3218: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a3218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2a321c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a3220: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2A3220u;
    SET_GPR_U32(ctx, 31, 0x2A3228u);
    ctx->pc = 0x2A3224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3220u;
    // 0x2a3224: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2A3220u, 0x2A3228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3228u;
label_2a3228:
    // 0x2a3228: 0xc0a8f4e  jal         func_2A3D38
    ctx->pc = 0x2A3228u;
    SET_GPR_U32(ctx, 31, 0x2A3230u);
    ctx->pc = 0x2A322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3228u;
    // 0x2a322c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3D38u, 0x2A3228u, 0x2A3230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3230u;
label_2a3230:
    // 0x2a3230: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a3230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a3234: 0x2463d280  addiu       $v1, $v1, -0x2D80
    ctx->pc = 0x2a3234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955648));
    // 0x2a3238: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A3238u;
    {
        const bool branch_taken_0x2a3238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3238u;
        // 0x2a323c: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3238) {
            ctx->pc = 0x2A3278u;
            return;
        }
    }
    ctx->pc = 0x2A3240u;
    // 0x2a3240: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a3240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a3244: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2a3244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2a3248: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x2a3248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x2a324c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a324cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3250: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x2A3250u;
    SET_GPR_U32(ctx, 31, 0x2A3258u);
    ctx->pc = 0x2A3254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3250u;
    // 0x2a3254: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x2A3250u, 0x2A3258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3258u;
label_2a3258:
    // 0x2a3258: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a3258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a325c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a325cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a3260: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2a3260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2a3264: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x2a3264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x2a3268: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2A3268u;
    SET_GPR_U32(ctx, 31, 0x2A3270u);
    ctx->pc = 0x2A326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3268u;
    // 0x2a326c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2A3268u, 0x2A3270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3270u;
}

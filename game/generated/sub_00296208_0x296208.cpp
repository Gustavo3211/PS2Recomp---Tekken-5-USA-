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

// Function: sub_00296208
// Address: 0x296208 - 0x296290
void sub_00296208_0x296208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296208_0x296208");
#endif

    switch (ctx->pc) {
        case 0x29621cu: goto label_29621c;
        case 0x296238u: goto label_296238;
        case 0x29624cu: goto label_29624c;
        case 0x296278u: goto label_296278;
        default: break;
    }

    ctx->pc = 0x296208u;

    // 0x296208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29620c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29620cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296210: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x296210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x296214: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x296214u;
    SET_GPR_U32(ctx, 31, 0x29621Cu);
    ctx->pc = 0x296218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296214u;
    // 0x296218: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x296214u, 0x29621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29621Cu;
label_29621c:
    // 0x29621c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x29621cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x296220: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x296220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296224: 0x2463e2a0  addiu       $v1, $v1, -0x1D60
    ctx->pc = 0x296224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959776));
    // 0x296228: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x296228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x29622c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x29622cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x296230: 0xc04057e  jal         func_1015F8
    ctx->pc = 0x296230u;
    SET_GPR_U32(ctx, 31, 0x296238u);
    ctx->pc = 0x296234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296230u;
    // 0x296234: 0x34a5f480  ori         $a1, $a1, 0xF480 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62592);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1015F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1015F8u, 0x296230u, 0x296238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296238u;
label_296238:
    // 0x296238: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x296238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29623c: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x29623cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x296240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296244: 0xc089636  jal         func_2258D8
    ctx->pc = 0x296244u;
    SET_GPR_U32(ctx, 31, 0x29624Cu);
    ctx->pc = 0x296248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296244u;
    // 0x296248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x296244u, 0x29624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29624Cu;
label_29624c:
    // 0x29624c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x29624cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x296250: 0x2463bb10  addiu       $v1, $v1, -0x44F0
    ctx->pc = 0x296250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949648));
    // 0x296254: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x296254u;
    {
        const bool branch_taken_0x296254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296254u;
        // 0x296258: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296254) {
            ctx->pc = 0x296298u;
            return;
        }
    }
    ctx->pc = 0x29625Cu;
    // 0x29625c: 0x0  nop
    ctx->pc = 0x29625cu;
    // NOP
    // 0x296260: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x296260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x296264: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x296264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x296268: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x296268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x29626c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29626cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296270: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x296270u;
    SET_GPR_U32(ctx, 31, 0x296278u);
    ctx->pc = 0x296274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296270u;
    // 0x296274: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x296270u, 0x296278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296278u;
label_296278:
    // 0x296278: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x296278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x29627c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x29627cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x296280: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x296280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x296284: 0x2484fed4  addiu       $a0, $a0, -0x12C
    ctx->pc = 0x296284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966996));
    // 0x296288: 0xc048b90  jal         func_122E40
    ctx->pc = 0x296288u;
    SET_GPR_U32(ctx, 31, 0x296290u);
    ctx->pc = 0x29628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296288u;
    // 0x29628c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x296288u, 0x296290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296290u;
}

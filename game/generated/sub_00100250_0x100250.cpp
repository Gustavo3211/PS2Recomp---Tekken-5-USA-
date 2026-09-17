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

// Function: sub_00100250
// Address: 0x100250 - 0x1002c4
void sub_00100250_0x100250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100250_0x100250");
#endif

    switch (ctx->pc) {
        case 0x10026cu: goto label_10026c;
        default: break;
    }

    ctx->pc = 0x100250u;

    // 0x100250: 0x8c44885c  lw          $a0, -0x77A4($v0)
    ctx->pc = 0x100250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936668)));
    // 0x100254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100258: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x100258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10025c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10025cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x100260: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x100260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x100264: 0xc04007c  jal         func_1001F0
    ctx->pc = 0x100264u;
    SET_GPR_U32(ctx, 31, 0x10026Cu);
    ctx->pc = 0x100268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100264u;
    // 0x100268: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001F0u, 0x100264u, 0x10026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10026Cu;
label_10026c:
    // 0x10026c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10026cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100270: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x100270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x100274: 0x3442b540  ori         $v0, $v0, 0xB540
    ctx->pc = 0x100274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46400);
    // 0x100278: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10027c: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x10027cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x100280: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x100280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x100284: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x100284u;
    {
        const bool branch_taken_0x100284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x100288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100284u;
        // 0x100288: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100284) {
            ctx->pc = 0x1002A8u;
            goto label_1002a8;
        }
    }
    ctx->pc = 0x10028Cu;
    // 0x10028c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10028Cu;
    {
        const bool branch_taken_0x10028c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10028Cu;
        // 0x100290: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10028c) {
            ctx->pc = 0x1002C0u;
            goto label_1002c0;
        }
    }
    ctx->pc = 0x100294u;
    // 0x100294: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x100294u;
    {
        const bool branch_taken_0x100294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x100294) {
            ctx->pc = 0x100298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100294u;
            // 0x100298: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1002B8u;
            goto label_1002b8;
        }
    }
    ctx->pc = 0x10029Cu;
    // 0x10029c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10029Cu;
    {
        const bool branch_taken_0x10029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10029c) {
            ctx->pc = 0x1002C0u;
            goto label_1002c0;
        }
    }
    ctx->pc = 0x1002A4u;
    // 0x1002a4: 0x0  nop
    ctx->pc = 0x1002a4u;
    // NOP
label_1002a8:
    // 0x1002a8: 0x3c11009a  lui         $s1, 0x9A
    ctx->pc = 0x1002a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)154 << 16));
    // 0x1002ac: 0x26313c80  addiu       $s1, $s1, 0x3C80
    ctx->pc = 0x1002acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 15488));
    // 0x1002b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1002B0u;
    {
        const bool branch_taken_0x1002b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1002B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002B0u;
        // 0x1002b4: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1002b0) {
            ctx->pc = 0x1002C0u;
            goto label_1002c0;
        }
    }
    ctx->pc = 0x1002B8u;
label_1002b8:
    // 0x1002b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1002B8u;
    {
        const bool branch_taken_0x1002b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1002BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002B8u;
        // 0x1002bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1002b8) {
            ctx->pc = 0x1002D0u;
            return;
        }
    }
    ctx->pc = 0x1002C0u;
label_1002c0:
    // 0x1002c0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1002c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    ctx->pc = 0x1002c4u;
}

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

// Function: sub_0021A0B8
// Address: 0x21a0b8 - 0x21a288
void sub_0021A0B8_0x21a0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A0B8_0x21a0b8");
#endif

    switch (ctx->pc) {
        case 0x21a0f8u: goto label_21a0f8;
        case 0x21a108u: goto label_21a108;
        case 0x21a11cu: goto label_21a11c;
        case 0x21a130u: goto label_21a130;
        case 0x21a144u: goto label_21a144;
        case 0x21a150u: goto label_21a150;
        case 0x21a170u: goto label_21a170;
        case 0x21a178u: goto label_21a178;
        case 0x21a180u: goto label_21a180;
        case 0x21a194u: goto label_21a194;
        case 0x21a19cu: goto label_21a19c;
        case 0x21a1b0u: goto label_21a1b0;
        case 0x21a1c0u: goto label_21a1c0;
        case 0x21a1d0u: goto label_21a1d0;
        case 0x21a1f8u: goto label_21a1f8;
        case 0x21a20cu: goto label_21a20c;
        case 0x21a220u: goto label_21a220;
        case 0x21a22cu: goto label_21a22c;
        case 0x21a254u: goto label_21a254;
        default: break;
    }

    ctx->pc = 0x21a0b8u;

    // 0x21a0b8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x21a0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x21a0bc: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x21a0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x21a0c0: 0x3c150015  lui         $s5, 0x15
    ctx->pc = 0x21a0c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)21 << 16));
    // 0x21a0c4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x21a0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x21a0c8: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x21a0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x21a0cc: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x21a0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x21a0d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21a0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a0d4: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x21a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x21a0d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21a0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a0dc: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x21a0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x21a0e0: 0x26b35ba0  addiu       $s3, $s5, 0x5BA0
    ctx->pc = 0x21a0e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 23456));
    // 0x21a0e4: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x21a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x21a0e8: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x21a0e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21a0ec: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x21a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x21a0f0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x21a0f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a0f4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21a0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_21a0f8:
    // 0x21a0f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21a0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a0fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21a0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a100: 0xc0867d4  jal         func_219F50
    ctx->pc = 0x21A100u;
    SET_GPR_U32(ctx, 31, 0x21A108u);
    ctx->pc = 0x21A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A100u;
    // 0x21a104: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F50u, 0x21A100u, 0x21A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A108u;
label_21a108:
    // 0x21a108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a10c: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x21A10Cu;
    {
        const bool branch_taken_0x21a10c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A10Cu;
        // 0x21a110: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a10c) {
            ctx->pc = 0x21A148u;
            goto label_21a148;
        }
    }
    ctx->pc = 0x21A114u;
    // 0x21a114: 0xc0867ba  jal         func_219EE8
    ctx->pc = 0x21A114u;
    SET_GPR_U32(ctx, 31, 0x21A11Cu);
    ctx->pc = 0x219EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219EE8u, 0x21A114u, 0x21A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A11Cu;
label_21a11c:
    // 0x21a11c: 0x16560005  bne         $s2, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A11Cu;
    {
        const bool branch_taken_0x21a11c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x21A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A11Cu;
        // 0x21a120: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a11c) {
            ctx->pc = 0x21A134u;
            goto label_21a134;
        }
    }
    ctx->pc = 0x21A124u;
    // 0x21a124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21a124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a128: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21A128u;
    SET_GPR_U32(ctx, 31, 0x21A130u);
    ctx->pc = 0x21A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A128u;
    // 0x21a12c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21A128u, 0x21A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A130u;
label_21a130:
    // 0x21a130: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21a130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_21a134:
    // 0x21a134: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21a134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a138: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21a138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a13c: 0xc0867d4  jal         func_219F50
    ctx->pc = 0x21A13Cu;
    SET_GPR_U32(ctx, 31, 0x21A144u);
    ctx->pc = 0x21A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A13Cu;
    // 0x21a140: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F50u, 0x21A13Cu, 0x21A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A144u;
label_21a144:
    // 0x21a144: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a148:
    // 0x21a148: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21A148u;
    SET_GPR_U32(ctx, 31, 0x21A150u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21A148u, 0x21A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A150u;
label_21a150:
    // 0x21a150: 0x26a55ba0  addiu       $a1, $s5, 0x5BA0
    ctx->pc = 0x21a150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 23456));
    // 0x21a154: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x21a154u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21a158: 0x1010  mfhi        $v0
    ctx->pc = 0x21a158u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x21a15c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21a160: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x21a160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x21a164: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x21a164u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a168: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21A168u;
    SET_GPR_U32(ctx, 31, 0x21A170u);
    ctx->pc = 0x21A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A168u;
    // 0x21a16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21A168u, 0x21A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A170u;
label_21a170:
    // 0x21a170: 0xc086386  jal         func_218E18
    ctx->pc = 0x21A170u;
    SET_GPR_U32(ctx, 31, 0x21A178u);
    ctx->pc = 0x21A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A170u;
    // 0x21a174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E18u, 0x21A170u, 0x21A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A178u;
label_21a178:
    // 0x21a178: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21A178u;
    SET_GPR_U32(ctx, 31, 0x21A180u);
    ctx->pc = 0x21A17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A178u;
    // 0x21a17c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21A178u, 0x21A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A180u;
label_21a180:
    // 0x21a180: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x21a180u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21a184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a188: 0x8010  mfhi        $s0
    ctx->pc = 0x21a188u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x21a18c: 0xc086396  jal         func_218E58
    ctx->pc = 0x21A18Cu;
    SET_GPR_U32(ctx, 31, 0x21A194u);
    ctx->pc = 0x21A190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A18Cu;
    // 0x21a190: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x21A18Cu, 0x21A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A194u;
label_21a194:
    // 0x21a194: 0xc0862ee  jal         func_218BB8
    ctx->pc = 0x21A194u;
    SET_GPR_U32(ctx, 31, 0x21A19Cu);
    ctx->pc = 0x21A198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A194u;
    // 0x21a198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB8u, 0x21A194u, 0x21A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A19Cu;
label_21a19c:
    // 0x21a19c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A19Cu;
    {
        const bool branch_taken_0x21a19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A19Cu;
        // 0x21a1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a19c) {
            ctx->pc = 0x21A1B4u;
            goto label_21a1b4;
        }
    }
    ctx->pc = 0x21A1A4u;
    // 0x21a1a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1a8: 0xc0865a8  jal         func_2196A0
    ctx->pc = 0x21A1A8u;
    SET_GPR_U32(ctx, 31, 0x21A1B0u);
    ctx->pc = 0x21A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1A8u;
    // 0x21a1ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2196A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2196A0u, 0x21A1A8u, 0x21A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1B0u;
label_21a1b0:
    // 0x21a1b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a1b4:
    // 0x21a1b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1b8: 0xc086396  jal         func_218E58
    ctx->pc = 0x21A1B8u;
    SET_GPR_U32(ctx, 31, 0x21A1C0u);
    ctx->pc = 0x21A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1B8u;
    // 0x21a1bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x21A1B8u, 0x21A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1C0u;
label_21a1c0:
    // 0x21a1c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21a1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1c8: 0xc08664a  jal         func_219928
    ctx->pc = 0x21A1C8u;
    SET_GPR_U32(ctx, 31, 0x21A1D0u);
    ctx->pc = 0x21A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1C8u;
    // 0x21a1cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x21A1C8u, 0x21A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1D0u;
label_21a1d0:
    // 0x21a1d0: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x21a1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21a1d4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x21A1D4u;
    {
        const bool branch_taken_0x21a1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1D4u;
        // 0x21a1d8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1d4) {
            ctx->pc = 0x21A0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a0f8;
        }
    }
    ctx->pc = 0x21A1DCu;
    // 0x21a1dc: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x21a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x21a1e0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x21a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21a1e4: 0x24515b28  addiu       $s1, $v0, 0x5B28
    ctx->pc = 0x21a1e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23336));
    // 0x21a1e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21a1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1f0: 0xc0867d4  jal         func_219F50
    ctx->pc = 0x21A1F0u;
    SET_GPR_U32(ctx, 31, 0x21A1F8u);
    ctx->pc = 0x21A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1F0u;
    // 0x21a1f4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F50u, 0x21A1F0u, 0x21A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1F8u;
label_21a1f8:
    // 0x21a1f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1fc: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A1FCu;
    {
        const bool branch_taken_0x21a1fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a1fc) {
            ctx->pc = 0x21A224u;
            goto label_21a224;
        }
    }
    ctx->pc = 0x21A204u;
    // 0x21a204: 0xc0867cc  jal         func_219F30
    ctx->pc = 0x21A204u;
    SET_GPR_U32(ctx, 31, 0x21A20Cu);
    ctx->pc = 0x21A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A204u;
    // 0x21a208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F30u, 0x21A204u, 0x21A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A20Cu;
label_21a20c:
    // 0x21a20c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x21a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21a210: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a214: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21a214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a218: 0xc0867d4  jal         func_219F50
    ctx->pc = 0x21A218u;
    SET_GPR_U32(ctx, 31, 0x21A220u);
    ctx->pc = 0x21A21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A218u;
    // 0x21a21c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F50u, 0x21A218u, 0x21A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A220u;
label_21a220:
    // 0x21a220: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a224:
    // 0x21a224: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21A224u;
    SET_GPR_U32(ctx, 31, 0x21A22Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21A224u, 0x21A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A22Cu;
label_21a22c:
    // 0x21a22c: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x21a22cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x21a230: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x21a230u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21a234: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a238: 0x1010  mfhi        $v0
    ctx->pc = 0x21a238u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x21a23c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21a240: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21a240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21a244: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x21a244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a248: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x21a248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a24c: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21A24Cu;
    SET_GPR_U32(ctx, 31, 0x21A254u);
    ctx->pc = 0x21A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A24Cu;
    // 0x21a250: 0xace68880  sw          $a2, -0x7780($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294936704), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21A24Cu, 0x21A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A254u;
label_21a254:
    // 0x21a254: 0x8f82c930  lw          $v0, -0x36D0($gp)
    ctx->pc = 0x21a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953264)));
    // 0x21a258: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x21a258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21a25c: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x21a25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x21a260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21a260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21a264: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x21a264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x21a268: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x21a268u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21a26c: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x21a26cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x21a270: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x21a270u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x21a274: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x21a274u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x21a278: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x21a278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x21a27c: 0xaf82c930  sw          $v0, -0x36D0($gp)
    ctx->pc = 0x21a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953264), GPR_U32(ctx, 2));
    // 0x21a280: 0x3e00008  jr          $ra
    ctx->pc = 0x21A280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A280u;
        // 0x21a284: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A288u;
}

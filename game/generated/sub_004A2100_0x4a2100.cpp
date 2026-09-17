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

// Function: sub_004A2100
// Address: 0x4a2100 - 0x4a2348
void sub_004A2100_0x4a2100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2100_0x4a2100");
#endif

    switch (ctx->pc) {
        case 0x4a2124u: goto label_4a2124;
        case 0x4a2148u: goto label_4a2148;
        case 0x4a21b8u: goto label_4a21b8;
        case 0x4a21e0u: goto label_4a21e0;
        case 0x4a2214u: goto label_4a2214;
        case 0x4a2228u: goto label_4a2228;
        case 0x4a22d8u: goto label_4a22d8;
        case 0x4a2300u: goto label_4a2300;
        default: break;
    }

    ctx->pc = 0x4a2100u;

    // 0x4a2100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a2100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a2104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a2104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a2108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a2108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a210c: 0x2610004a  addiu       $s0, $s0, 0x4A
    ctx->pc = 0x4a210cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 74));
    // 0x4a2110: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a2110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a2114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a2114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a2118: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a2118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a211c: 0xc1284f0  jal         func_4A13C0
    ctx->pc = 0x4A211Cu;
    SET_GPR_U32(ctx, 31, 0x4A2124u);
    ctx->pc = 0x4A2120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A211Cu;
    // 0x4a2120: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A13C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A13C0u, 0x4A211Cu, 0x4A2124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2124u;
label_4a2124:
    // 0x4a2124: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a2124u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a2128: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a2128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a212c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4a212cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a2130: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a2130u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a2134: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x4a2134u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a2138: 0x4430011  bgezl       $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A2138u;
    {
        const bool branch_taken_0x4a2138 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a2138) {
            ctx->pc = 0x4A213Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2138u;
            // 0x4a213c: 0x3c11ffff  lui         $s1, 0xFFFF (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2180u;
            goto label_4a2180;
        }
    }
    ctx->pc = 0x4A2140u;
    // 0x4a2140: 0xc12a0e2  jal         func_4A8388
    ctx->pc = 0x4A2140u;
    SET_GPR_U32(ctx, 31, 0x4A2148u);
    ctx->pc = 0x4A2144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2140u;
    // 0x4a2144: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8388u, 0x4A2140u, 0x4A2148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2148u;
label_4a2148:
    // 0x4a2148: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a2148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a214c: 0x2444d680  addiu       $a0, $v0, -0x2980
    ctx->pc = 0x4a214cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4a2150: 0x8483007e  lh          $v1, 0x7E($a0)
    ctx->pc = 0x4a2150u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D6FEu));
    // 0x4a2154: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A2154u;
    {
        const bool branch_taken_0x4a2154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a2154) {
            ctx->pc = 0x4A2158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2154u;
            // 0x4a2158: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2178u;
            goto label_4a2178;
        }
    }
    ctx->pc = 0x4A215Cu;
    // 0x4a215c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a215cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a2160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a2164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a2164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a2168: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a2168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a216c: 0x812b260  j           func_4AC980
    ctx->pc = 0x4A216Cu;
    ctx->pc = 0x4A2170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A216Cu;
    // 0x4a2170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC980u, 0x4A216Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A2174u;
    // 0x4a2174: 0x0  nop
    ctx->pc = 0x4a2174u;
    // NOP
label_4a2178:
    // 0x4a2178: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x4A2178u;
    {
        const bool branch_taken_0x4a2178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2178u;
        // 0x4a217c: 0xa482000a  sh          $v0, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2178) {
            ctx->pc = 0x4A22E4u;
            goto label_4a22e4;
        }
    }
    ctx->pc = 0x4A2180u;
label_4a2180:
    // 0x4a2180: 0x511825  or          $v1, $v0, $s1
    ctx->pc = 0x4a2180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a2184: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4a2184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4a2188: 0x2c820064  sltiu       $v0, $a0, 0x64
    ctx->pc = 0x4a2188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x4a218c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4A218Cu;
    {
        const bool branch_taken_0x4a218c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A218Cu;
        // 0x4a2190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a218c) {
            ctx->pc = 0x4A2214u;
            goto label_4a2214;
        }
    }
    ctx->pc = 0x4A2194u;
    // 0x4a2194: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x4a2194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x4a2198: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A2198u;
    {
        const bool branch_taken_0x4a2198 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a2198) {
            ctx->pc = 0x4A219Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2198u;
            // 0x4a219c: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A21C0u;
            goto label_4a21c0;
        }
    }
    ctx->pc = 0x4A21A0u;
    // 0x4a21a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4a21a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a21a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4a21a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a21a8: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x4a21a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x4a21ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a21acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a21b0: 0xc129ba6  jal         func_4A6E98
    ctx->pc = 0x4A21B0u;
    SET_GPR_U32(ctx, 31, 0x4A21B8u);
    ctx->pc = 0x4A21B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A21B0u;
    // 0x4a21b4: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6E98u, 0x4A21B0u, 0x4A21B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A21B8u;
label_4a21b8:
    // 0x4a21b8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4A21B8u;
    {
        const bool branch_taken_0x4a21b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a21b8) {
            ctx->pc = 0x4A2214u;
            goto label_4a2214;
        }
    }
    ctx->pc = 0x4A21C0u;
label_4a21c0:
    // 0x4a21c0: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4a21c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a21c4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a21c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a21c8: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4a21c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a21cc: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x4a21ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x4a21d0: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A21D0u;
    {
        const bool branch_taken_0x4a21d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a21d0) {
            ctx->pc = 0x4A2214u;
            goto label_4a2214;
        }
    }
    ctx->pc = 0x4A21D8u;
    // 0x4a21d8: 0xc129354  jal         func_4A4D50
    ctx->pc = 0x4A21D8u;
    SET_GPR_U32(ctx, 31, 0x4A21E0u);
    ctx->pc = 0x4A4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D50u, 0x4A21D8u, 0x4A21E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A21E0u;
label_4a21e0:
    // 0x4a21e0: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x4a21e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a21e4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a21e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a21e8: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x4a21e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a21ec: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x4a21ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x4a21f0: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4a21f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a21f4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a21f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a21f8: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4a21f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a21fc: 0x32030010  andi        $v1, $s0, 0x10
    ctx->pc = 0x4a21fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x4a2200: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A2200u;
    {
        const bool branch_taken_0x4a2200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2200) {
            ctx->pc = 0x4A2214u;
            goto label_4a2214;
        }
    }
    ctx->pc = 0x4A2208u;
    // 0x4a2208: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a2208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a220c: 0xc129b66  jal         func_4A6D98
    ctx->pc = 0x4A220Cu;
    SET_GPR_U32(ctx, 31, 0x4A2214u);
    ctx->pc = 0x4A2210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A220Cu;
    // 0x4a2210: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6D98u, 0x4A220Cu, 0x4A2214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2214u;
label_4a2214:
    // 0x4a2214: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a2214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a2218: 0x3642ffff  ori         $v0, $s2, 0xFFFF
    ctx->pc = 0x4a2218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4a221c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x4a221cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x4a2220: 0xc129c54  jal         func_4A7150
    ctx->pc = 0x4A2220u;
    SET_GPR_U32(ctx, 31, 0x4A2228u);
    ctx->pc = 0x4A2224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2220u;
    // 0x4a2224: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7150u, 0x4A2220u, 0x4A2228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2228u;
label_4a2228:
    // 0x4a2228: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x4a2228u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x4a222c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a222cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4a2230: 0x2627d680  addiu       $a3, $s1, -0x2980
    ctx->pc = 0x4a2230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4a2234: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4a2234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a2238: 0x24eb000e  addiu       $t3, $a3, 0xE
    ctx->pc = 0x4a2238u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 14));
    // 0x4a223c: 0x24ea0010  addiu       $t2, $a3, 0x10
    ctx->pc = 0x4a223cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x4a2240: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4a2240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D68Eu));
    // 0x4a2244: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4a2244u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D690u));
    // 0x4a2248: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x4a2248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a224c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4a224cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4a2250: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a2250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a2254: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a2254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a2258: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a2258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a225c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4a225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4a2260: 0xa28024  and         $s0, $a1, $v0
    ctx->pc = 0x4a2260u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a2264: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4a2264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4a2268: 0x460001b  bltz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x4A2268u;
    {
        const bool branch_taken_0x4a2268 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2268u;
        // 0x4a226c: 0x24880002  addiu       $t0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2268) {
            ctx->pc = 0x4A22D8u;
            goto label_4a22d8;
        }
    }
    ctx->pc = 0x4A2270u;
    // 0x4a2270: 0x24e60016  addiu       $a2, $a3, 0x16
    ctx->pc = 0x4a2270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 22));
    // 0x4a2274: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x4a2274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x4a2278: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4a2278u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a227c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a227cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a2280: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4a2280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4a2284: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4a2284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4a2288: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4A2288u;
    {
        const bool branch_taken_0x4a2288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2288u;
        // 0x4a228c: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2288) {
            ctx->pc = 0x4A22C0u;
            goto label_4a22c0;
        }
    }
    ctx->pc = 0x4A2290u;
    // 0x4a2290: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4a2290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2294: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x4a2294u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a2298: 0x891824  and         $v1, $a0, $t1
    ctx->pc = 0x4a2298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x4a229c: 0xa5440000  sh          $a0, 0x0($t2)
    ctx->pc = 0x4a229cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a22a0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4a22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a22a4: 0x24e40012  addiu       $a0, $a3, 0x12
    ctx->pc = 0x4a22a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 18));
    // 0x4a22a8: 0xa5630000  sh          $v1, 0x0($t3)
    ctx->pc = 0x4a22a8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a22ac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a22acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a22b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4a22b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4a22b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A22B4u;
    {
        const bool branch_taken_0x4a22b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A22B4u;
        // 0x4a22b8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a22b4) {
            ctx->pc = 0x4A22C4u;
            goto label_4a22c4;
        }
    }
    ctx->pc = 0x4A22BCu;
    // 0x4a22bc: 0x0  nop
    ctx->pc = 0x4a22bcu;
    // NOP
label_4a22c0:
    // 0x4a22c0: 0x24e40012  addiu       $a0, $a3, 0x12
    ctx->pc = 0x4a22c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 18));
label_4a22c4:
    // 0x4a22c4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a22c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a22c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A22C8u;
    {
        const bool branch_taken_0x4a22c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A22C8u;
        // 0x4a22cc: 0x2623d680  addiu       $v1, $s1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a22c8) {
            ctx->pc = 0x4A22DCu;
            goto label_4a22dc;
        }
    }
    ctx->pc = 0x4A22D0u;
    // 0x4a22d0: 0xc12385a  jal         func_48E168
    ctx->pc = 0x4A22D0u;
    SET_GPR_U32(ctx, 31, 0x4A22D8u);
    ctx->pc = 0x48E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E168u, 0x4A22D0u, 0x4A22D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A22D8u;
label_4a22d8:
    // 0x4a22d8: 0x2623d680  addiu       $v1, $s1, -0x2980
    ctx->pc = 0x4a22d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
label_4a22dc:
    // 0x4a22dc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4a22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4a22e0: 0xa462007c  sh          $v0, 0x7C($v1)
    ctx->pc = 0x4a22e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 124), (uint16_t)GPR_U32(ctx, 2));
label_4a22e4:
    // 0x4a22e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a22e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a22e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a22e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a22ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a22ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a22f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a22f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a22f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A22F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A22F4u;
        // 0x4a22f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A22F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A22FCu;
    // 0x4a22fc: 0x0  nop
    ctx->pc = 0x4a22fcu;
    // NOP
label_4a2300:
    // 0x4a2300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a2300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a2304: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x4a2304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x4a2308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a2308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a230c: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x4a230cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x4a2310: 0xa482004a  sh          $v0, 0x4A($a0)
    ctx->pc = 0x4a2310u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 74), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a2314: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a2314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a2318: 0x24638880  addiu       $v1, $v1, -0x7780
    ctx->pc = 0x4a2318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936704));
    // 0x4a231c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a231cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2320: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4a2320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4a2324: 0x32402  srl         $a0, $v1, 16
    ctx->pc = 0x4a2324u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a2328: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a2328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a232c: 0xa444000e  sh          $a0, 0xE($v0)
    ctx->pc = 0x4a232cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a2330: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x4a2330u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2334: 0xa4450012  sh          $a1, 0x12($v0)
    ctx->pc = 0x4a2334u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a2338: 0xa4400016  sh          $zero, 0x16($v0)
    ctx->pc = 0x4a2338u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a233c: 0x812322e  j           func_48C8B8
    ctx->pc = 0x4A233Cu;
    ctx->pc = 0x4A2340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A233Cu;
    // 0x4a2340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C8B8u, 0x4A233Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A2344u;
    // 0x4a2344: 0x0  nop
    ctx->pc = 0x4a2344u;
    // NOP
    ctx->pc = 0x4a2348u;
}

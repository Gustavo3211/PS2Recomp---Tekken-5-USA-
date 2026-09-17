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

// Function: sub_0035E1C8
// Address: 0x35e1c8 - 0x35e7b0
void sub_0035E1C8_0x35e1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E1C8_0x35e1c8");
#endif

    switch (ctx->pc) {
        case 0x35e204u: goto label_35e204;
        case 0x35e22cu: goto label_35e22c;
        case 0x35e268u: goto label_35e268;
        case 0x35e29cu: goto label_35e29c;
        case 0x35e2b0u: goto label_35e2b0;
        case 0x35e2f8u: goto label_35e2f8;
        case 0x35e310u: goto label_35e310;
        case 0x35e320u: goto label_35e320;
        case 0x35e3f0u: goto label_35e3f0;
        case 0x35e4d8u: goto label_35e4d8;
        case 0x35e520u: goto label_35e520;
        case 0x35e570u: goto label_35e570;
        case 0x35e5acu: goto label_35e5ac;
        case 0x35e658u: goto label_35e658;
        case 0x35e704u: goto label_35e704;
        case 0x35e718u: goto label_35e718;
        default: break;
    }

    ctx->pc = 0x35e1c8u;

    // 0x35e1c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35e1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35e1cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e1d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35e1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e1d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e1d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e1d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e1dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35e1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35e1e0: 0x3093ffff  andi        $s3, $a0, 0xFFFF
    ctx->pc = 0x35e1e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35e1e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e1e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35e1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35e1ec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x35e1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35e1f0: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E1F0u;
    {
        const bool branch_taken_0x35e1f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E1F0u;
        // 0x35e1f4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e1f0) {
            ctx->pc = 0x35E210u;
            goto label_35e210;
        }
    }
    ctx->pc = 0x35E1F8u;
    // 0x35e1f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e1fc: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E1FCu;
    SET_GPR_U32(ctx, 31, 0x35E204u);
    ctx->pc = 0x35E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E1FCu;
    // 0x35e200: 0x24845f98  addiu       $a0, $a0, 0x5F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E1FCu, 0x35E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E204u;
label_35e204:
    // 0x35e204: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e208: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x35E208u;
    {
        const bool branch_taken_0x35e208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E208u;
        // 0x35e20c: 0x34420026  ori         $v0, $v0, 0x26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e208) {
            ctx->pc = 0x35E4B4u;
            goto label_35e4b4;
        }
    }
    ctx->pc = 0x35E210u;
label_35e210:
    // 0x35e210: 0x2e620040  sltiu       $v0, $s3, 0x40
    ctx->pc = 0x35e210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35e214: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x35E214u;
    {
        const bool branch_taken_0x35e214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e214) {
            ctx->pc = 0x35E218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E214u;
            // 0x35e218: 0x131040  sll         $v0, $s3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E238u;
            goto label_35e238;
        }
    }
    ctx->pc = 0x35E21Cu;
    // 0x35e21c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e220: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35e220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e224: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E224u;
    SET_GPR_U32(ctx, 31, 0x35E22Cu);
    ctx->pc = 0x35E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E224u;
    // 0x35e228: 0x24845fd0  addiu       $a0, $a0, 0x5FD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E224u, 0x35E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E22Cu;
label_35e22c:
    // 0x35e22c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e230: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x35E230u;
    {
        const bool branch_taken_0x35e230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E230u;
        // 0x35e234: 0x3442001f  ori         $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e230) {
            ctx->pc = 0x35E4B4u;
            goto label_35e4b4;
        }
    }
    ctx->pc = 0x35E238u;
label_35e238:
    // 0x35e238: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x35e238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x35e23c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e240: 0x3c11001d  lui         $s1, 0x1D
    ctx->pc = 0x35e240u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)29 << 16));
    // 0x35e244: 0x26312c68  addiu       $s1, $s1, 0x2C68
    ctx->pc = 0x35e244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11368));
    // 0x35e248: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x35e248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x35e24c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x35e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35e250: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E250u;
    {
        const bool branch_taken_0x35e250 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x35E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E250u;
        // 0x35e254: 0x3c15001d  lui         $s5, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e250) {
            ctx->pc = 0x35E278u;
            goto label_35e278;
        }
    }
    ctx->pc = 0x35E258u;
    // 0x35e258: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e25c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35e25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e260: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E260u;
    SET_GPR_U32(ctx, 31, 0x35E268u);
    ctx->pc = 0x35E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E260u;
    // 0x35e264: 0x24846008  addiu       $a0, $a0, 0x6008 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E260u, 0x35E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E268u;
label_35e268:
    // 0x35e268: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e26c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x35E26Cu;
    {
        const bool branch_taken_0x35e26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E26Cu;
        // 0x35e270: 0x34420022  ori         $v0, $v0, 0x22 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e26c) {
            ctx->pc = 0x35E4B4u;
            goto label_35e4b4;
        }
    }
    ctx->pc = 0x35E274u;
    // 0x35e274: 0x0  nop
    ctx->pc = 0x35e274u;
    // NOP
label_35e278:
    // 0x35e278: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x35e278u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35e27c: 0x24020a01  addiu       $v0, $zero, 0xA01
    ctx->pc = 0x35e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    // 0x35e280: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E280u;
    {
        const bool branch_taken_0x35e280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35e280) {
            ctx->pc = 0x35E2A8u;
            goto label_35e2a8;
        }
    }
    ctx->pc = 0x35E288u;
    // 0x35e288: 0x92060005  lbu         $a2, 0x5($s0)
    ctx->pc = 0x35e288u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x35e28c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e290: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x35e290u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35e294: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E294u;
    SET_GPR_U32(ctx, 31, 0x35E29Cu);
    ctx->pc = 0x35E298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E294u;
    // 0x35e298: 0x24846050  addiu       $a0, $a0, 0x6050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E294u, 0x35E29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E29Cu;
label_35e29c:
    // 0x35e29c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e2a0: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x35E2A0u;
    {
        const bool branch_taken_0x35e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2A0u;
        // 0x35e2a4: 0x3442001e  ori         $v0, $v0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e2a0) {
            ctx->pc = 0x35E4B4u;
            goto label_35e4b4;
        }
    }
    ctx->pc = 0x35E2A8u;
label_35e2a8:
    // 0x35e2a8: 0xc0d7c1c  jal         func_35F070
    ctx->pc = 0x35E2A8u;
    SET_GPR_U32(ctx, 31, 0x35E2B0u);
    ctx->pc = 0x35E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E2A8u;
    // 0x35e2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F070u, 0x35E2A8u, 0x35E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E2B0u;
label_35e2b0:
    // 0x35e2b0: 0x2784cc04  addiu       $a0, $gp, -0x33FC
    ctx->pc = 0x35e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953988));
    // 0x35e2b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35e2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35e2b8: 0x242a021  addu        $s4, $s2, $v0
    ctx->pc = 0x35e2b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x35e2bc: 0x74182b  sltu        $v1, $v1, $s4
    ctx->pc = 0x35e2bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x35e2c0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x35E2C0u;
    {
        const bool branch_taken_0x35e2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e2c0) {
            ctx->pc = 0x35E2F0u;
            goto label_35e2f0;
        }
    }
    ctx->pc = 0x35E2C8u;
    // 0x35e2c8: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x35e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x35e2cc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x35e2ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35e2d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E2D0u;
    {
        const bool branch_taken_0x35e2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2D0u;
        // 0x35e2d4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e2d0) {
            ctx->pc = 0x35E2F0u;
            goto label_35e2f0;
        }
    }
    ctx->pc = 0x35E2D8u;
    // 0x35e2d8: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x35e2d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35e2dc: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x35e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x35e2e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35e2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e2e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x35e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x35e2e8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x35E2E8u;
    {
        const bool branch_taken_0x35e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2E8u;
        // 0x35e2ec: 0xae320004  sw          $s2, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e2e8) {
            ctx->pc = 0x35E334u;
            goto label_35e334;
        }
    }
    ctx->pc = 0x35E2F0u;
label_35e2f0:
    // 0x35e2f0: 0xc0d7822  jal         func_35E088
    ctx->pc = 0x35E2F0u;
    SET_GPR_U32(ctx, 31, 0x35E2F8u);
    ctx->pc = 0x35E088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E088u, 0x35E2F0u, 0x35E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E2F8u;
label_35e2f8:
    // 0x35e2f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e2fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35e2fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e300: 0x24846098  addiu       $a0, $a0, 0x6098
    ctx->pc = 0x35e300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24728));
    // 0x35e304: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35e304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e308: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E308u;
    SET_GPR_U32(ctx, 31, 0x35E310u);
    ctx->pc = 0x35E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E308u;
    // 0x35e30c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E308u, 0x35E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E310u;
label_35e310:
    // 0x35e310: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e314: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x35E314u;
    {
        const bool branch_taken_0x35e314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E314u;
        // 0x35e318: 0x34420021  ori         $v0, $v0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e314) {
            ctx->pc = 0x35E4B4u;
            goto label_35e4b4;
        }
    }
    ctx->pc = 0x35E31Cu;
    // 0x35e31c: 0x0  nop
    ctx->pc = 0x35e31cu;
    // NOP
label_35e320:
    // 0x35e320: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x35e320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x35e324: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x35e324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x35e328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35e328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35e32c: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x35e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x35e330: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x35e330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_35e334:
    // 0x35e334: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x35e334u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35e338: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x35e338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35e33c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35E33Cu;
    {
        const bool branch_taken_0x35e33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E33Cu;
        // 0x35e340: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e33c) {
            ctx->pc = 0x35E320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e320;
        }
    }
    ctx->pc = 0x35E344u;
    // 0x35e344: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x35e344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x35e348: 0x3c0a001d  lui         $t2, 0x1D
    ctx->pc = 0x35e348u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)29 << 16));
    // 0x35e34c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x35e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x35e350: 0x25452fe8  addiu       $a1, $t2, 0x2FE8
    ctx->pc = 0x35e350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 12264));
    // 0x35e354: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e358: 0x8f84c7e4  lw          $a0, -0x381C($gp)
    ctx->pc = 0x35e358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952932)));
    // 0x35e35c: 0x454021  addu        $t0, $v0, $a1
    ctx->pc = 0x35e35cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35e360: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x35e360u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
    // 0x35e364: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x35e364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35e368: 0x480003d  bltz        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x35E368u;
    {
        const bool branch_taken_0x35e368 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x35E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E368u;
        // 0x35e36c: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e368) {
            ctx->pc = 0x35E460u;
            goto label_35e460;
        }
    }
    ctx->pc = 0x35E370u;
    // 0x35e370: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x35e370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35e374: 0x26a32c68  addiu       $v1, $s5, 0x2C68
    ctx->pc = 0x35e374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 11368));
    // 0x35e378: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35e37c: 0x24690004  addiu       $t1, $v1, 0x4
    ctx->pc = 0x35e37cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x35e380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e384: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x35e384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x35e388: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35e388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35e38c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x35e38cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35e390: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E390u;
    {
        const bool branch_taken_0x35e390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E390u;
        // 0x35e394: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e390) {
            ctx->pc = 0x35E3B0u;
            goto label_35e3b0;
        }
    }
    ctx->pc = 0x35E398u;
    // 0x35e398: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35e398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e39c: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x35e39cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
    // 0x35e3a0: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x35e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x35e3a4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x35E3A4u;
    {
        const bool branch_taken_0x35e3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E3A4u;
        // 0x35e3a8: 0xaf93c7e4  sw          $s3, -0x381C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952932), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e3a4) {
            ctx->pc = 0x35E470u;
            goto label_35e470;
        }
    }
    ctx->pc = 0x35E3ACu;
    // 0x35e3ac: 0x0  nop
    ctx->pc = 0x35e3acu;
    // NOP
label_35e3b0:
    // 0x35e3b0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x35e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x35e3b4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x35e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x35e3b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e3bc: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x35e3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35e3c0: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x35e3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x35e3c4: 0x4a00021  bltz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x35E3C4u;
    {
        const bool branch_taken_0x35e3c4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x35E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E3C4u;
        // 0x35e3c8: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e3c4) {
            ctx->pc = 0x35E44Cu;
            goto label_35e44c;
        }
    }
    ctx->pc = 0x35E3CCu;
    // 0x35e3cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35e3d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e3d4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x35e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x35e3d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35e3dc: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x35e3dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35e3e0: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x35E3E0u;
    {
        const bool branch_taken_0x35e3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e3e0) {
            ctx->pc = 0x35E3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E3E0u;
            // 0x35e3e4: 0xad07000c  sw          $a3, 0xC($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E438u;
            goto label_35e438;
        }
    }
    ctx->pc = 0x35E3E8u;
    // 0x35e3e8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x35e3e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e3ec: 0x0  nop
    ctx->pc = 0x35e3ecu;
    // NOP
label_35e3f0:
    // 0x35e3f0: 0x25442fe8  addiu       $a0, $t2, 0x2FE8
    ctx->pc = 0x35e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 12264));
    // 0x35e3f4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x35e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x35e3f8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x35e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x35e3fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e400: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x35e400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35e404: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x35e404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x35e408: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x35e408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x35e40c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x35e40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e410: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35E410u;
    {
        const bool branch_taken_0x35e410 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x35E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E410u;
        // 0x35e414: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e410) {
            ctx->pc = 0x35E44Cu;
            goto label_35e44c;
        }
    }
    ctx->pc = 0x35E418u;
    // 0x35e418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e41c: 0x26a32c68  addiu       $v1, $s5, 0x2C68
    ctx->pc = 0x35e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 11368));
    // 0x35e420: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35e420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35e424: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x35e424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35e428: 0x244202b  sltu        $a0, $s2, $a0
    ctx->pc = 0x35e428u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x35e42c: 0x5080fff0  beql        $a0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x35E42Cu;
    {
        const bool branch_taken_0x35e42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e42c) {
            ctx->pc = 0x35E430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E42Cu;
            // 0x35e430: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e3f0;
        }
    }
    ctx->pc = 0x35E434u;
    // 0x35e434: 0xad07000c  sw          $a3, 0xC($t0)
    ctx->pc = 0x35e434u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 7));
label_35e438:
    // 0x35e438: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x35e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x35e43c: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x35e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
    // 0x35e440: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x35e440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x35e444: 0x443000b  bgezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35E444u;
    {
        const bool branch_taken_0x35e444 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35e444) {
            ctx->pc = 0x35E448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E444u;
            // 0x35e448: 0x8d04000c  lw          $a0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E474u;
            goto label_35e474;
        }
    }
    ctx->pc = 0x35E44Cu;
label_35e44c:
    // 0x35e44c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e450: 0xad07000c  sw          $a3, 0xC($t0)
    ctx->pc = 0x35e450u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 7));
    // 0x35e454: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35E454u;
    {
        const bool branch_taken_0x35e454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E454u;
        // 0x35e458: 0xad020010  sw          $v0, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e454) {
            ctx->pc = 0x35E470u;
            goto label_35e470;
        }
    }
    ctx->pc = 0x35E45Cu;
    // 0x35e45c: 0x0  nop
    ctx->pc = 0x35e45cu;
    // NOP
label_35e460:
    // 0x35e460: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e464: 0xaf93c7e4  sw          $s3, -0x381C($gp)
    ctx->pc = 0x35e464u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952932), GPR_U32(ctx, 19));
    // 0x35e468: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x35e468u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
    // 0x35e46c: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x35e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_35e470:
    // 0x35e470: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x35e470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_35e474:
    // 0x35e474: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35E474u;
    {
        const bool branch_taken_0x35e474 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x35E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E474u;
        // 0x35e478: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e474) {
            ctx->pc = 0x35E490u;
            goto label_35e490;
        }
    }
    ctx->pc = 0x35E47Cu;
    // 0x35e47c: 0x25432fe8  addiu       $v1, $t2, 0x2FE8
    ctx->pc = 0x35e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 12264));
    // 0x35e480: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35e484: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e488: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x35e488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35e48c: 0xacd30010  sw          $s3, 0x10($a2)
    ctx->pc = 0x35e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 19));
label_35e490:
    // 0x35e490: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x35e490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x35e494: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35E494u;
    {
        const bool branch_taken_0x35e494 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x35E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E494u;
        // 0x35e498: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e494) {
            ctx->pc = 0x35E4B0u;
            goto label_35e4b0;
        }
    }
    ctx->pc = 0x35E49Cu;
    // 0x35e49c: 0x25432fe8  addiu       $v1, $t2, 0x2FE8
    ctx->pc = 0x35e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 12264));
    // 0x35e4a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35e4a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e4a8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x35e4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35e4ac: 0xacd3000c  sw          $s3, 0xC($a2)
    ctx->pc = 0x35e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 19));
label_35e4b0:
    // 0x35e4b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e4b4:
    // 0x35e4b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e4b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e4b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e4bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e4bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e4c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35e4c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e4c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35e4c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e4c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35e4c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35e4cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35e4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35e4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x35E4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4D0u;
        // 0x35e4d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E4D8u;
label_35e4d8:
    // 0x35e4d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e4dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35e4dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e4e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e4e4: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x35e4e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35e4e8: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x35e4e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35e4ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e4f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e4f4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x35e4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e4f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35e4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35e4fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35e4fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e500: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35e500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35e504: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x35e504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e508: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E508u;
    {
        const bool branch_taken_0x35e508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E508u;
        // 0x35e50c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e508) {
            ctx->pc = 0x35E530u;
            goto label_35e530;
        }
    }
    ctx->pc = 0x35E510u;
    // 0x35e510: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35e514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e518: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E518u;
    SET_GPR_U32(ctx, 31, 0x35E520u);
    ctx->pc = 0x35E51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E518u;
    // 0x35e51c: 0x248460e0  addiu       $a0, $a0, 0x60E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E518u, 0x35E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E520u;
label_35e520:
    // 0x35e520: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e524: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x35E524u;
    {
        const bool branch_taken_0x35e524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E524u;
        // 0x35e528: 0x3442001f  ori         $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e524) {
            ctx->pc = 0x35E790u;
            goto label_35e790;
        }
    }
    ctx->pc = 0x35E52Cu;
    // 0x35e52c: 0x0  nop
    ctx->pc = 0x35e52cu;
    // NOP
label_35e530:
    // 0x35e530: 0x10a080  sll         $s4, $s0, 2
    ctx->pc = 0x35e530u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35e534: 0x3c13001d  lui         $s3, 0x1D
    ctx->pc = 0x35e534u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)29 << 16));
    // 0x35e538: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x35e538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x35e53c: 0x26672fe8  addiu       $a3, $s3, 0x2FE8
    ctx->pc = 0x35e53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 12264));
    // 0x35e540: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e544: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x35e544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x35e548: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x35e548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x35e54c: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E54Cu;
    {
        const bool branch_taken_0x35e54c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x35E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E54Cu;
        // 0x35e550: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e54c) {
            ctx->pc = 0x35E564u;
            goto label_35e564;
        }
    }
    ctx->pc = 0x35E554u;
    // 0x35e554: 0x8f84c7e4  lw          $a0, -0x381C($gp)
    ctx->pc = 0x35e554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952932)));
    // 0x35e558: 0x14900009  bne         $a0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E558u;
    {
        const bool branch_taken_0x35e558 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x35e558) {
            ctx->pc = 0x35E580u;
            goto label_35e580;
        }
    }
    ctx->pc = 0x35E560u;
    // 0x35e560: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_35e564:
    // 0x35e564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35e564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e568: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E568u;
    SET_GPR_U32(ctx, 31, 0x35E570u);
    ctx->pc = 0x35E56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E568u;
    // 0x35e56c: 0x24846120  addiu       $a0, $a0, 0x6120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E568u, 0x35E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E570u;
label_35e570:
    // 0x35e570: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e574: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x35E574u;
    {
        const bool branch_taken_0x35e574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E574u;
        // 0x35e578: 0x34420022  ori         $v0, $v0, 0x22 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e574) {
            ctx->pc = 0x35E790u;
            goto label_35e790;
        }
    }
    ctx->pc = 0x35E57Cu;
    // 0x35e57c: 0x0  nop
    ctx->pc = 0x35e57cu;
    // NOP
label_35e580:
    // 0x35e580: 0x278bcc04  addiu       $t3, $gp, -0x33FC
    ctx->pc = 0x35e580u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953988));
    // 0x35e584: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x35e584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x35e588: 0x8d65fffc  lw          $a1, -0x4($t3)
    ctx->pc = 0x35e588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294967292)));
    // 0x35e58c: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x35e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x35e590: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x35e590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x35e594: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35E594u;
    {
        const bool branch_taken_0x35e594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e594) {
            ctx->pc = 0x35E5B8u;
            goto label_35e5b8;
        }
    }
    ctx->pc = 0x35E59Cu;
    // 0x35e59c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e5a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x35e5a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e5a4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E5A4u;
    SET_GPR_U32(ctx, 31, 0x35E5ACu);
    ctx->pc = 0x35E5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E5A4u;
    // 0x35e5a8: 0x24846168  addiu       $a0, $a0, 0x6168 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E5A4u, 0x35E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E5ACu;
label_35e5ac:
    // 0x35e5ac: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x35E5ACu;
    {
        const bool branch_taken_0x35e5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e5ac) {
            ctx->pc = 0x35E704u;
            goto label_35e704;
        }
    }
    ctx->pc = 0x35E5B4u;
    // 0x35e5b4: 0x0  nop
    ctx->pc = 0x35e5b4u;
    // NOP
label_35e5b8:
    // 0x35e5b8: 0x4800055  bltz        $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x35E5B8u;
    {
        const bool branch_taken_0x35e5b8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x35E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E5B8u;
        // 0x35e5bc: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e5b8) {
            ctx->pc = 0x35E710u;
            goto label_35e710;
        }
    }
    ctx->pc = 0x35E5C0u;
    // 0x35e5c0: 0x3c0d001d  lui         $t5, 0x1D
    ctx->pc = 0x35e5c0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)29 << 16));
    // 0x35e5c4: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x35e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x35e5c8: 0x25a32c68  addiu       $v1, $t5, 0x2C68
    ctx->pc = 0x35e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 11368));
    // 0x35e5cc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x35e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x35e5d0: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x35e5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x35e5d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e5d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x35e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35e5dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35e5e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x35e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x35e5e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35e5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35e5e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35e5ec: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x35e5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x35e5f0: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x35e5f0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e5f4: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x35e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x35e5f8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x35e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35e5fc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x35e5fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x35e600: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E600u;
    {
        const bool branch_taken_0x35e600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E600u;
        // 0x35e604: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e600) {
            ctx->pc = 0x35E620u;
            goto label_35e620;
        }
    }
    ctx->pc = 0x35E608u;
    // 0x35e608: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x35e608u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e60c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x35e60cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e610: 0xaf90c7e4  sw          $s0, -0x381C($gp)
    ctx->pc = 0x35e610u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952932), GPR_U32(ctx, 16));
    // 0x35e614: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x35E614u;
    {
        const bool branch_taken_0x35e614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E614u;
        // 0x35e618: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e614) {
            ctx->pc = 0x35E724u;
            goto label_35e724;
        }
    }
    ctx->pc = 0x35E61Cu;
    // 0x35e61c: 0x0  nop
    ctx->pc = 0x35e61cu;
    // NOP
label_35e620:
    // 0x35e620: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x35e620u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x35e624: 0x4e00029  bltz        $a3, . + 4 + (0x29 << 2)
    ctx->pc = 0x35E624u;
    {
        const bool branch_taken_0x35e624 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x35E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E624u;
        // 0x35e628: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e624) {
            ctx->pc = 0x35E6CCu;
            goto label_35e6cc;
        }
    }
    ctx->pc = 0x35E62Cu;
    // 0x35e62c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x35e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x35e630: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e634: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x35e634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x35e638: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35e638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35e63c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x35e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35e640: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x35e640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x35e644: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35E644u;
    {
        const bool branch_taken_0x35e644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e644) {
            ctx->pc = 0x35E648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E644u;
            // 0x35e648: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E658u;
            goto label_35e658;
        }
    }
    ctx->pc = 0x35E64Cu;
    // 0x35e64c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x35E64Cu;
    {
        const bool branch_taken_0x35e64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E64Cu;
        // 0x35e650: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e64c) {
            ctx->pc = 0x35E6C4u;
            goto label_35e6c4;
        }
    }
    ctx->pc = 0x35E654u;
    // 0x35e654: 0x0  nop
    ctx->pc = 0x35e654u;
    // NOP
label_35e658:
    // 0x35e658: 0x26622fe8  addiu       $v0, $s3, 0x2FE8
    ctx->pc = 0x35e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12264));
    // 0x35e65c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x35e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x35e660: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x35e660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x35e664: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x35e664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x35e668: 0x25852c68  addiu       $a1, $t4, 0x2C68
    ctx->pc = 0x35e668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 11368));
    // 0x35e66c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35e670: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x35e670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x35e674: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x35e674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x35e678: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x35e678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x35e67c: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x35e67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x35e680: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35e680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35e684: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x35e684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35e688: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x35e688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x35e68c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35e68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35e690: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x35e690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x35e694: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x35e694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35e698: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e69c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x35e69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e6a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x35e6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35e6a4: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E6A4u;
    {
        const bool branch_taken_0x35e6a4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x35E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E6A4u;
        // 0x35e6a8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e6a4) {
            ctx->pc = 0x35E6CCu;
            goto label_35e6cc;
        }
    }
    ctx->pc = 0x35E6ACu;
    // 0x35e6ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35e6b0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35e6b4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x35e6b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x35e6b8: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x35E6B8u;
    {
        const bool branch_taken_0x35e6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e6b8) {
            ctx->pc = 0x35E6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E6B8u;
            // 0x35e6bc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e658;
        }
    }
    ctx->pc = 0x35E6C0u;
    // 0x35e6c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e6c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_35e6c4:
    // 0x35e6c4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x35e6c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e6c8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x35e6c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_35e6cc:
    // 0x35e6cc: 0x15200016  bnez        $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x35E6CCu;
    {
        const bool branch_taken_0x35e6cc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E6CCu;
        // 0x35e6d0: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e6cc) {
            ctx->pc = 0x35E728u;
            goto label_35e728;
        }
    }
    ctx->pc = 0x35E6D4u;
    // 0x35e6d4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x35e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x35e6d8: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x35e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x35e6dc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x35e6dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35e6e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E6E0u;
    {
        const bool branch_taken_0x35e6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e6e0) {
            ctx->pc = 0x35E6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E6E0u;
            // 0x35e6e4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E6F8u;
            goto label_35e6f8;
        }
    }
    ctx->pc = 0x35E6E8u;
    // 0x35e6e8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x35e6e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e6ec: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x35e6ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e6f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35E6F0u;
    {
        const bool branch_taken_0x35e6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E6F0u;
        // 0x35e6f4: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e6f0) {
            ctx->pc = 0x35E724u;
            goto label_35e724;
        }
    }
    ctx->pc = 0x35E6F8u;
label_35e6f8:
    // 0x35e6f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35e6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e6fc: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E6FCu;
    SET_GPR_U32(ctx, 31, 0x35E704u);
    ctx->pc = 0x35E700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E6FCu;
    // 0x35e700: 0x248461b0  addiu       $a0, $a0, 0x61B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E6FCu, 0x35E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E704u;
label_35e704:
    // 0x35e704: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e708: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x35E708u;
    {
        const bool branch_taken_0x35e708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E708u;
        // 0x35e70c: 0x34420021  ori         $v0, $v0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e708) {
            ctx->pc = 0x35E790u;
            goto label_35e790;
        }
    }
    ctx->pc = 0x35E710u;
label_35e710:
    // 0x35e710: 0xc0d7820  jal         func_35E080
    ctx->pc = 0x35E710u;
    SET_GPR_U32(ctx, 31, 0x35E718u);
    ctx->pc = 0x35E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E710u;
    // 0x35e714: 0xaf90c7e4  sw          $s0, -0x381C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952932), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E080u, 0x35E710u, 0x35E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E718u;
label_35e718:
    // 0x35e718: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x35e718u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e71c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x35e71cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35e720: 0x3c0d001d  lui         $t5, 0x1D
    ctx->pc = 0x35e720u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)29 << 16));
label_35e724:
    // 0x35e724: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x35e724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_35e728:
    // 0x35e728: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x35e728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x35e72c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x35e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35e730: 0x25a42c68  addiu       $a0, $t5, 0x2C68
    ctx->pc = 0x35e730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 11368));
    // 0x35e734: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35e738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35e73c: 0x26652fe8  addiu       $a1, $s3, 0x2FE8
    ctx->pc = 0x35e73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 12264));
    // 0x35e740: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35e740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35e744: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x35e744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35e748: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x35e748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x35e74c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x35e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x35e750: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x35e750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x35e754: 0xac720010  sw          $s2, 0x10($v1)
    ctx->pc = 0x35e754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 18));
    // 0x35e758: 0x5400006  bltz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x35E758u;
    {
        const bool branch_taken_0x35e758 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x35E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E758u;
        // 0x35e75c: 0xac6a000c  sw          $t2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e758) {
            ctx->pc = 0x35E774u;
            goto label_35e774;
        }
    }
    ctx->pc = 0x35E760u;
    // 0x35e760: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x35e760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x35e764: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x35e764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x35e768: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e76c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35e770: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x35e770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
label_35e774:
    // 0x35e774: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E774u;
    {
        const bool branch_taken_0x35e774 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x35E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E774u;
        // 0x35e778: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e774) {
            ctx->pc = 0x35E78Cu;
            goto label_35e78c;
        }
    }
    ctx->pc = 0x35E77Cu;
    // 0x35e77c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x35e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35e780: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35e780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35e784: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35e784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35e788: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x35e788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_35e78c:
    // 0x35e78c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e790:
    // 0x35e790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e794: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e798: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e79c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35e79cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e7a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35e7a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e7a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35e7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35e7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x35E7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7A8u;
        // 0x35e7ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E7B0u;
}

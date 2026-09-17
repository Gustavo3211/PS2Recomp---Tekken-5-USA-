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

// Function: sub_0048B1D8
// Address: 0x48b1d8 - 0x48b318
void sub_0048B1D8_0x48b1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B1D8_0x48b1d8");
#endif

    switch (ctx->pc) {
        case 0x48b1f4u: goto label_48b1f4;
        case 0x48b22cu: goto label_48b22c;
        case 0x48b2b4u: goto label_48b2b4;
        case 0x48b2bcu: goto label_48b2bc;
        case 0x48b2c4u: goto label_48b2c4;
        case 0x48b2e8u: goto label_48b2e8;
        default: break;
    }

    ctx->pc = 0x48b1d8u;

    // 0x48b1d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48b1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48b1dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48b1e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48b1e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48b1e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x48b1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x48b1ec: 0xc124620  jal         func_491880
    ctx->pc = 0x48B1ECu;
    SET_GPR_U32(ctx, 31, 0x48B1F4u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x48B1ECu, 0x48B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B1F4u;
label_48b1f4:
    // 0x48b1f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48b1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b1f8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48b1fc: 0x2450d680  addiu       $s0, $v0, -0x2980
    ctx->pc = 0x48b1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48b200: 0x261200a8  addiu       $s2, $s0, 0xA8
    ctx->pc = 0x48b200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x48b204: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x48b204u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D728u));
    // 0x48b208: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x48B208u;
    {
        const bool branch_taken_0x48b208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b208) {
            ctx->pc = 0x48B20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48B208u;
            // 0x48b20c: 0x261100aa  addiu       $s1, $s0, 0xAA (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 170));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48B298u;
            goto label_48b298;
        }
    }
    ctx->pc = 0x48B210u;
    // 0x48b210: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x48b210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x48b214: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48b218: 0x8442e818  lh          $v0, -0x17E8($v0)
    ctx->pc = 0x48b218u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x48b21c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x48B21Cu;
    {
        const bool branch_taken_0x48b21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b21c) {
            ctx->pc = 0x48B220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48B21Cu;
            // 0x48b220: 0x86030096  lh          $v1, 0x96($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48B258u;
            goto label_48b258;
        }
    }
    ctx->pc = 0x48B224u;
    // 0x48b224: 0xc122ce4  jal         func_48B390
    ctx->pc = 0x48B224u;
    SET_GPR_U32(ctx, 31, 0x48B22Cu);
    ctx->pc = 0x48B390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B390u, 0x48B224u, 0x48B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B22Cu;
label_48b22c:
    // 0x48b22c: 0x9603226c  lhu         $v1, 0x226C($s0)
    ctx->pc = 0x48b22cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8812)));
    // 0x48b230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48b230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48b234: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48b234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48b238: 0xa602220e  sh          $v0, 0x220E($s0)
    ctx->pc = 0x48b238u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8718), (uint16_t)GPR_U32(ctx, 2));
    // 0x48b23c: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x48b23cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x48b240: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48b240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48b244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b248: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x48b248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48b24c: 0x812323c  j           func_48C8F0
    ctx->pc = 0x48B24Cu;
    ctx->pc = 0x48B250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B24Cu;
    // 0x48b250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C8F0u;
    sub_0048C8F0_0x48c8f0(rdram, ctx, runtime); return;
    ctx->pc = 0x48B254u;
    // 0x48b254: 0x0  nop
    ctx->pc = 0x48b254u;
    // NOP
label_48b258:
    // 0x48b258: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x48b258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x48b25c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x48B25Cu;
    {
        const bool branch_taken_0x48b25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B25Cu;
        // 0x48b260: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b25c) {
            ctx->pc = 0x48B300u;
            goto label_48b300;
        }
    }
    ctx->pc = 0x48B264u;
    // 0x48b264: 0x9462d642  lhu         $v0, -0x29BE($v1)
    ctx->pc = 0x48b264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294956610)));
    // 0x48b268: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x48b268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x48b26c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x48B26Cu;
    {
        const bool branch_taken_0x48b26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B26Cu;
        // 0x48b270: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b26c) {
            ctx->pc = 0x48B300u;
            goto label_48b300;
        }
    }
    ctx->pc = 0x48B274u;
    // 0x48b274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48b274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48b278: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48b278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48b27c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48b27cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b280: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x48b280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48b284: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48b284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48b288: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x48b288u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x48b28c: 0xa422e820  sh          $v0, -0x17E0($at)
    ctx->pc = 0x48b28cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 2));
    // 0x48b290: 0x8123c54  j           func_48F150
    ctx->pc = 0x48B290u;
    ctx->pc = 0x48B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B290u;
    // 0x48b294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48F150u;
    sub_0048F150_0x48f150(rdram, ctx, runtime); return;
    ctx->pc = 0x48B298u;
label_48b298:
    // 0x48b298: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x48b298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48b29c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x48b2a0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x48b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48b2a4: 0x461000a  bgez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x48B2A4u;
    {
        const bool branch_taken_0x48b2a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x48B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B2A4u;
        // 0x48b2a8: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b2a4) {
            ctx->pc = 0x48B2D0u;
            goto label_48b2d0;
        }
    }
    ctx->pc = 0x48B2ACu;
    // 0x48b2ac: 0xc122d1c  jal         func_48B470
    ctx->pc = 0x48B2ACu;
    SET_GPR_U32(ctx, 31, 0x48B2B4u);
    ctx->pc = 0x48B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B470u, 0x48B2ACu, 0x48B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B2B4u;
label_48b2b4:
    // 0x48b2b4: 0xc123e88  jal         func_48FA20
    ctx->pc = 0x48B2B4u;
    SET_GPR_U32(ctx, 31, 0x48B2BCu);
    ctx->pc = 0x48FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FA20u, 0x48B2B4u, 0x48B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B2BCu;
label_48b2bc:
    // 0x48b2bc: 0xc124098  jal         func_490260
    ctx->pc = 0x48B2BCu;
    SET_GPR_U32(ctx, 31, 0x48B2C4u);
    ctx->pc = 0x48B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B2BCu;
    // 0x48b2c0: 0xa6002268  sh          $zero, 0x2268($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8808), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x490260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490260u, 0x48B2BCu, 0x48B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B2C4u;
label_48b2c4:
    // 0x48b2c4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x48b2c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48b2c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48b2cc: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x48b2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_48b2d0:
    // 0x48b2d0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x48b2d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48b2d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x48b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48b2d8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48B2D8u;
    {
        const bool branch_taken_0x48b2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48b2d8) {
            ctx->pc = 0x48B2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48B2D8u;
            // 0x48b2dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48B2ECu;
            goto label_48b2ec;
        }
    }
    ctx->pc = 0x48B2E0u;
    // 0x48b2e0: 0xc1233c0  jal         func_48CF00
    ctx->pc = 0x48B2E0u;
    SET_GPR_U32(ctx, 31, 0x48B2E8u);
    ctx->pc = 0x48CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF00u, 0x48B2E0u, 0x48B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B2E8u;
label_48b2e8:
    // 0x48b2e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48b2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48b2ec:
    // 0x48b2ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48b2ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48b2f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48b2f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b2f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x48b2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48b2f8: 0x8124c3c  j           func_4930F0
    ctx->pc = 0x48B2F8u;
    ctx->pc = 0x48B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B2F8u;
    // 0x48b2fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4930F0u;
    sub_004930F0_0x4930f0(rdram, ctx, runtime); return;
    ctx->pc = 0x48B300u;
label_48b300:
    // 0x48b300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48b300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b304: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48b304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48b308: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48b308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b30c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x48b30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48b310: 0x3e00008  jr          $ra
    ctx->pc = 0x48B310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B310u;
        // 0x48b314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B318u;
}

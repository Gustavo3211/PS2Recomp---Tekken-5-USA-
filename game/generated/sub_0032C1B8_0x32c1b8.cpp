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

// Function: sub_0032C1B8
// Address: 0x32c1b8 - 0x32c368
void sub_0032C1B8_0x32c1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C1B8_0x32c1b8");
#endif

    switch (ctx->pc) {
        case 0x32c210u: goto label_32c210;
        case 0x32c2d8u: goto label_32c2d8;
        default: break;
    }

    ctx->pc = 0x32c1b8u;

    // 0x32c1b8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x32c1b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c1bc: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x32c1bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x32c1c0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x32c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32c1c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32c1c8: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x32c1c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32c1cc: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x32c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x32c1d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x32c1d4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x32c1d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x32c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x32c1dc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x32c1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x32c1e0: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x32c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x32c1e4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x32c1e4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x32c1e8: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x32c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x32c1ec: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x32c1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c1f0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x32c1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c1f4: 0x10c80058  beq         $a2, $t0, . + 4 + (0x58 << 2)
    ctx->pc = 0x32C1F4u;
    {
        const bool branch_taken_0x32c1f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        ctx->pc = 0x32C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1F4u;
        // 0x32c1f8: 0xa34824  and         $t1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c1f4) {
            ctx->pc = 0x32C358u;
            goto label_32c358;
        }
    }
    ctx->pc = 0x32C1FCu;
    // 0x32c1fc: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x32c1fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c200: 0x250a0010  addiu       $t2, $t0, 0x10
    ctx->pc = 0x32c200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x32c204: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x32c204u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c208: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x32c208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x32c20c: 0x25250010  addiu       $a1, $t1, 0x10
    ctx->pc = 0x32c20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_32c210:
    // 0x32c210: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x32c210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x32c214: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x32c214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x32c218: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x32C218u;
    {
        const bool branch_taken_0x32c218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c218) {
            ctx->pc = 0x32C21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C218u;
            // 0x32c21c: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C338u;
            goto label_32c338;
        }
    }
    ctx->pc = 0x32C220u;
    // 0x32c220: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x32c220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32c224: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x32C224u;
    {
        const bool branch_taken_0x32c224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c224) {
            ctx->pc = 0x32C228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C224u;
            // 0x32c228: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C264u;
            goto label_32c264;
        }
    }
    ctx->pc = 0x32C22Cu;
    // 0x32c22c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x32c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32c230: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x32c230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x32c234: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x32c234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x32c238: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x32c238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32c23c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x32c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x32c240: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x32c240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32c244: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x32c244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x32c248: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x32c248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x32c24c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x32c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x32c250: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x32c250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x32c254: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x32c254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x32c258: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x32c258u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x32c25c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x32c25cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c260: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x32c260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_32c264:
    // 0x32c264: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x32c264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32c268: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x32c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32c26c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x32c26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32c270: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x32c270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32c274: 0x27ac0060  addiu       $t4, $sp, 0x60
    ctx->pc = 0x32c274u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x32c278: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32c278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x32c27c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x32c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x32c280: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x32c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32c284: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x32c284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x32c288: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x32c288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x32c28c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x32c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c290: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x32c290u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x32c294: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x32c294u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x32c298: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x32c298u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x32c29c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x32c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x32c2a0: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x32c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x32c2a4: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x32c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x32c2a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x32c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32c2ac: 0x506a0018  beql        $v1, $t2, . + 4 + (0x18 << 2)
    ctx->pc = 0x32C2ACu;
    {
        const bool branch_taken_0x32c2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        if (branch_taken_0x32c2ac) {
            ctx->pc = 0x32C2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C2ACu;
            // 0x32c2b0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C310u;
            goto label_32c310;
        }
    }
    ctx->pc = 0x32C2B4u;
    // 0x32c2b4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x32c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x32c2b8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x32c2b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32c2bc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x32C2BCu;
    {
        const bool branch_taken_0x32c2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c2bc) {
            ctx->pc = 0x32C2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C2BCu;
            // 0x32c2c0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C310u;
            goto label_32c310;
        }
    }
    ctx->pc = 0x32C2C4u;
    // 0x32c2c4: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x32c2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x32c2c8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x32c2c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c2cc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x32c2ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c2d0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x32c2d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c2d4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x32c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_32c2d8:
    // 0x32c2d8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x32c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x32c2dc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x32c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32c2e0: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x32c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x32c2e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32c2e8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x32c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x32c2ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32c2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c2f0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x32c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32c2f4: 0x10c40005  beq         $a2, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32C2F4u;
    {
        const bool branch_taken_0x32c2f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x32C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C2F4u;
        // 0x32c2f8: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c2f4) {
            ctx->pc = 0x32C30Cu;
            goto label_32c30c;
        }
    }
    ctx->pc = 0x32C2FCu;
    // 0x32c2fc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x32c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x32c300: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x32c300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x32c304: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x32C304u;
    {
        const bool branch_taken_0x32c304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c304) {
            ctx->pc = 0x32C308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C304u;
            // 0x32c308: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c2d8;
        }
    }
    ctx->pc = 0x32C30Cu;
label_32c30c:
    // 0x32c30c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x32c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_32c310:
    // 0x32c310: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x32c310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x32c314: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x32c314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x32c318: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x32c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32c31c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x32c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x32c320: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x32c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32c324: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32c324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32c328: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x32c328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x32c32c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x32c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c330: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x32C330u;
    {
        const bool branch_taken_0x32c330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C330u;
        // 0x32c334: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c330) {
            ctx->pc = 0x32C35Cu;
            goto label_32c35c;
        }
    }
    ctx->pc = 0x32C338u;
label_32c338:
    // 0x32c338: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x32c338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c33c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x32c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x32c340: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x32c340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32c344: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x32c344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x32c348: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x32c348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c34c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c350: 0x14c3ffaf  bne         $a2, $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x32C350u;
    {
        const bool branch_taken_0x32c350 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x32C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C350u;
        // 0x32c354: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c350) {
            ctx->pc = 0x32C210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c210;
        }
    }
    ctx->pc = 0x32C358u;
label_32c358:
    // 0x32c358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32c358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c35c:
    // 0x32c35c: 0x3e00008  jr          $ra
    ctx->pc = 0x32C35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C35Cu;
        // 0x32c360: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C364u;
    // 0x32c364: 0x0  nop
    ctx->pc = 0x32c364u;
    // NOP
    ctx->pc = 0x32c368u;
}

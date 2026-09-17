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

// Function: sub_0024E210
// Address: 0x24e210 - 0x24e358
void sub_0024E210_0x24e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E210_0x24e210");
#endif

    switch (ctx->pc) {
        case 0x24e268u: goto label_24e268;
        case 0x24e284u: goto label_24e284;
        case 0x24e310u: goto label_24e310;
        default: break;
    }

    ctx->pc = 0x24e210u;

    // 0x24e210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24e210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24e214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24e214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24e218: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24e218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e21c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24e21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24e220: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24e220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e224: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24e224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24e228: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24e228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e22c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24e22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24e230: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24e230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e234: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24e234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24e238: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x24e238u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e23c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x24e23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x24e240: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x24e240u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e244: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x24e244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x24e248: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x24e248u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e24c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24e24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24e250: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24e250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24e254: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x24e254u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24e258: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x24e258u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x24e25c: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x24E25Cu;
    {
        const bool branch_taken_0x24e25c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x24E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E25Cu;
        // 0x24e260: 0xa692000c  sh          $s2, 0xC($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e25c) {
            ctx->pc = 0x24E290u;
            goto label_24e290;
        }
    }
    ctx->pc = 0x24E264u;
    // 0x24e264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e268:
    // 0x24e268: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x24e268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x24e26c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24e26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e270: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24e270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24e274: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24e274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e278: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x24e278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e27c: 0xc093876  jal         func_24E1D8
    ctx->pc = 0x24E27Cu;
    SET_GPR_U32(ctx, 31, 0x24E284u);
    ctx->pc = 0x24E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E27Cu;
    // 0x24e280: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E1D8u, 0x24E27Cu, 0x24E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E284u;
label_24e284:
    // 0x24e284: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x24e284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x24e288: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x24E288u;
    {
        const bool branch_taken_0x24e288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E288u;
        // 0x24e28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e288) {
            ctx->pc = 0x24E268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e268;
        }
    }
    ctx->pc = 0x24E290u;
label_24e290:
    // 0x24e290: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x24e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x24e294: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x24e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x24e298: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24e298u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x24e29c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x24e29cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x24e2a0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x24E2A0u;
    {
        const bool branch_taken_0x24e2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2A0u;
        // 0x24e2a4: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2a0) {
            ctx->pc = 0x24E318u;
            goto label_24e318;
        }
    }
    ctx->pc = 0x24E2A8u;
    // 0x24e2a8: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x24e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x24e2ac: 0x12a20010  beq         $s5, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24E2ACu;
    {
        const bool branch_taken_0x24e2ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2ACu;
        // 0x24e2b0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2ac) {
            ctx->pc = 0x24E2F0u;
            goto label_24e2f0;
        }
    }
    ctx->pc = 0x24E2B4u;
    // 0x24e2b4: 0x2ea20066  sltiu       $v0, $s5, 0x66
    ctx->pc = 0x24e2b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)102) ? 1 : 0);
    // 0x24e2b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24E2B8u;
    {
        const bool branch_taken_0x24e2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2B8u;
        // 0x24e2bc: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2b8) {
            ctx->pc = 0x24E2D8u;
            goto label_24e2d8;
        }
    }
    ctx->pc = 0x24E2C0u;
    // 0x24e2c0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x24e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x24e2c4: 0x12a20008  beq         $s5, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24E2C4u;
    {
        const bool branch_taken_0x24e2c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2C4u;
        // 0x24e2c8: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2c4) {
            ctx->pc = 0x24E2E8u;
            goto label_24e2e8;
        }
    }
    ctx->pc = 0x24E2CCu;
    // 0x24e2cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24E2CCu;
    {
        const bool branch_taken_0x24e2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e2cc) {
            ctx->pc = 0x24E300u;
            goto label_24e300;
        }
    }
    ctx->pc = 0x24E2D4u;
    // 0x24e2d4: 0x0  nop
    ctx->pc = 0x24e2d4u;
    // NOP
label_24e2d8:
    // 0x24e2d8: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24E2D8u;
    {
        const bool branch_taken_0x24e2d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2D8u;
        // 0x24e2dc: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2d8) {
            ctx->pc = 0x24E2F8u;
            goto label_24e2f8;
        }
    }
    ctx->pc = 0x24E2E0u;
    // 0x24e2e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24E2E0u;
    {
        const bool branch_taken_0x24e2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e2e0) {
            ctx->pc = 0x24E300u;
            goto label_24e300;
        }
    }
    ctx->pc = 0x24E2E8u;
label_24e2e8:
    // 0x24e2e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24E2E8u;
    {
        const bool branch_taken_0x24e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2E8u;
        // 0x24e2ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2e8) {
            ctx->pc = 0x24E2FCu;
            goto label_24e2fc;
        }
    }
    ctx->pc = 0x24E2F0u;
label_24e2f0:
    // 0x24e2f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24E2F0u;
    {
        const bool branch_taken_0x24e2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2F0u;
        // 0x24e2f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2f0) {
            ctx->pc = 0x24E2FCu;
            goto label_24e2fc;
        }
    }
    ctx->pc = 0x24E2F8u;
label_24e2f8:
    // 0x24e2f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24e2fc:
    // 0x24e2fc: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x24e2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_24e300:
    // 0x24e300: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24E300u;
    {
        const bool branch_taken_0x24e300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E300u;
        // 0x24e304: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e300) {
            ctx->pc = 0x24E320u;
            goto label_24e320;
        }
    }
    ctx->pc = 0x24E308u;
    // 0x24e308: 0xc094106  jal         func_250418
    ctx->pc = 0x24E308u;
    SET_GPR_U32(ctx, 31, 0x24E310u);
    ctx->pc = 0x24E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E308u;
    // 0x24e30c: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250418u, 0x24E308u, 0x24E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E310u;
label_24e310:
    // 0x24e310: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24E310u;
    {
        const bool branch_taken_0x24e310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E310u;
        // 0x24e314: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e310) {
            ctx->pc = 0x24E31Cu;
            goto label_24e31c;
        }
    }
    ctx->pc = 0x24E318u;
label_24e318:
    // 0x24e318: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x24e318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_24e31c:
    // 0x24e31c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e320:
    // 0x24e320: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24e320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e324: 0xa683000e  sh          $v1, 0xE($s4)
    ctx->pc = 0x24e324u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x24e328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24e328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e32c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24e32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24e330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24e330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e334: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24e334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24e338: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24e338u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e33c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24e33cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24e340: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x24e340u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e344: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x24e344u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24e348: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24e348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e34c: 0x3e00008  jr          $ra
    ctx->pc = 0x24E34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E34Cu;
        // 0x24e350: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E354u;
    // 0x24e354: 0x0  nop
    ctx->pc = 0x24e354u;
    // NOP
    ctx->pc = 0x24e358u;
}

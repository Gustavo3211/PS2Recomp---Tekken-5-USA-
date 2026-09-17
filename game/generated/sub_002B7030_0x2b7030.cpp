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

// Function: sub_002B7030
// Address: 0x2b7030 - 0x2b7218
void sub_002B7030_0x2b7030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7030_0x2b7030");
#endif

    switch (ctx->pc) {
        case 0x2b70a0u: goto label_2b70a0;
        case 0x2b70b8u: goto label_2b70b8;
        case 0x2b7120u: goto label_2b7120;
        case 0x2b7148u: goto label_2b7148;
        default: break;
    }

    ctx->pc = 0x2b7030u;

    // 0x2b7030: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b7030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b7034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7038: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b7038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b703c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b703cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7040: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2b7040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2b7044: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b7044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7048: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2b7048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2b704c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2b704cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7050: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b7050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b7054: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2b7054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2b7058: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2b7058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2b705c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2b705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2b7060: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2b7060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2b7064: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b7064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b7068: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2b7068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2b706c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2b706cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b7070: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b7070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b7074: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2b7074u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b7078: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2B7078u;
    {
        const bool branch_taken_0x2b7078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7078u;
        // 0x2b707c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7078) {
            ctx->pc = 0x2B71E8u;
            goto label_2b71e8;
        }
    }
    ctx->pc = 0x2B7080u;
    // 0x2b7080: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x2b7080u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b7084: 0x2414000d  addiu       $s4, $zero, 0xD
    ctx->pc = 0x2b7084u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b7088: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x2b7088u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b708c: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x2b708cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b7090: 0x2417002f  addiu       $s7, $zero, 0x2F
    ctx->pc = 0x2b7090u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2b7094: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7094u;
    {
        const bool branch_taken_0x2b7094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7094u;
        // 0x2b7098: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7094) {
            ctx->pc = 0x2B70B8u;
            goto label_2b70b8;
        }
    }
    ctx->pc = 0x2B709Cu;
    // 0x2b709c: 0x0  nop
    ctx->pc = 0x2b709cu;
    // NOP
label_2b70a0:
    // 0x2b70a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b70a4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2b70a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b70a8: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x2B70A8u;
    {
        const bool branch_taken_0x2b70a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b70a8) {
            ctx->pc = 0x2B70ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B70A8u;
            // 0x2b70ac: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B71D8u;
            goto label_2b71d8;
        }
    }
    ctx->pc = 0x2B70B0u;
    // 0x2b70b0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2b70b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b70b4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2b70b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_2b70b8:
    // 0x2b70b8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2b70b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b70bc: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b70c0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2b70c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b70c4: 0x10550009  beq         $v0, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B70C4u;
    {
        const bool branch_taken_0x2b70c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2B70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70C4u;
        // 0x2b70c8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70c4) {
            ctx->pc = 0x2B70ECu;
            goto label_2b70ec;
        }
    }
    ctx->pc = 0x2B70CCu;
    // 0x2b70cc: 0x10540008  beq         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B70CCu;
    {
        const bool branch_taken_0x2b70cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2B70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70CCu;
        // 0x2b70d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70cc) {
            ctx->pc = 0x2B70F0u;
            goto label_2b70f0;
        }
    }
    ctx->pc = 0x2B70D4u;
    // 0x2b70d4: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B70D4u;
    {
        const bool branch_taken_0x2b70d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2b70d4) {
            ctx->pc = 0x2B70F0u;
            goto label_2b70f0;
        }
    }
    ctx->pc = 0x2B70DCu;
    // 0x2b70dc: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B70DCu;
    {
        const bool branch_taken_0x2b70dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2b70dc) {
            ctx->pc = 0x2B70F0u;
            goto label_2b70f0;
        }
    }
    ctx->pc = 0x2B70E4u;
    // 0x2b70e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B70E4u;
    {
        const bool branch_taken_0x2b70e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70E4u;
        // 0x2b70e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70e4) {
            ctx->pc = 0x2B70F0u;
            goto label_2b70f0;
        }
    }
    ctx->pc = 0x2B70ECu;
label_2b70ec:
    // 0x2b70ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b70ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b70f0:
    // 0x2b70f0: 0x5460ffeb  bnel        $v1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2B70F0u;
    {
        const bool branch_taken_0x2b70f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b70f0) {
            ctx->pc = 0x2B70F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B70F0u;
            // 0x2b70f4: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B70A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b70a0;
        }
    }
    ctx->pc = 0x2B70F8u;
    // 0x2b70f8: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2b70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b70fc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2b70fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7100: 0x5477000a  bnel        $v1, $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x2B7100u;
    {
        const bool branch_taken_0x2b7100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x2b7100) {
            ctx->pc = 0x2B7104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7100u;
            // 0x2b7104: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B712Cu;
            goto label_2b712c;
        }
    }
    ctx->pc = 0x2B7108u;
    // 0x2b7108: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x2b7108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2b710c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B710Cu;
    {
        const bool branch_taken_0x2b710c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b710c) {
            ctx->pc = 0x2B7110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B710Cu;
            // 0x2b7110: 0xc41021  addu        $v0, $a2, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7128u;
            goto label_2b7128;
        }
    }
    ctx->pc = 0x2B7114u;
    // 0x2b7114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7118: 0xc0add7a  jal         func_2B75E8
    ctx->pc = 0x2B7118u;
    SET_GPR_U32(ctx, 31, 0x2B7120u);
    ctx->pc = 0x2B711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7118u;
    // 0x2b711c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B75E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B75E8u, 0x2B7118u, 0x2B7120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7120u;
label_2b7120:
    // 0x2b7120: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x2B7120u;
    {
        const bool branch_taken_0x2b7120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7120u;
        // 0x2b7124: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7120) {
            ctx->pc = 0x2B70B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b70b8;
        }
    }
    ctx->pc = 0x2B7128u;
label_2b7128:
    // 0x2b7128: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x2b7128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2b712c:
    // 0x2b712c: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x2b712cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b7130: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x2b7130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b7134: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x2b7134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b7138: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2b7138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b713c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2b713cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x2b7140: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B7140u;
    {
        const bool branch_taken_0x2b7140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7140u;
        // 0x2b7144: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7140) {
            ctx->pc = 0x2B7184u;
            goto label_2b7184;
        }
    }
    ctx->pc = 0x2B7148u;
label_2b7148:
    // 0x2b7148: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b7148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b714c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b714cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b7150: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B7150u;
    {
        const bool branch_taken_0x2b7150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7150) {
            ctx->pc = 0x2B7154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7150u;
            // 0x2b7154: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B71C8u;
            goto label_2b71c8;
        }
    }
    ctx->pc = 0x2B7158u;
    // 0x2b7158: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2b7158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b715c: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2b715cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7160: 0x54860004  bnel        $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7160u;
    {
        const bool branch_taken_0x2b7160 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2b7160) {
            ctx->pc = 0x2B7164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7160u;
            // 0x2b7164: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7174u;
            goto label_2b7174;
        }
    }
    ctx->pc = 0x2B7168u;
    // 0x2b7168: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x2b7168u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2b716c: 0x10440016  beq         $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B716Cu;
    {
        const bool branch_taken_0x2b716c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B7170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B716Cu;
        // 0x2b7170: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b716c) {
            ctx->pc = 0x2B71C8u;
            goto label_2b71c8;
        }
    }
    ctx->pc = 0x2B7174u;
label_2b7174:
    // 0x2b7174: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b7174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b7178: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2b7178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2b717c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b7180: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b7180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b7184:
    // 0x2b7184: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2b7184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b7188: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2b7188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b718c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2b718cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7190: 0x104a000a  beq         $v0, $t2, . + 4 + (0xA << 2)
    ctx->pc = 0x2B7190u;
    {
        const bool branch_taken_0x2b7190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7190u;
        // 0x2b7194: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7190) {
            ctx->pc = 0x2B71BCu;
            goto label_2b71bc;
        }
    }
    ctx->pc = 0x2B7198u;
    // 0x2b7198: 0x10490008  beq         $v0, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7198u;
    {
        const bool branch_taken_0x2b7198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2b7198) {
            ctx->pc = 0x2B71BCu;
            goto label_2b71bc;
        }
    }
    ctx->pc = 0x2B71A0u;
    // 0x2b71a0: 0x10480006  beq         $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B71A0u;
    {
        const bool branch_taken_0x2b71a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x2b71a0) {
            ctx->pc = 0x2B71BCu;
            goto label_2b71bc;
        }
    }
    ctx->pc = 0x2B71A8u;
    // 0x2b71a8: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B71A8u;
    {
        const bool branch_taken_0x2b71a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2b71a8) {
            ctx->pc = 0x2B71BCu;
            goto label_2b71bc;
        }
    }
    ctx->pc = 0x2B71B0u;
    // 0x2b71b0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B71B0u;
    {
        const bool branch_taken_0x2b71b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B71B0u;
        // 0x2b71b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b71b0) {
            ctx->pc = 0x2B71BCu;
            goto label_2b71bc;
        }
    }
    ctx->pc = 0x2B71B8u;
    // 0x2b71b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b71b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b71bc:
    // 0x2b71bc: 0x5080ffe2  beql        $a0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2B71BCu;
    {
        const bool branch_taken_0x2b71bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b71bc) {
            ctx->pc = 0x2B71C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B71BCu;
            // 0x2b71c0: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7148;
        }
    }
    ctx->pc = 0x2B71C4u;
    // 0x2b71c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b71c8:
    // 0x2b71c8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B71C8u;
    {
        const bool branch_taken_0x2b71c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b71c8) {
            ctx->pc = 0x2B71CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B71C8u;
            // 0x2b71cc: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B71E0u;
            goto label_2b71e0;
        }
    }
    ctx->pc = 0x2B71D0u;
    // 0x2b71d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B71D0u;
    {
        const bool branch_taken_0x2b71d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B71D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B71D0u;
        // 0x2b71d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b71d0) {
            ctx->pc = 0x2B71E8u;
            goto label_2b71e8;
        }
    }
    ctx->pc = 0x2B71D8u;
label_2b71d8:
    // 0x2b71d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B71D8u;
    {
        const bool branch_taken_0x2b71d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B71D8u;
        // 0x2b71dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b71d8) {
            ctx->pc = 0x2B71E8u;
            goto label_2b71e8;
        }
    }
    ctx->pc = 0x2B71E0u;
label_2b71e0:
    // 0x2b71e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b71e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b71e4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2b71e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2b71e8:
    // 0x2b71e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b71e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b71ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2b71ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b71f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b71f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b71f4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2b71f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b71f8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2b71f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b71fc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2b71fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b7200: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2b7200u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7204: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2b7204u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2b7208: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b7208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b720c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B720Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B720Cu;
        // 0x2b7210: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B720Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7214u;
    // 0x2b7214: 0x0  nop
    ctx->pc = 0x2b7214u;
    // NOP
    ctx->pc = 0x2b7218u;
}

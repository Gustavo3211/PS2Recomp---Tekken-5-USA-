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

// Function: sub_00349DA8
// Address: 0x349da8 - 0x349fc8
void sub_00349DA8_0x349da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349DA8_0x349da8");
#endif

    switch (ctx->pc) {
        case 0x349e2cu: goto label_349e2c;
        case 0x349f48u: goto label_349f48;
        case 0x349f94u: goto label_349f94;
        default: break;
    }

    ctx->pc = 0x349da8u;

    // 0x349da8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x349da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x349dac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x349dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x349db0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x349db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x349db4: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x349db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x349db8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x349db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x349dbc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x349dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349dc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x349dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x349dc4: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x349dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x349dc8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x349dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x349dcc: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x349dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349dd0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x349dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x349dd4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x349dd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349dd8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x349dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x349ddc: 0x32770004  andi        $s7, $s3, 0x4
    ctx->pc = 0x349ddcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x349de0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x349de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x349de4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x349de4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349de8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x349de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x349dec: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x349decu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349df0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x349df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x349df4: 0xf18023  subu        $s0, $a3, $s1
    ctx->pc = 0x349df4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x349df8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x349df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x349dfc: 0x265203c0  addiu       $s2, $s2, 0x3C0
    ctx->pc = 0x349dfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
    // 0x349e00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x349e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349e04: 0x8c750014  lw          $s5, 0x14($v1)
    ctx->pc = 0x349e04u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x349e08: 0x95420016  lhu         $v0, 0x16($t2)
    ctx->pc = 0x349e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 22)));
    // 0x349e0c: 0x2b03821  addu        $a3, $s5, $s0
    ctx->pc = 0x349e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x349e10: 0x108102  srl         $s0, $s0, 4
    ctx->pc = 0x349e10u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x349e14: 0x8d54000c  lw          $s4, 0xC($t2)
    ctx->pc = 0x349e14u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x349e18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x349e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x349e1c: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x349e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
    // 0x349e20: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x349e20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x349e24: 0xc0ce218  jal         func_338860
    ctx->pc = 0x349E24u;
    SET_GPR_U32(ctx, 31, 0x349E2Cu);
    ctx->pc = 0x349E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E24u;
    // 0x349e28: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x349E24u, 0x349E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E2Cu;
label_349e2c:
    // 0x349e2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x349e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x349e30: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x349e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x349e34: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x349e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x349e38: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x349e38u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 16)); // MMIO: 0x1000d020
    // 0x349e3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x349e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x349e40: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x349e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x349e44: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x349e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x349e48: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x349e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x349e4c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x349e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349e50: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x349e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x349e54: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x349e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x349e58: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x349e58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
    // 0x349e5c: 0x32223fff  andi        $v0, $s1, 0x3FFF
    ctx->pc = 0x349e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16383);
    // 0x349e60: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x349e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349e64: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x349e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x349e68: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x349e68u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 2)); // MMIO: 0x1000d080
    // 0x349e6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x349e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x349e70: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x349e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x349e74: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x349e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x349e78: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x349e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x349e7c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x349e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000D080u)); // MMIO: 0x1000d080
    // 0x349e80: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x349e80u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x349e84: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x349e84u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u)); // MMIO: 0x1000e010
    // 0x349e88: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x349e88u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x349e8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x349e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x349e90: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x349e90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x349e94: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x349e94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x349e98: 0x2d18823  subu        $s1, $s6, $s1
    ctx->pc = 0x349e98u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x349e9c: 0x32730002  andi        $s3, $s3, 0x2
    ctx->pc = 0x349e9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x349ea0: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x349EA0u;
    {
        const bool branch_taken_0x349ea0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x349EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349EA0u;
        // 0x349ea4: 0x235b021  addu        $s6, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ea0) {
            ctx->pc = 0x349F20u;
            goto label_349f20;
        }
    }
    ctx->pc = 0x349EA8u;
    // 0x349ea8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x349ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x349eac: 0x16e00006  bnez        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x349EACu;
    {
        const bool branch_taken_0x349eac = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x349EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349EACu;
        // 0x349eb0: 0x24441180  addiu       $a0, $v0, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349eac) {
            ctx->pc = 0x349EC8u;
            goto label_349ec8;
        }
    }
    ctx->pc = 0x349EB4u;
    // 0x349eb4: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x349eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x349eb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x349eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x349ebc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x349ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x349ec0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x349EC0u;
    {
        const bool branch_taken_0x349ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349EC0u;
        // 0x349ec4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ec0) {
            ctx->pc = 0x349ED8u;
            goto label_349ed8;
        }
    }
    ctx->pc = 0x349EC8u;
label_349ec8:
    // 0x349ec8: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x349ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x349ecc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x349eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x349ed0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x349ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x349ed4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x349ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_349ed8:
    // 0x349ed8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x349ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349edc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x349edcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x349ee0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x349ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349ee4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x349ee4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349ee8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x349ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349eec: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x349eecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x349ef0: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x349ef0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349ef4: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x349ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349ef8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x349ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349efc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x349efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x349f00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x349f00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349f04: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x349f04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x349f08: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x349f08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349f0c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x349f0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x349f10: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x349f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x349f14: 0x80c81e2  j           func_320788
    ctx->pc = 0x349F14u;
    ctx->pc = 0x349F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349F14u;
    // 0x349f18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320788u;
    sub_00320788_0x320788(rdram, ctx, runtime); return;
    ctx->pc = 0x349F1Cu;
    // 0x349f1c: 0x0  nop
    ctx->pc = 0x349f1cu;
    // NOP
label_349f20:
    // 0x349f20: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x349f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x349f24: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x349f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x349f28: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x349f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x349f2c: 0x24711180  addiu       $s1, $v1, 0x1180
    ctx->pc = 0x349f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4480));
    // 0x349f30: 0x24500068  addiu       $s0, $v0, 0x68
    ctx->pc = 0x349f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x349f34: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x349f34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400DC4u));
    // 0x349f38: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x349F38u;
    {
        const bool branch_taken_0x349f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x349f38) {
            ctx->pc = 0x349F48u;
            goto label_349f48;
        }
    }
    ctx->pc = 0x349F40u;
    // 0x349f40: 0xc0c89d4  jal         func_322750
    ctx->pc = 0x349F40u;
    SET_GPR_U32(ctx, 31, 0x349F48u);
    ctx->pc = 0x349F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349F40u;
    // 0x349f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x349F40u, 0x349F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349F48u;
label_349f48:
    // 0x349f48: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x349F48u;
    {
        const bool branch_taken_0x349f48 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x349F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F48u;
        // 0x349f4c: 0xc60c0054  lwc1        $f12, 0x54($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f48) {
            ctx->pc = 0x349F68u;
            goto label_349f68;
        }
    }
    ctx->pc = 0x349F50u;
    // 0x349f50: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x349f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x349f54: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x349f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x349f58: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x349f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x349f5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x349F5Cu;
    {
        const bool branch_taken_0x349f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F5Cu;
        // 0x349f60: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f5c) {
            ctx->pc = 0x349F78u;
            goto label_349f78;
        }
    }
    ctx->pc = 0x349F64u;
    // 0x349f64: 0x0  nop
    ctx->pc = 0x349f64u;
    // NOP
label_349f68:
    // 0x349f68: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x349f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x349f6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x349f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x349f70: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x349f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x349f74: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x349f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_349f78:
    // 0x349f78: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x349f78u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349f80: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x349f80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349f84: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x349f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349f88: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x349f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349f8c: 0xc0c819c  jal         func_320670
    ctx->pc = 0x349F8Cu;
    SET_GPR_U32(ctx, 31, 0x349F94u);
    ctx->pc = 0x349F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349F8Cu;
    // 0x349f90: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320670u, 0x349F8Cu, 0x349F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349F94u;
label_349f94:
    // 0x349f94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x349f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349f98: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x349f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x349f9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x349f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349fa0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x349fa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x349fa4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x349fa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349fa8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x349fa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349fac: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x349facu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x349fb0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x349fb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x349fb4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x349fb4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x349fb8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x349fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x349fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x349FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FBCu;
        // 0x349fc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349FC4u;
    // 0x349fc4: 0x0  nop
    ctx->pc = 0x349fc4u;
    // NOP
    ctx->pc = 0x349fc8u;
}

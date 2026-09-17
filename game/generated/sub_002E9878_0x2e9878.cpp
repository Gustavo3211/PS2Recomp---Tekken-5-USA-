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

// Function: sub_002E9878
// Address: 0x2e9878 - 0x2e9b58
void sub_002E9878_0x2e9878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9878_0x2e9878");
#endif

    switch (ctx->pc) {
        case 0x2e9890u: goto label_2e9890;
        case 0x2e99a0u: goto label_2e99a0;
        case 0x2e9a80u: goto label_2e9a80;
        case 0x2e9aa0u: goto label_2e9aa0;
        case 0x2e9ad8u: goto label_2e9ad8;
        default: break;
    }

    ctx->pc = 0x2e9878u;

    // 0x2e9878: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2e9878u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e987c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e987cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9880: 0x252b0008  addiu       $t3, $t1, 0x8
    ctx->pc = 0x2e9880u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2e9884: 0x240aefff  addiu       $t2, $zero, -0x1001
    ctx->pc = 0x2e9884u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e9888: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x2e9888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e988c: 0x0  nop
    ctx->pc = 0x2e988cu;
    // NOP
label_2e9890:
    // 0x2e9890: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x2e9890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2e9894: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2e9894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2e9898: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9898u;
    {
        const bool branch_taken_0x2e9898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9898u;
        // 0x2e989c: 0x8c430060  lw          $v1, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9898) {
            ctx->pc = 0x2E98B0u;
            goto label_2e98b0;
        }
    }
    ctx->pc = 0x2E98A0u;
    // 0x2e98a0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e98a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E98A4u;
    {
        const bool branch_taken_0x2e98a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98A4u;
        // 0x2e98a8: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e98a4) {
            ctx->pc = 0x2E98B8u;
            goto label_2e98b8;
        }
    }
    ctx->pc = 0x2E98ACu;
    // 0x2e98ac: 0x0  nop
    ctx->pc = 0x2e98acu;
    // NOP
label_2e98b0:
    // 0x2e98b0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e98b4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2e98b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_2e98b8:
    // 0x2e98b8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2e98bc: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2e98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2e98c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e98c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e98c4: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x2e98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2e98c8: 0xc92021  addu        $a0, $a2, $t1
    ctx->pc = 0x2e98c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2e98cc: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e98d0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2e98d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2e98d4: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2e98d8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E98D8u;
    {
        const bool branch_taken_0x2e98d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98D8u;
        // 0x2e98dc: 0x8c830090  lw          $v1, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e98d8) {
            ctx->pc = 0x2E98F0u;
            goto label_2e98f0;
        }
    }
    ctx->pc = 0x2E98E0u;
    // 0x2e98e0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e98e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E98E4u;
    {
        const bool branch_taken_0x2e98e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E98E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98E4u;
        // 0x2e98e8: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e98e4) {
            ctx->pc = 0x2E98F8u;
            goto label_2e98f8;
        }
    }
    ctx->pc = 0x2E98ECu;
    // 0x2e98ec: 0x0  nop
    ctx->pc = 0x2e98ecu;
    // NOP
label_2e98f0:
    // 0x2e98f0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e98f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e98f4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2e98f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_2e98f8:
    // 0x2e98f8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e98f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2e98fc: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x2e98fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2e9900: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x2e9900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2e9904: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2e9904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2e9908: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e9908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e990c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2e990cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2e9910: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e9910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2e9914: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9914u;
    {
        const bool branch_taken_0x2e9914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9914u;
        // 0x2e9918: 0x8c8300b0  lw          $v1, 0xB0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9914) {
            ctx->pc = 0x2E9928u;
            goto label_2e9928;
        }
    }
    ctx->pc = 0x2E991Cu;
    // 0x2e991c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e9920: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9920u;
    {
        const bool branch_taken_0x2e9920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9920u;
        // 0x2e9924: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9920) {
            ctx->pc = 0x2E9930u;
            goto label_2e9930;
        }
    }
    ctx->pc = 0x2E9928u;
label_2e9928:
    // 0x2e9928: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e9928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e992c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2e992cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_2e9930:
    // 0x2e9930: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e9930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2e9934: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x2e9934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2e9938: 0xc92021  addu        $a0, $a2, $t1
    ctx->pc = 0x2e9938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2e993c: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x2e993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2e9940: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e9940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e9944: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2e9944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2e9948: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e9948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2e994c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E994Cu;
    {
        const bool branch_taken_0x2e994c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E994Cu;
        // 0x2e9950: 0x8c8300e0  lw          $v1, 0xE0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e994c) {
            ctx->pc = 0x2E9960u;
            goto label_2e9960;
        }
    }
    ctx->pc = 0x2E9954u;
    // 0x2e9954: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e9954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e9958: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9958u;
    {
        const bool branch_taken_0x2e9958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9958u;
        // 0x2e995c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9958) {
            ctx->pc = 0x2E9968u;
            goto label_2e9968;
        }
    }
    ctx->pc = 0x2E9960u;
label_2e9960:
    // 0x2e9960: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e9960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e9964: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2e9964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_2e9968:
    // 0x2e9968: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e9968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2e996c: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x2e996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2e9970: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e9970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e9974: 0x8c4300e0  lw          $v1, 0xE0($v0)
    ctx->pc = 0x2e9974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x2e9978: 0x2904000a  slti        $a0, $t0, 0xA
    ctx->pc = 0x2e9978u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e997c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e9980: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2e9980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2e9984: 0x1480ffc2  bnez        $a0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2E9984u;
    {
        const bool branch_taken_0x2e9984 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9984u;
        // 0x2e9988: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9984) {
            ctx->pc = 0x2E9890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E998Cu;
    // 0x2e998c: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x2e998cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9990: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9994: 0x240defff  addiu       $t5, $zero, -0x1001
    ctx->pc = 0x2e9994u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e9998: 0x252a0004  addiu       $t2, $t1, 0x4
    ctx->pc = 0x2e9998u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2e999c: 0x0  nop
    ctx->pc = 0x2e999cu;
    // NOP
label_2e99a0:
    // 0x2e99a0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2e99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2e99a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e99a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e99a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e99a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99ac: 0x4c3021  addu        $a2, $v0, $t4
    ctx->pc = 0x2e99acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2e99b0: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x2e99b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2e99b4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2e99b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99b8: 0x290b0007  slti        $t3, $t0, 0x7
    ctx->pc = 0x2e99b8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e99bc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2e99bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99c0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E99C0u;
    {
        const bool branch_taken_0x2e99c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99C0u;
        // 0x2e99c4: 0x8c430100  lw          $v1, 0x100($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e99c0) {
            ctx->pc = 0x2E99D8u;
            goto label_2e99d8;
        }
    }
    ctx->pc = 0x2E99C8u;
    // 0x2e99c8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e99cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E99CCu;
    {
        const bool branch_taken_0x2e99cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99CCu;
        // 0x2e99d0: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e99cc) {
            ctx->pc = 0x2E99E0u;
            goto label_2e99e0;
        }
    }
    ctx->pc = 0x2E99D4u;
    // 0x2e99d4: 0x0  nop
    ctx->pc = 0x2e99d4u;
    // NOP
label_2e99d8:
    // 0x2e99d8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e99dc: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x2e99dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
label_2e99e0:
    // 0x2e99e0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e99e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2e99e4: 0x8cc30100  lw          $v1, 0x100($a2)
    ctx->pc = 0x2e99e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 256)));
    // 0x2e99e8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e99ec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2e99ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2e99f0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e99f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2e99f4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E99F4u;
    {
        const bool branch_taken_0x2e99f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99F4u;
        // 0x2e99f8: 0x8c830120  lw          $v1, 0x120($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e99f4) {
            ctx->pc = 0x2E9A08u;
            goto label_2e9a08;
        }
    }
    ctx->pc = 0x2E99FCu;
    // 0x2e99fc: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e9a00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9A00u;
    {
        const bool branch_taken_0x2e9a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A00u;
        // 0x2e9a04: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a00) {
            ctx->pc = 0x2E9A10u;
            goto label_2e9a10;
        }
    }
    ctx->pc = 0x2E9A08u;
label_2e9a08:
    // 0x2e9a08: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e9a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e9a0c: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x2e9a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
label_2e9a10:
    // 0x2e9a10: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e9a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2e9a14: 0x8ce30120  lw          $v1, 0x120($a3)
    ctx->pc = 0x2e9a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 288)));
    // 0x2e9a18: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e9a1c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2e9a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2e9a20: 0x1560ffdf  bnez        $t3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2E9A20u;
    {
        const bool branch_taken_0x2e9a20 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A20u;
        // 0x2e9a24: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a20) {
            ctx->pc = 0x2E99A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e99a0;
        }
    }
    ctx->pc = 0x2E9A28u;
    // 0x2e9a28: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9A28u;
    {
        const bool branch_taken_0x2e9a28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A28u;
        // 0x2e9a2c: 0x8d240140  lw          $a0, 0x140($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a28) {
            ctx->pc = 0x2E9A40u;
            goto label_2e9a40;
        }
    }
    ctx->pc = 0x2E9A30u;
    // 0x2e9a30: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2e9a34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9A34u;
    {
        const bool branch_taken_0x2e9a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A34u;
        // 0x2e9a38: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a34) {
            ctx->pc = 0x2E9A4Cu;
            goto label_2e9a4c;
        }
    }
    ctx->pc = 0x2E9A3Cu;
    // 0x2e9a3c: 0x0  nop
    ctx->pc = 0x2e9a3cu;
    // NOP
label_2e9a40:
    // 0x2e9a40: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2e9a44: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e9a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e9a48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e9a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e9a4c:
    // 0x2e9a4c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e9a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2e9a50: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9A50u;
    {
        const bool branch_taken_0x2e9a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A50u;
        // 0x2e9a54: 0x8d240144  lw          $a0, 0x144($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a50) {
            ctx->pc = 0x2E9A68u;
            goto label_2e9a68;
        }
    }
    ctx->pc = 0x2E9A58u;
    // 0x2e9a58: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e9a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2e9a5c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2e9a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2e9a60: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A60u;
        // 0x2e9a64: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9A68u;
label_2e9a68:
    // 0x2e9a68: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2e9a6c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e9a70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e9a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e9a74: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A74u;
        // 0x2e9a78: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9A7Cu;
    // 0x2e9a7c: 0x0  nop
    ctx->pc = 0x2e9a7cu;
    // NOP
label_2e9a80:
    // 0x2e9a80: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2e9a80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a84: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2e9a84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a88: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x2e9a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2e9a8c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E9A8Cu;
    {
        const bool branch_taken_0x2e9a8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A8Cu;
        // 0x2e9a90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a8c) {
            ctx->pc = 0x2E9AC4u;
            goto label_2e9ac4;
        }
    }
    ctx->pc = 0x2E9A94u;
    // 0x2e9a94: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e9a94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a98: 0x25270008  addiu       $a3, $t1, 0x8
    ctx->pc = 0x2e9a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2e9a9c: 0x0  nop
    ctx->pc = 0x2e9a9cu;
    // NOP
label_2e9aa0:
    // 0x2e9aa0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2e9aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e9aa4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e9aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e9aa8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2e9aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2e9aac: 0xc8282a  slt         $a1, $a2, $t0
    ctx->pc = 0x2e9aacu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2e9ab0: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x2e9ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2e9ab4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e9ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2e9ab8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2e9ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2e9abc: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E9ABCu;
    {
        const bool branch_taken_0x2e9abc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9ABCu;
        // 0x2e9ac0: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9abc) {
            ctx->pc = 0x2E9AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9aa0;
        }
    }
    ctx->pc = 0x2E9AC4u;
label_2e9ac4:
    // 0x2e9ac4: 0x28c20007  slti        $v0, $a2, 0x7
    ctx->pc = 0x2e9ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e9ac8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E9AC8u;
    {
        const bool branch_taken_0x2e9ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9ac8) {
            ctx->pc = 0x2E9AFCu;
            goto label_2e9afc;
        }
    }
    ctx->pc = 0x2E9AD0u;
    // 0x2e9ad0: 0x25270008  addiu       $a3, $t1, 0x8
    ctx->pc = 0x2e9ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2e9ad4: 0x2408efff  addiu       $t0, $zero, -0x1001
    ctx->pc = 0x2e9ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2e9ad8:
    // 0x2e9ad8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2e9ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e9adc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e9adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e9ae0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2e9ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2e9ae4: 0x28c50007  slti        $a1, $a2, 0x7
    ctx->pc = 0x2e9ae4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e9ae8: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x2e9ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2e9aec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e9aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2e9af0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2e9af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2e9af4: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E9AF4u;
    {
        const bool branch_taken_0x2e9af4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AF4u;
        // 0x2e9af8: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9af4) {
            ctx->pc = 0x2E9AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9ad8;
        }
    }
    ctx->pc = 0x2E9AFCu;
label_2e9afc:
    // 0x2e9afc: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9AFCu;
    {
        const bool branch_taken_0x2e9afc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AFCu;
        // 0x2e9b00: 0x8d240140  lw          $a0, 0x140($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9afc) {
            ctx->pc = 0x2E9B10u;
            goto label_2e9b10;
        }
    }
    ctx->pc = 0x2E9B04u;
    // 0x2e9b04: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e9b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2e9b08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9B08u;
    {
        const bool branch_taken_0x2e9b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B08u;
        // 0x2e9b0c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b08) {
            ctx->pc = 0x2E9B1Cu;
            goto label_2e9b1c;
        }
    }
    ctx->pc = 0x2E9B10u;
label_2e9b10:
    // 0x2e9b10: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2e9b14: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e9b18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e9b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e9b1c:
    // 0x2e9b1c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e9b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2e9b20: 0x39420006  xori        $v0, $t2, 0x6
    ctx->pc = 0x2e9b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)6);
    // 0x2e9b24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9B24u;
    {
        const bool branch_taken_0x2e9b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B24u;
        // 0x2e9b28: 0x8d240144  lw          $a0, 0x144($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b24) {
            ctx->pc = 0x2E9B40u;
            goto label_2e9b40;
        }
    }
    ctx->pc = 0x2E9B2Cu;
    // 0x2e9b2c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2e9b30: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2e9b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2e9b34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B34u;
        // 0x2e9b38: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9B3Cu;
    // 0x2e9b3c: 0x0  nop
    ctx->pc = 0x2e9b3cu;
    // NOP
label_2e9b40:
    // 0x2e9b40: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2e9b44: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e9b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e9b48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e9b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e9b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B4Cu;
        // 0x2e9b50: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9B54u;
    // 0x2e9b54: 0x0  nop
    ctx->pc = 0x2e9b54u;
    // NOP
    ctx->pc = 0x2e9b58u;
}

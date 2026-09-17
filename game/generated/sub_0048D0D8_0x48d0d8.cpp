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

// Function: sub_0048D0D8
// Address: 0x48d0d8 - 0x48d260
void sub_0048D0D8_0x48d0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D0D8_0x48d0d8");
#endif

    switch (ctx->pc) {
        case 0x48d0f0u: goto label_48d0f0;
        case 0x48d238u: goto label_48d238;
        default: break;
    }

    ctx->pc = 0x48d0d8u;

    // 0x48d0d8: 0x3c08007c  lui         $t0, 0x7C
    ctx->pc = 0x48d0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)124 << 16));
    // 0x48d0dc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x48d0dcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d0e0: 0x25045b80  addiu       $a0, $t0, 0x5B80
    ctx->pc = 0x48d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 23424));
    // 0x48d0e4: 0x24870004  addiu       $a3, $a0, 0x4
    ctx->pc = 0x48d0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x48d0e8: 0x2486fe38  addiu       $a2, $a0, -0x1C8
    ctx->pc = 0x48d0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966840));
    // 0x48d0ec: 0x248501c8  addiu       $a1, $a0, 0x1C8
    ctx->pc = 0x48d0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 456));
label_48d0f0:
    // 0x48d0f0: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x48D0F0u;
    {
        const bool branch_taken_0x48d0f0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D0F0u;
        // 0x48d0f4: 0xd10c0  sll         $v0, $t5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d0f0) {
            ctx->pc = 0x48D114u;
            goto label_48d114;
        }
    }
    ctx->pc = 0x48D0F8u;
    // 0x48d0f8: 0x4d1023  subu        $v0, $v0, $t5
    ctx->pc = 0x48d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x48d0fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x48d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x48d100: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x48d100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x48d104: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x48d104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x48d108: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x48d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x48d10c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x48d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x48d110: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48d110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_48d114:
    // 0x48d114: 0x29a200bf  slti        $v0, $t5, 0xBF
    ctx->pc = 0x48d114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)191) ? 1 : 0);
    // 0x48d118: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x48D118u;
    {
        const bool branch_taken_0x48d118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d118) {
            ctx->pc = 0x48D11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48D118u;
            // 0x48d11c: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48D144u;
            goto label_48d144;
        }
    }
    ctx->pc = 0x48D120u;
    // 0x48d120: 0xd10c0  sll         $v0, $t5, 3
    ctx->pc = 0x48d120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x48d124: 0x4d1023  subu        $v0, $v0, $t5
    ctx->pc = 0x48d124u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x48d128: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x48d128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x48d12c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x48d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x48d130: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x48d130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x48d134: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x48d134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x48d138: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48d138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48d13c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x48d140: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x48d140u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_48d144:
    // 0x48d144: 0x29a200c0  slti        $v0, $t5, 0xC0
    ctx->pc = 0x48d144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x48d148: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x48D148u;
    {
        const bool branch_taken_0x48d148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D148u;
        // 0x48d14c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d148) {
            ctx->pc = 0x48D0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d0f0;
        }
    }
    ctx->pc = 0x48D150u;
    // 0x48d150: 0x25025b80  addiu       $v0, $t0, 0x5B80
    ctx->pc = 0x48d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 23424));
    // 0x48d154: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x48d154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x48d158: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x48d158u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x48d15c: 0x34e75cc0  ori         $a3, $a3, 0x5CC0
    ctx->pc = 0x48d15cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)23744);
    // 0x48d160: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x48d160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x48d164: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x48d164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48d168: 0x3c0c0001  lui         $t4, 0x1
    ctx->pc = 0x48d168u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1 << 16));
    // 0x48d16c: 0x358c5438  ori         $t4, $t4, 0x5438
    ctx->pc = 0x48d16cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)21560);
    // 0x48d170: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x48d170u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x48d174: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x48d174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x48d178: 0x348456c0  ori         $a0, $a0, 0x56C0
    ctx->pc = 0x48d178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22208);
    // 0x48d17c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x48d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x48d180: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x48d180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x48d184: 0x34a558c0  ori         $a1, $a1, 0x58C0
    ctx->pc = 0x48d184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22720);
    // 0x48d188: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x48d188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48d18c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x48d18cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x48d190: 0x34c65ac0  ori         $a2, $a2, 0x5AC0
    ctx->pc = 0x48d190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)23232);
    // 0x48d194: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x48d194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x48d198: 0x240900c0  addiu       $t1, $zero, 0xC0
    ctx->pc = 0x48d198u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x48d19c: 0x246a20c0  addiu       $t2, $v1, 0x20C0
    ctx->pc = 0x48d19cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 8384));
    // 0x48d1a0: 0x246b20fc  addiu       $t3, $v1, 0x20FC
    ctx->pc = 0x48d1a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8444));
    // 0x48d1a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48d1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48d1a8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48d1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48d1ac: 0xa4285ac8  sh          $t0, 0x5AC8($at)
    ctx->pc = 0x48d1acu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 23240), (uint16_t)GPR_U32(ctx, 8));
    // 0x48d1b0: 0x60782d  daddu       $t7, $v1, $zero
    ctx->pc = 0x48d1b0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d1b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48d1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48d1b8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48d1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48d1bc: 0xac2c5cc4  sw          $t4, 0x5CC4($at)
    ctx->pc = 0x48d1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23748), GPR_U32(ctx, 12));
    // 0x48d1c0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x48d1c0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d1c4: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x48d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x48d1c8: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x48d1c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48d1cc: 0xaca50000  sw          $a1, 0x0($a1)
    ctx->pc = 0x48d1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 5));
    // 0x48d1d0: 0xacc60000  sw          $a2, 0x0($a2)
    ctx->pc = 0x48d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 6));
    // 0x48d1d4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x48d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x48d1d8: 0xa4692370  sh          $t1, 0x2370($v1)
    ctx->pc = 0x48d1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9072), (uint16_t)GPR_U32(ctx, 9));
    // 0x48d1dc: 0xac6a2248  sw          $t2, 0x2248($v1)
    ctx->pc = 0x48d1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8776), GPR_U32(ctx, 10));
    // 0x48d1e0: 0xac6b224c  sw          $t3, 0x224C($v1)
    ctx->pc = 0x48d1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8780), GPR_U32(ctx, 11));
    // 0x48d1e4: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x48d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x48d1e8: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x48d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x48d1ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48d1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48d1f0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48d1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48d1f4: 0xac2456c4  sw          $a0, 0x56C4($at)
    ctx->pc = 0x48d1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 22212), GPR_U32(ctx, 4));
    // 0x48d1f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48d1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48d1fc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48d1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48d200: 0xac2558c4  sw          $a1, 0x58C4($at)
    ctx->pc = 0x48d200u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 22724), GPR_U32(ctx, 5));
    // 0x48d204: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48d204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48d208: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48d208u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48d20c: 0xac265ac4  sw          $a2, 0x5AC4($at)
    ctx->pc = 0x48d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23236), GPR_U32(ctx, 6));
    // 0x48d210: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48d210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48d214: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48d214u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48d218: 0xa4285cc8  sh          $t0, 0x5CC8($at)
    ctx->pc = 0x48d218u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 23752), (uint16_t)GPR_U32(ctx, 8));
    // 0x48d21c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48d21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48d220: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48d220u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48d224: 0xa42856c8  sh          $t0, 0x56C8($at)
    ctx->pc = 0x48d224u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 22216), (uint16_t)GPR_U32(ctx, 8));
    // 0x48d228: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48d228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48d22c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48d22cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48d230: 0xa42858c8  sh          $t0, 0x58C8($at)
    ctx->pc = 0x48d230u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 22728), (uint16_t)GPR_U32(ctx, 8));
    // 0x48d234: 0x0  nop
    ctx->pc = 0x48d234u;
    // NOP
label_48d238:
    // 0x48d238: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x48d238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x48d23c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x48d23cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x48d240: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x48d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x48d244: 0x29a30008  slti        $v1, $t5, 0x8
    ctx->pc = 0x48d244u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x48d248: 0x0  nop
    ctx->pc = 0x48d248u;
    // NOP
    // 0x48d24c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x48D24Cu;
    {
        const bool branch_taken_0x48d24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D24Cu;
        // 0x48d250: 0xac4e20c0  sw          $t6, 0x20C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8384), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d24c) {
            ctx->pc = 0x48D238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d238;
        }
    }
    ctx->pc = 0x48D254u;
    // 0x48d254: 0x3e00008  jr          $ra
    ctx->pc = 0x48D254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D25Cu;
    // 0x48d25c: 0x0  nop
    ctx->pc = 0x48d25cu;
    // NOP
    ctx->pc = 0x48d260u;
}

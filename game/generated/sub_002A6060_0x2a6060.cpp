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

// Function: sub_002A6060
// Address: 0x2a6060 - 0x2a64a8
void sub_002A6060_0x2a6060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6060_0x2a6060");
#endif

    switch (ctx->pc) {
        case 0x2a60d8u: goto label_2a60d8;
        case 0x2a6120u: goto label_2a6120;
        case 0x2a61e4u: goto label_2a61e4;
        case 0x2a61ecu: goto label_2a61ec;
        case 0x2a622cu: goto label_2a622c;
        case 0x2a627cu: goto label_2a627c;
        case 0x2a62ccu: goto label_2a62cc;
        case 0x2a62e0u: goto label_2a62e0;
        case 0x2a62f0u: goto label_2a62f0;
        case 0x2a6314u: goto label_2a6314;
        case 0x2a6358u: goto label_2a6358;
        case 0x2a6394u: goto label_2a6394;
        case 0x2a63e0u: goto label_2a63e0;
        case 0x2a6418u: goto label_2a6418;
        case 0x2a6440u: goto label_2a6440;
        default: break;
    }

    ctx->pc = 0x2a6060u;

    // 0x2a6060: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a6060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a6064: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2a6064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2a6068: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a6068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a606c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2a606cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2a6070: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a6070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6074: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2a6074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2a6078: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2a6078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2a607c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2a607cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2a6080: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2a6080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2a6084: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2a6084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2a6088: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2a6088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2a608c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2a608cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x2a6090: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a6090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a6094: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6094u;
    {
        const bool branch_taken_0x2a6094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6094u;
        // 0x2a6098: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6094) {
            ctx->pc = 0x2A60B0u;
            goto label_2a60b0;
        }
    }
    ctx->pc = 0x2A609Cu;
    // 0x2a609c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a60a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a60a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a60a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a60a8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A60A8u;
    {
        const bool branch_taken_0x2a60a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60A8u;
        // 0x2a60ac: 0x26360064  addiu       $s6, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a60a8) {
            ctx->pc = 0x2A60C0u;
            goto label_2a60c0;
        }
    }
    ctx->pc = 0x2A60B0u;
label_2a60b0:
    // 0x2a60b0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a60b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a60b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a60b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a60b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a60bc: 0x26360064  addiu       $s6, $s1, 0x64
    ctx->pc = 0x2a60bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2a60c0:
    // 0x2a60c0: 0x8ec40040  lw          $a0, 0x40($s6)
    ctx->pc = 0x2a60c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x2a60c4: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A60C4u;
    {
        const bool branch_taken_0x2a60c4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60C4u;
        // 0x2a60c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a60c4) {
            ctx->pc = 0x2A6104u;
            goto label_2a6104;
        }
    }
    ctx->pc = 0x2A60CCu;
    // 0x2a60cc: 0x2626006c  addiu       $a2, $s1, 0x6C
    ctx->pc = 0x2a60ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x2a60d0: 0x2408efff  addiu       $t0, $zero, -0x1001
    ctx->pc = 0x2a60d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a60d4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2a60d8:
    // 0x2a60d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2a60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a60dc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2a60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a60e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A60E0u;
    {
        const bool branch_taken_0x2a60e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60E0u;
        // 0x2a60e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a60e0) {
            ctx->pc = 0x2A60F8u;
            goto label_2a60f8;
        }
    }
    ctx->pc = 0x2A60E8u;
    // 0x2a60e8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a60ec: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2a60ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2a60f0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a60f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a60f4: 0x8ec40040  lw          $a0, 0x40($s6)
    ctx->pc = 0x2a60f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_2a60f8:
    // 0x2a60f8: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2a60f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a60fc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A60FCu;
    {
        const bool branch_taken_0x2a60fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60FCu;
        // 0x2a6100: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a60fc) {
            ctx->pc = 0x2A60D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a60d8;
        }
    }
    ctx->pc = 0x2A6104u;
label_2a6104:
    // 0x2a6104: 0x263400b4  addiu       $s4, $s1, 0xB4
    ctx->pc = 0x2a6104u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
    // 0x2a6108: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x2a6108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x2a610c: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A610Cu;
    {
        const bool branch_taken_0x2a610c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A610Cu;
        // 0x2a6110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a610c) {
            ctx->pc = 0x2A614Cu;
            goto label_2a614c;
        }
    }
    ctx->pc = 0x2A6114u;
    // 0x2a6114: 0x262600bc  addiu       $a2, $s1, 0xBC
    ctx->pc = 0x2a6114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 188));
    // 0x2a6118: 0x2408efff  addiu       $t0, $zero, -0x1001
    ctx->pc = 0x2a6118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a611c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a611cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2a6120:
    // 0x2a6120: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2a6120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a6124: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2a6124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a6128: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6128u;
    {
        const bool branch_taken_0x2a6128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6128u;
        // 0x2a612c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6128) {
            ctx->pc = 0x2A6140u;
            goto label_2a6140;
        }
    }
    ctx->pc = 0x2A6130u;
    // 0x2a6130: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a6130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a6134: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2a6134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2a6138: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a6138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a613c: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x2a613cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_2a6140:
    // 0x2a6140: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2a6140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a6144: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A6144u;
    {
        const bool branch_taken_0x2a6144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6144u;
        // 0x2a6148: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6144) {
            ctx->pc = 0x2A6120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6120;
        }
    }
    ctx->pc = 0x2A614Cu;
label_2a614c:
    // 0x2a614c: 0x8e2400fc  lw          $a0, 0xFC($s1)
    ctx->pc = 0x2a614cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x2a6150: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x2a6150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a6154: 0x2e660003  sltiu       $a2, $s3, 0x3
    ctx->pc = 0x2a6154u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a6158: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a6158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a615c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a615cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a6160: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a6160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2a6164: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x2a6164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2a6168: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a6168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a616c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a616cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a6170: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a6170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a6174: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x2a6174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2a6178: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a6178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a617c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a617cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a6180: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a6180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2a6184: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x2a6184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x2a6188: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a6188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a618c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a618cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a6190: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a6190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a6194: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2a6194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2a6198: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a6198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a619c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a619cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a61a0: 0x10c000b7  beqz        $a2, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2A61A0u;
    {
        const bool branch_taken_0x2a61a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A61A0u;
        // 0x2a61a4: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a61a0) {
            ctx->pc = 0x2A6480u;
            goto label_2a6480;
        }
    }
    ctx->pc = 0x2A61A8u;
    // 0x2a61a8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2a61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a61ac: 0x8e26005c  lw          $a2, 0x5C($s1)
    ctx->pc = 0x2a61acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2a61b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a61b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a61b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a61b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a61b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a61b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a61bc: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x2a61bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2a61c0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a61c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a61c4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x2a61c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a61c8: 0xacc40078  sw          $a0, 0x78($a2)
    ctx->pc = 0x2a61c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 4));
    // 0x2a61cc: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x2a61ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2a61d0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a61d4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a61d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a61d8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a61d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a61dc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2A61DCu;
    SET_GPR_U32(ctx, 31, 0x2A61E4u);
    ctx->pc = 0x2A61E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A61DCu;
    // 0x2a61e0: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2A61DCu, 0x2A61E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61E4u;
label_2a61e4:
    // 0x2a61e4: 0xc086444  jal         func_219110
    ctx->pc = 0x2A61E4u;
    SET_GPR_U32(ctx, 31, 0x2A61ECu);
    ctx->pc = 0x2A61E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A61E4u;
    // 0x2a61e8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219110u, 0x2A61E4u, 0x2A61ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61ECu;
label_2a61ec:
    // 0x2a61ec: 0x8e270060  lw          $a3, 0x60($s1)
    ctx->pc = 0x2a61ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2a61f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a61f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a61f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a61f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a61fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a61fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a6200: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2a6200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2a6204: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a6204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a6208: 0xace30078  sw          $v1, 0x78($a3)
    ctx->pc = 0x2a6208u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 3));
    // 0x2a620c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x2a620cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2a6210: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2a6210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2a6214: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a6214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a6218: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2a6218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x2a621c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x2a621cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2a6220: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x2a6220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2a6224: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x2A6224u;
    SET_GPR_U32(ctx, 31, 0x2A622Cu);
    ctx->pc = 0x2A6228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6224u;
    // 0x2a6228: 0x103a80a  movz        $s5, $t0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2A6224u, 0x2A622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A622Cu;
label_2a622c:
    // 0x2a622c: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x2a622cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2a6230: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2a6230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2a6234: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a6234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6238: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a6238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a623c: 0x2462fff9  addiu       $v0, $v1, -0x7
    ctx->pc = 0x2a623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
    // 0x2a6240: 0x246afff4  addiu       $t2, $v1, -0xC
    ctx->pc = 0x2a6240u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x2a6244: 0x45500b  movn        $t2, $v0, $a1
    ctx->pc = 0x2a6244u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    // 0x2a6248: 0x24890020  addiu       $t1, $a0, 0x20
    ctx->pc = 0x2a6248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a624c: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x2a624cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x2a6250: 0x1266000d  beq         $s3, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2A6250u;
    {
        const bool branch_taken_0x2a6250 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        ctx->pc = 0x2A6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6250u;
        // 0x2a6254: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6250) {
            ctx->pc = 0x2A6288u;
            goto label_2a6288;
        }
    }
    ctx->pc = 0x2A6258u;
    // 0x2a6258: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a6258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a625c: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x2a625cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x2a6260: 0x2484de88  addiu       $a0, $a0, -0x2178
    ctx->pc = 0x2a6260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958728));
    // 0x2a6264: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a6264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6268: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2a6268u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2a626c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2a626cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a6270: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a6270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6274: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A6274u;
    SET_GPR_U32(ctx, 31, 0x2A627Cu);
    ctx->pc = 0x2A6278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6274u;
    // 0x2a6278: 0x264b000c  addiu       $t3, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A6274u, 0x2A627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A627Cu;
label_2a627c:
    // 0x2a627c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2A627Cu;
    {
        const bool branch_taken_0x2a627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A627Cu;
        // 0x2a6280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a627c) {
            ctx->pc = 0x2A6318u;
            goto label_2a6318;
        }
    }
    ctx->pc = 0x2A6284u;
    // 0x2a6284: 0x0  nop
    ctx->pc = 0x2a6284u;
    // NOP
label_2a6288:
    // 0x2a6288: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x2a6288u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a628c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a628cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a6290: 0x2442de98  addiu       $v0, $v0, -0x2168
    ctx->pc = 0x2a6290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958744));
    // 0x2a6294: 0x9046000c  lbu         $a2, 0xC($v0)
    ctx->pc = 0x2a6294u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x47DEA4u));
    // 0x2a6298: 0x24e3fff5  addiu       $v1, $a3, -0xB
    ctx->pc = 0x2a6298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967285));
    // 0x2a629c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x2a629cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x47DE98u));
    // 0x2a62a0: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2a62a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a62a4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2a62a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a62a8: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x2a62a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
    // 0x2a62ac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2a62acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2a62b0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A62B0u;
    {
        const bool branch_taken_0x2a62b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A62B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A62B0u;
        // 0x2a62b4: 0xa3a6002c  sb          $a2, 0x2C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a62b0) {
            ctx->pc = 0x2A62D8u;
            goto label_2a62d8;
        }
    }
    ctx->pc = 0x2A62B8u;
    // 0x2a62b8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2a62b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a62bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a62bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a62c0: 0x24a5dea8  addiu       $a1, $a1, -0x2158
    ctx->pc = 0x2a62c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958760));
    // 0x2a62c4: 0xc04a38c  jal         func_128E30
    ctx->pc = 0x2A62C4u;
    SET_GPR_U32(ctx, 31, 0x2A62CCu);
    ctx->pc = 0x2A62C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A62C4u;
    // 0x2a62c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128E30u, 0x2A62C4u, 0x2A62CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62CCu;
label_2a62cc:
    // 0x2a62cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A62CCu;
    {
        const bool branch_taken_0x2a62cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a62cc) {
            ctx->pc = 0x2A62F0u;
            goto label_2a62f0;
        }
    }
    ctx->pc = 0x2A62D4u;
    // 0x2a62d4: 0x0  nop
    ctx->pc = 0x2a62d4u;
    // NOP
label_2a62d8:
    // 0x2a62d8: 0xc08e492  jal         func_239248
    ctx->pc = 0x2A62D8u;
    SET_GPR_U32(ctx, 31, 0x2A62E0u);
    ctx->pc = 0x2A62DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A62D8u;
    // 0x2a62dc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239248u, 0x2A62D8u, 0x2A62E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62E0u;
label_2a62e0:
    // 0x2a62e0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2a62e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a62e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a62e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a62e8: 0xc04a38c  jal         func_128E30
    ctx->pc = 0x2A62E8u;
    SET_GPR_U32(ctx, 31, 0x2A62F0u);
    ctx->pc = 0x2A62ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A62E8u;
    // 0x2a62ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128E30u, 0x2A62E8u, 0x2A62F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62F0u;
label_2a62f0:
    // 0x2a62f0: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x2a62f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x2a62f4: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x2a62f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a62f8: 0x8faa0014  lw          $t2, 0x14($sp)
    ctx->pc = 0x2a62f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2a62fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a62fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6300: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a6300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6304: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2a6304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2a6308: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2a6308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a630c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A630Cu;
    SET_GPR_U32(ctx, 31, 0x2A6314u);
    ctx->pc = 0x2A6310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A630Cu;
    // 0x2a6310: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A630Cu, 0x2A6314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6314u;
label_2a6314:
    // 0x2a6314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6318:
    // 0x2a6318: 0x12620027  beq         $s3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A6318u;
    {
        const bool branch_taken_0x2a6318 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6318u;
        // 0x2a631c: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6318) {
            ctx->pc = 0x2A63B8u;
            goto label_2a63b8;
        }
    }
    ctx->pc = 0x2A6320u;
    // 0x2a6320: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6320u;
    {
        const bool branch_taken_0x2a6320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6320) {
            ctx->pc = 0x2A6324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6320u;
            // 0x2a6324: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6338u;
            goto label_2a6338;
        }
    }
    ctx->pc = 0x2A6328u;
    // 0x2a6328: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6328u;
    {
        const bool branch_taken_0x2a6328 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6328u;
        // 0x2a632c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6328) {
            ctx->pc = 0x2A6348u;
            goto label_2a6348;
        }
    }
    ctx->pc = 0x2A6330u;
    // 0x2a6330: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2A6330u;
    {
        const bool branch_taken_0x2a6330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6330u;
        // 0x2a6334: 0xdfb10068  ld          $s1, 0x68($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6330) {
            ctx->pc = 0x2A6488u;
            goto label_2a6488;
        }
    }
    ctx->pc = 0x2A6338u;
label_2a6338:
    // 0x2a6338: 0x52620039  beql        $s3, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2A6338u;
    {
        const bool branch_taken_0x2a6338 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a6338) {
            ctx->pc = 0x2A633Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6338u;
            // 0x2a633c: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6420u;
            goto label_2a6420;
        }
    }
    ctx->pc = 0x2A6340u;
    // 0x2a6340: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2A6340u;
    {
        const bool branch_taken_0x2a6340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6340u;
        // 0x2a6344: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6340) {
            ctx->pc = 0x2A6484u;
            goto label_2a6484;
        }
    }
    ctx->pc = 0x2A6348u;
label_2a6348:
    // 0x2a6348: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2a6348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2a634c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a634cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6350: 0xc08753c  jal         func_21D4F0
    ctx->pc = 0x2A6350u;
    SET_GPR_U32(ctx, 31, 0x2A6358u);
    ctx->pc = 0x2A6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6350u;
    // 0x2a6354: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4F0u, 0x2A6350u, 0x2A6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6358u;
label_2a6358:
    // 0x2a6358: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a6358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a635c: 0x24062710  addiu       $a2, $zero, 0x2710
    ctx->pc = 0x2a635cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2a6360: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2a6360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a6364: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a6364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6368: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a6368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a636c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x2a636cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2a6370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6374: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x2a6374u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2a6378: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a6378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a637c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a637cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6384: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a6384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a6388: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a6388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a638c: 0xc0a5ce6  jal         func_297398
    ctx->pc = 0x2A638Cu;
    SET_GPR_U32(ctx, 31, 0x2A6394u);
    ctx->pc = 0x2A6390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A638Cu;
    // 0x2a6390: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297398u, 0x2A638Cu, 0x2A6394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6394u;
label_2a6394:
    // 0x2a6394: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x2a6394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2a6398: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a6398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a639c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a639cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a63a0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a63a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a63a4: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x2a63a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2a63a8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a63ac: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a63acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a63b0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2A63B0u;
    {
        const bool branch_taken_0x2a63b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63B0u;
        // 0x2a63b4: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a63b0) {
            ctx->pc = 0x2A6480u;
            goto label_2a6480;
        }
    }
    ctx->pc = 0x2A63B8u;
label_2a63b8:
    // 0x2a63b8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a63b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a63bc: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2a63bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2a63c0: 0x240201ec  addiu       $v0, $zero, 0x1EC
    ctx->pc = 0x2a63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 492));
    // 0x2a63c4: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2a63c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a63c8: 0x2484de98  addiu       $a0, $a0, -0x2168
    ctx->pc = 0x2a63c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958744));
    // 0x2a63cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a63ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a63d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2a63d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2a63d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a63d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a63d8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A63D8u;
    SET_GPR_U32(ctx, 31, 0x2A63E0u);
    ctx->pc = 0x2A63DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A63D8u;
    // 0x2a63dc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A63D8u, 0x2A63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A63E0u;
label_2a63e0:
    // 0x2a63e0: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x2a63e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2a63e4: 0x14f30006  bne         $a3, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A63E4u;
    {
        const bool branch_taken_0x2a63e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 19));
        ctx->pc = 0x2A63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63E4u;
        // 0x2a63e8: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a63e4) {
            ctx->pc = 0x2A6400u;
            goto label_2a6400;
        }
    }
    ctx->pc = 0x2A63ECu;
    // 0x2a63ec: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a63ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a63f0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2a63f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a63f4: 0x2484deb8  addiu       $a0, $a0, -0x2148
    ctx->pc = 0x2a63f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958776));
    // 0x2a63f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A63F8u;
    {
        const bool branch_taken_0x2a63f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63F8u;
        // 0x2a63fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a63f8) {
            ctx->pc = 0x2A640Cu;
            goto label_2a640c;
        }
    }
    ctx->pc = 0x2A6400u;
label_2a6400:
    // 0x2a6400: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a6400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a6404: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2a6404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6408: 0x2484dec8  addiu       $a0, $a0, -0x2138
    ctx->pc = 0x2a6408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958792));
label_2a640c:
    // 0x2a640c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a640cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6410: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A6410u;
    SET_GPR_U32(ctx, 31, 0x2A6418u);
    ctx->pc = 0x2A6414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6410u;
    // 0x2a6414: 0x24c90002  addiu       $t1, $a2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A6410u, 0x2A6418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6418u;
label_2a6418:
    // 0x2a6418: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A6418u;
    {
        const bool branch_taken_0x2a6418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6418u;
        // 0x2a641c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6418) {
            ctx->pc = 0x2A6484u;
            goto label_2a6484;
        }
    }
    ctx->pc = 0x2A6420u;
label_2a6420:
    // 0x2a6420: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a6420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a6424: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a6424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6428: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a6428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a642c: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x2a642cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2a6430: 0x8010  mfhi        $s0
    ctx->pc = 0x2a6430u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2a6434: 0x2812  mflo        $a1
    ctx->pc = 0x2a6434u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2a6438: 0xc0a5ce6  jal         func_297398
    ctx->pc = 0x2A6438u;
    SET_GPR_U32(ctx, 31, 0x2A6440u);
    ctx->pc = 0x2A643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6438u;
    // 0x2a643c: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297398u, 0x2A6438u, 0x2A6440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6440u;
label_2a6440:
    // 0x2a6440: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x2a6440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2a6444: 0x8e2400fc  lw          $a0, 0xFC($s1)
    ctx->pc = 0x2a6444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x2a6448: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a6448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a644c: 0xac820078  sw          $v0, 0x78($a0)
    ctx->pc = 0x2a644cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
    // 0x2a6450: 0x8e2300fc  lw          $v1, 0xFC($s1)
    ctx->pc = 0x2a6450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x2a6454: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a6454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a6458: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a6458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a645c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a645cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a6460: 0x8e240100  lw          $a0, 0x100($s1)
    ctx->pc = 0x2a6460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x2a6464: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a6464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a6468: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a6468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a646c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a646cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2a6470: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2a6470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2a6474: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a6474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a6478: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a6478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a647c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a647cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a6480:
    // 0x2a6480: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2a6480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a6484:
    // 0x2a6484: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2a6484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2a6488:
    // 0x2a6488: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2a6488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a648c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2a648cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a6490: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2a6490u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a6494: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2a6494u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a6498: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2a6498u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a649c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2a649cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2a64a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A64A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64A0u;
        // 0x2a64a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A64A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A64A8u;
}

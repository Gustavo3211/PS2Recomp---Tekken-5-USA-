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

// Function: sub_001FB1D8
// Address: 0x1fb1d8 - 0x1fb408
void sub_001FB1D8_0x1fb1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB1D8_0x1fb1d8");
#endif

    switch (ctx->pc) {
        case 0x1fb1ecu: goto label_1fb1ec;
        case 0x1fb2e8u: goto label_1fb2e8;
        case 0x1fb358u: goto label_1fb358;
        case 0x1fb360u: goto label_1fb360;
        case 0x1fb3a0u: goto label_1fb3a0;
        case 0x1fb3a8u: goto label_1fb3a8;
        default: break;
    }

    ctx->pc = 0x1fb1d8u;

    // 0x1fb1d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fb1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fb1dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb1e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fb1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fb1e4: 0xc07ec66  jal         func_1FB198
    ctx->pc = 0x1FB1E4u;
    SET_GPR_U32(ctx, 31, 0x1FB1ECu);
    ctx->pc = 0x1FB198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB198u, 0x1FB1E4u, 0x1FB1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB1ECu;
label_1fb1ec:
    // 0x1fb1ec: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb1f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fb1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb1f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fb1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb1f8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fb1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1fb1fc: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb200: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fb200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1fb204: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb208: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1fb208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1fb20c: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb210: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1fb210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1fb214: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb218: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x1fb218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x1fb21c: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb220: 0xa4400038  sh          $zero, 0x38($v0)
    ctx->pc = 0x1fb220u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fb224: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb228: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1fb228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1fb22c: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb230: 0xa440003a  sh          $zero, 0x3A($v0)
    ctx->pc = 0x1fb230u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fb234: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb238: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x1fb238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x1fb23c: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb240: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1fb240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1fb244: 0x8f8497c8  lw          $a0, -0x6838($gp)
    ctx->pc = 0x1fb244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb248: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x1fb248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1fb24c: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x1fb24cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x1fb250: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb254: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x1fb254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    // 0x1fb258: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb25c: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1fb25cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1fb260: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb264: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x1fb264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
    // 0x1fb268: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb26c: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x1fb26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x1fb270: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb274: 0xac600078  sw          $zero, 0x78($v1)
    ctx->pc = 0x1fb274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
    // 0x1fb278: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb27c: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x1fb27cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x1fb280: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb284: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x1fb284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
    // 0x1fb288: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb28c: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x1fb28cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x1fb290: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb294: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x1fb294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
    // 0x1fb298: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb29c: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x1fb29cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
    // 0x1fb2a0: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb2a4: 0xac600098  sw          $zero, 0x98($v1)
    ctx->pc = 0x1fb2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 0));
    // 0x1fb2a8: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb2ac: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x1fb2acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x1fb2b0: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb2b4: 0xac6000a4  sw          $zero, 0xA4($v1)
    ctx->pc = 0x1fb2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
    // 0x1fb2b8: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb2bc: 0xac4000a8  sw          $zero, 0xA8($v0)
    ctx->pc = 0x1fb2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 0));
    // 0x1fb2c0: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb2c4: 0xac6000ac  sw          $zero, 0xAC($v1)
    ctx->pc = 0x1fb2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 0));
    // 0x1fb2c8: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb2cc: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x1fb2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x1fb2d0: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb2d4: 0xac6000b4  sw          $zero, 0xB4($v1)
    ctx->pc = 0x1fb2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 0));
    // 0x1fb2d8: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb2dc: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x1fb2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    // 0x1fb2e0: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb2e4: 0xac6500bc  sw          $a1, 0xBC($v1)
    ctx->pc = 0x1fb2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 5));
label_1fb2e8:
    // 0x1fb2e8: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb2ec: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1fb2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fb2f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fb2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fb2f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fb2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb2f8: 0x28c40002  slti        $a0, $a2, 0x2
    ctx->pc = 0x1fb2f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fb2fc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FB2FCu;
    {
        const bool branch_taken_0x1fb2fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2FCu;
        // 0x1fb300: 0xac6000c0  sw          $zero, 0xC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2fc) {
            ctx->pc = 0x1FB2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb2e8;
        }
    }
    ctx->pc = 0x1FB304u;
    // 0x1fb304: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb308: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fb308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb30c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fb30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb310: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x1fb310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x1fb314: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb318: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x1fb318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x1fb31c: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb320: 0xac600094  sw          $zero, 0x94($v1)
    ctx->pc = 0x1fb320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 0));
    // 0x1fb324: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb328: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x1fb328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x1fb32c: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb330: 0xac6000c8  sw          $zero, 0xC8($v1)
    ctx->pc = 0x1fb330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 0));
    // 0x1fb334: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb338: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1fb338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1fb33c: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb340: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1fb340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1fb344: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb348: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x1fb348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x1fb34c: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb350: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1FB350u;
    SET_GPR_U32(ctx, 31, 0x1FB358u);
    ctx->pc = 0x1FB354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB350u;
    // 0x1fb354: 0xac650050  sw          $a1, 0x50($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1FB350u, 0x1FB358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB358u;
label_1fb358:
    // 0x1fb358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fb358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb35c: 0x0  nop
    ctx->pc = 0x1fb35cu;
    // NOP
label_1fb360:
    // 0x1fb360: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb364: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1fb364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fb368: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fb368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fb36c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fb36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb370: 0x28c400c0  slti        $a0, $a2, 0xC0
    ctx->pc = 0x1fb370u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x1fb374: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FB374u;
    {
        const bool branch_taken_0x1fb374 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB374u;
        // 0x1fb378: 0xac6000cc  sw          $zero, 0xCC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb374) {
            ctx->pc = 0x1FB360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb360;
        }
    }
    ctx->pc = 0x1FB37Cu;
    // 0x1fb37c: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb380: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fb380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fb384: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1fb384u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1fb388: 0xac6203d0  sw          $v0, 0x3D0($v1)
    ctx->pc = 0x1fb388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 976), GPR_U32(ctx, 2));
    // 0x1fb38c: 0x261088d0  addiu       $s0, $s0, -0x7730
    ctx->pc = 0x1fb38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    // 0x1fb390: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb394: 0xac4003d4  sw          $zero, 0x3D4($v0)
    ctx->pc = 0x1fb394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 980), GPR_U32(ctx, 0));
    // 0x1fb398: 0xc07e62c  jal         func_1F98B0
    ctx->pc = 0x1FB398u;
    SET_GPR_U32(ctx, 31, 0x1FB3A0u);
    ctx->pc = 0x1FB39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB398u;
    // 0x1fb39c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F98B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98B0u, 0x1FB398u, 0x1FB3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB3A0u;
label_1fb3a0:
    // 0x1fb3a0: 0xc07e62c  jal         func_1F98B0
    ctx->pc = 0x1FB3A0u;
    SET_GPR_U32(ctx, 31, 0x1FB3A8u);
    ctx->pc = 0x1FB3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB3A0u;
    // 0x1fb3a4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F98B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98B0u, 0x1FB3A0u, 0x1FB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB3A8u;
label_1fb3a8:
    // 0x1fb3a8: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fb3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb3ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fb3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fb3b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fb3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb3b4: 0x9443003e  lhu         $v1, 0x3E($v0)
    ctx->pc = 0x1fb3b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x1fb3b8: 0xa4a303e0  sh          $v1, 0x3E0($a1)
    ctx->pc = 0x1fb3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 992), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fb3bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1fb3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fb3c0: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb3c4: 0x9482003e  lhu         $v0, 0x3E($a0)
    ctx->pc = 0x1fb3c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x1fb3c8: 0xa46203e2  sh          $v0, 0x3E2($v1)
    ctx->pc = 0x1fb3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 994), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fb3cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fb3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fb3d0: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb3d4: 0x94820040  lhu         $v0, 0x40($a0)
    ctx->pc = 0x1fb3d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1fb3d8: 0xa46203e4  sh          $v0, 0x3E4($v1)
    ctx->pc = 0x1fb3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 996), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fb3dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1fb3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fb3e0: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fb3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb3e4: 0x94820040  lhu         $v0, 0x40($a0)
    ctx->pc = 0x1fb3e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1fb3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb3ec: 0xa4a203e6  sh          $v0, 0x3E6($a1)
    ctx->pc = 0x1fb3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 998), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fb3f0: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb3f4: 0xac6003d8  sw          $zero, 0x3D8($v1)
    ctx->pc = 0x1fb3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 984), GPR_U32(ctx, 0));
    // 0x1fb3f8: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb3fc: 0xac4003dc  sw          $zero, 0x3DC($v0)
    ctx->pc = 0x1fb3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 988), GPR_U32(ctx, 0));
    // 0x1fb400: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB400u;
        // 0x1fb404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB408u;
}
